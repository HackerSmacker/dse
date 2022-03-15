#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "dse.h"
#include "dsesigs.h"

/* No need for stdint.h here */
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;

FILE* saveFile;
int fileSize;
// char* fileData;




int read_save(char* fileName) {
	int i;
	char header[32];
	uint32_t numSections;
	struct SaveSection* sections;

	saveFile = fopen(fileName, "r");
	if(!saveFile) {
		perror("Failed to open file: ");
		return -2;
	}
	fseek(saveFile, 0, SEEK_END);
	fileSize = ftell(saveFile);
	fseek(saveFile, 0, SEEK_SET);
	printf("File size: %d\n", fileSize);

	/* Check the header first. */
	fread(header, sizeof(char), 32, saveFile);
	if(strcmp(header, headerMagic) != 0) {
		printf("Header did not validate!\n");
	}

	/* Rewind and then read the whole thing. */
	/*
	fseek(saveFile, 0, SEEK_SET);
	fileData = malloc(fileSize * sizeof(char));
	fread(fileData, sizeof(char), fileSize, saveFile);
	*/

	/* First, figure out how many sections are in the save. */
	fread(&numSections, sizeof(uint32_t), 1, saveFile);
	printf("Number of sections in file: %x\n", numSections);

	sections = malloc(numSections * sizeof(struct SaveSection));
	for(i = 0; i < numSections; i++) {
		read_section(sections[i]);
	}

	fclose(saveFile);
}

void read_section(struct SaveSection current) {
	char charRead = 0xFF;
	current.sectionName = malloc(128 * sizeof(char));
	int readPos = 0;
	char* objectBuffer;
	struct PropertyEntry* properties;
	int propertyCounter = 0;

	/* There is probably a more efficient way to do this */
	while(charRead != 0x00) {
		fread(&charRead, sizeof(char), 1, saveFile);
		current.sectionName[readPos] = charRead;
		readPos++;
	}

	/* First, read the name and then the "magic value" for this section. */
	printf("Parsing section name %s\n", current.sectionName);
	fread(&current.sectionMagic, sizeof(unsigned long), 1, saveFile);
	printf("Section magic: %lu\n", current.sectionMagic);
	printf("Section type: %s\n", string_magic(current.sectionMagic));

	/* The next value is the length of the block. */
	fread(&current.sectionLength, sizeof(unsigned int), 1, saveFile);
	printf("Section length: %d\n", current.sectionLength);
	if(current.sectionLength == 1) {
		printf("This is a section header, more to follow\n");
	}

	/* Read the identifier for this block's data type. */
	fread(&current.propertyMagic, sizeof(unsigned long), 1, saveFile);
	printf("Property magic: %lu\n", current.propertyMagic);
	printf("Property type: %s\n", string_magic(current.propertyMagic));

	/* Get the length of the property index */
	fread(&current.propertyLength, sizeof(unsigned int), 1, saveFile);
	printf("Property length: %d\n", current.propertyLength);

	if(current.propertyMagic == PROPERTYDICTIONARY) {
		properties = malloc(current.propertyLength * sizeof(struct PropertyEntry));
		for(propertyCounter = 0; propertyCounter < current.propertyLength; propertyCounter++) {
			properties[propertyCounter].entryName = malloc(512 * sizeof(char));
			charRead = 0xFF;
			readPos = 0;
			while(charRead != 0x00) {
				fread(&charRead, sizeof(char), 1, saveFile);
				properties[propertyCounter].entryName[readPos] = charRead;
				readPos++;
			}
			printf("Got string: %s\n", properties[propertyCounter].entryName);
		}
	}
	else {
		printf("Skipping unknown data type.\n");
	}
}


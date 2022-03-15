#include <string.h>
#include <stdio.h>

#include "dse.h"
#include "dsetypes.h"

/* There's a more elegant way to do this, I'm sure of it! */
int determine_magic(char* input) {
	return 0;
}

/* Again, this is awful and inefficient. */
/* Yes, enums exist */
char* string_magic(unsigned long value) {
	/*
	if(strcmp(input, SECTION) == 0)
		return "Section";
	else if(strcmp(input, PROPERTYDICTIONARY) == 0)
		return "Property dictionary";
	else if(strcmp(input, MISSIONLOGENTRIESARRAY) == 0)
		return "Mission log entries array";
	else if(strcmp(input, GLOBALMAPICONSARRAY) == 0)
		return "Global map icons array";
	else if(strcmp(input, AREABOX) == 0)
		return "Area box";
	else if(strcmp(input, ENABLEDOCCLUDERCOLLIDERSDICTIONARY) == 0)
		return "Enabled occluder colliders dictionary";
	else if(strcmp(input, LIQUIDVOLUMESDICTIONARY) == 0)
		return "Liquid volumes dictionary";
	else if(strcmp(input, ACTORTILESTATESDICTIONARY) == 0)
		return "Actor tile state dictionary";
	else if(strcmp(input, OCCLUDERVIGNETTESDICTIONARY) == 0)
		return "Occluder/vignette dictionary";
	else if(strcmp(input, MINIMAPVISIBILITYARRAY) == 0)
		return "Minimap visibility array";
	else if(strcmp(input, CHECKPOINTOFFSET) == 0)
		return "Checkpoint offset";
	else if(strcmp(input, MINIMAPCUSTOMMARKERDICTIONARY) == 0)
		return "Minimap custom marker dictionary";
	else if(strcmp(input, VECTOR2) == 0)
		return "2D vector";
	else if(strcmp(input, VECTOR3) == 0)
		return "3D vector";
	else if(strcmp(input, STRINGARRAY) == 0)
		return "String array";
	else if(strcmp(input, STRING256) == 0)
		return "String-256";
	else if(strcmp(input, STRINGID) == 0)
		return "String ID";
	else if(strcmp(input, STRING) == 0)
		return "String";
	else if(strcmp(input, MAPTUTORIALTYPESARRAY) == 0)
		return "Map tutorial types array";
	else if(strcmp(input, FLOAT) == 0)
		return "Floating point value";
	else if(strcmp(input, UINT32) == 0)
		return "Unsigned integer";
	else if(strcmp(input, INT32) == 0)
		return "Signed integer";
	else if(strcmp(input, DOORLIFECOMPONENTSTATE) == 0)
		return "Door life component state";
	else if(strcmp(input, BOOLEANARRAY) == 0)
		return "Boolean array";
	else if(strcmp(input, BOOLEAN) == 0)
		return "Boolean";
	else
		return "Impossible case -- issue detected!";
		*/
	switch(value) {
		case SECTION:
		return "Section";
		break;
		case PROPERTYDICTIONARY:
		return "Property dictionary";
		break;
		case MISSIONLOGENTRIESARRAY:
		return "Mission log entries";
		break;
		case GLOBALMAPICONSARRAY:
		return "Global map icons";
		break;
		case AREABOX:
		return "Area box";
		break;
		case ENABLEDOCCLUDERCOLLIDERSDICTIONARY:
		return "Occluders and colliders dictionary";
		break;
		case LIQUIDVOLUMESDICTIONARY:
		return "Liquid volumes";
		break;
		case ACTORTILESTATESDICTIONARY:
		return "Actor tile states";
		break;
		case OCCLUDERVIGNETTESDICTIONARY:
		return "Occluders dictionary";
		break;
		case MINIMAPVISIBILITYARRAY:
		return "Map visibility";
		break;
		case CHECKPOINTOFFSET:
		return "Checkpoint";
		break;
		case MINIMAPCUSTOMMARKERDICTIONARY:
		return "Map custom markers";
		break;
		case VECTOR2:
		return "2d vector";
		break;
		case VECTOR3:
		return "3d vector";
		break;
		case STRINGARRAY:
		return "string array";
		break;
		case STRING256:
		return "string 256";
		break;
		case STRINGID:
		return "stringid";
		break;
		case STRING:
		return "string";
		break;
		case MAPTUTORIALTYPESARRAY:
		return "map tutorial types";
		break;
		case FLOAT:
		return "float";
		break;
		case UINT32:
		return "uint32";
		break;
		case INT32:
		return "int32";
		break;
		case DOORLIFECOMPONENTSTATE:
		return "door life";
		break;
		case BOOLEANARRAY:
		return "boolean array";
		break;
		case BOOLEAN:
		return "boolean";
		break;
	}
	return "Unknown";
}

void print_hex(char* s) {
	while(*s) {
		printf("%02x", (unsigned int) *s++);
	}
	printf("\n");
};

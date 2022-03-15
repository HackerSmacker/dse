#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dse.h"


/* DSE - Dread Save Editor
 * Made by HackerSmacker, 2022
 * https://github.com/hackersmacker/dse
 * Licensed under the terms of the GNU GPL version 3
 */

int main(int argc, char* argv[]) {
	int status;
	printf("DSE - Dread Save Editor\n");
	printf("Version 0.1\n");
	if(argc < 2) {
		printf("Usage: dse <savefile>\n");
		printf("<savefile> usually refers to common.bmssv\n");
		return -1;
	}
	status = read_save(argv[1]);
	return status;
}


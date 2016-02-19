#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dic.h"

int main (void){
	FILE *archive;
	FILE *archiveout;
	char *str = malloc(200);
	char *strarchiveout = malloc(200); 
	char caracter;

	printf("ingresa el nombre del archivo a encriptar con punto de extension por favor:\n");
	scanf("%s",str);
	archive = fopen(str, "r");
	if(archive == NULL){
		printf("el archivo no existe\n");
		return(0);
	}

	printf("ingresa el nombre del archivo de salida con punto de extension por favor:\n");
	scanf("%s",strarchiveout);
	archiveout = fopen(strarchiveout, "wr");
	if(archiveout == NULL){
		printf("se produjo un error\n");
		return(0);
	}

	while (feof(archive) == 0){
		caracter = fgetc(archive);
		if (feof(archive) == 0) 
		{
			dic(caracter, archiveout);
		}
		
	}


	fclose(archiveout);
	fclose(archive);
	return 0;
}
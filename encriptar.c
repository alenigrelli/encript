#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "dic.h"

int main (int argc, char *argv[]) {
    FILE *archive;
    FILE *archiveout;
    // Max path 200 characters
    char *str = calloc(200, sizeof(char));
    char *strout = calloc(200, sizeof(char));
    char character;


    // Check args
    if(argc == 4 || argc == 2) {
        for(int i = 1; i < argc; i++) {
            if(strcmp(argv[i], "-o") == 0 && i + 1 < argc)
                strcpy(strout, argv[++i]);
            else
                strcpy(str, argv[i]);
        }
    } else {
        printf("Cantidad de argumentos incorrecta\n");
        return 0;
    }

    // Output standar
    if(strout[0] == '\0')
        strcpy(strout, "salida.txt");

    // Open input file
    archive = fopen(str, "r");
    if(archive == NULL) {
        printf("El archivo no existe\n");
        return(0);
    }

    // Open output file
    archiveout = fopen(strout, "w");
    if(archiveout == NULL) {
        printf("Se produjo un error\n");
        return(0);
    }

    // Write
    while (feof(archive) == 0){
        character = fgetc(archive);
        if (feof(archive) == 0)
        {
            dic(character, archiveout);
        }
    }

    free(str);
    free(strout);
    fclose(archive);
    fclose(archiveout);
    return 0;
}
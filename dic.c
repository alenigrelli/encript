#include <stdio.h>
#include <stdbool.h>
#include "dic.h"
void dic(char carac, FILE *archive){

	if (carac == 'a')
		fputc('d',archive);
	if (carac == 'b')
		fputc('y',archive);
	if (carac == 'c')
		fputc('p',archive);
	if (carac == 'd')
		fputc('m',archive);
	if (carac == 'e')
		fputc('z',archive);
	if (carac == 'f')
		fputc('w',archive);
	if (carac == 'g')
		fputc('r',archive);
	//if (carac == 'h')
	//	fputc('ñ',archive);
	if (carac == 'i')
		fputc('u',archive);
	if (carac == 'j')
		fputc('o',archive);
	if (carac == 'k')
		fputc('s',archive);
	if (carac == 'l')
		fputc('q',archive);
	if (carac == 'm')
		fputc('v',archive);
	if (carac == 'n')
		fputc('t',archive);
	//if (carac == 'ñ')
	//	fputc('j',archive);
	if (carac == 'o')
		fputc('e',archive);
	if (carac == 'p')
		fputc('g',archive);
	if (carac == 'q')
		fputc('i',archive);
	if (carac == 'r')
		fputc('b',archive);
	if (carac == 's')
		fputc('h',archive);
	if (carac == 't')
		fputc('a',archive);
	if (carac == 'u')
		fputc('x',archive);
	if (carac == 'v')
		fputc('l',archive);
	if (carac == 'w')
		fputc('f',archive);
	if (carac == 'x')
		fputc('k',archive);
	if (carac == 'y')
		fputc('c',archive);
	if (carac == 'z')
		fputc('n',archive);
	}

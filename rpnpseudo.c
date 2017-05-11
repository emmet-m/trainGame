// pseudocode for generating valid RPN
// x denotes number, * denotes operator
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void generator(char * string, int numbers, int symbols, int numonstack) {
	printf("memes\n");
	char string1[10]; strcpy(string1, string);
	char string2[10]; strcpy(string2, string);
	char string3[10]; strcpy(string3, string);
	char string4[10]; strcpy(string4, string);

	if(numbers == 0 && symbols == 0){
		printf("printing string numbers = %d symbols = %d\n", numbers, symbols);
		//printf("%s\n", string1);
		return;
	}

	if(numonstack < 2)
		generator(strcat(string2, "x"), numbers-1, symbols, numonstack+1);

	else{
		//printf("2 new generators %s numbers = %d symbols = %d\n", string2, numbers, symbols);
		if(numbers > 0)
			generator(strcat(string3, "x"), numbers-1, symbols, numonstack+1);
		if(symbols > 0)
			generator(strcat(string4, "*"), numbers, symbols-1, numonstack-1);
	}


}

/*
 * Assignment_1.5.c
 *
 *  Created on: Sep 2, 2021
 *      Author: abdel
 */

/*EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################
 */

#include <stdio.h>
void main () {
	char character;
	printf("Enter a character: \n");
	fflush(stdin); fflush(stdout);
	scanf("%c", &character);
	printf("ASCII value of %c = %d", character, character);
}

/*
 * Assignment_2.3.c
 *
 *  Created on: Sep 3, 2021
 *      Author: abdel
 */

#include <stdio.h>
void main(){

	char character;
	printf("Enter an alphabet: \n");
	fflush(stdin); fflush(stdout);
	scanf("%c", &character);

	/*
	if(character == 'a' || character == 'e' || character == 'o' || character == 'i' || character == 'u'
			|| character == 'A' || character == 'E' || character == 'O' || character == 'I' || character == 'U'){
		printf("%c is a vowel.\n", character);
	}
	else printf("%c is a consonant.\n", character);
	 */

	///////////////////////////////////////////////////////////////////////
	(character == 'a' || character == 'e' || character == 'o' || character == 'i' || character == 'u'
			|| character == 'A' || character == 'E' || character == 'O' || character == 'I' || character == 'U')
						?printf("%c is a vowel.\n", character):printf("%c is a consonant.\n", character);
}

/*
 * Assignment_2.5.c
 *
 *  Created on: Sep 4, 2021
 *      Author: abdel
 */

#include <stdio.h>
void main (){
	char character;
	printf("Enter a character: \n");
	fflush(stdin); fflush(stdout);
	scanf("%c", &character);

	if ((character>='a' && character<='z')||(character>='A'&&character<='Z'))
		printf("%c is an alphabet\n", character);
	else printf("%c is not an alphabet", character);

}

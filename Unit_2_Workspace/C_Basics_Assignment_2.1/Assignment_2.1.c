/*
 * Assignment_2.1.c
 *
 *  Created on: Sep 3, 2021
 *      Author: abdel
 */

#include <stdio.h>
void main(){

	int number;
	printf("Enter an integer you want to check: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);

	if(number % 2 == 0){
		printf("%d is even.\n", number);
	}
	else printf("%d is odd.\n", number);
}

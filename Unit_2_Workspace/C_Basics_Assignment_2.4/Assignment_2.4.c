/*
 * Assignment_2.4.c
 *
 *  Created on: Sep 3, 2021
 *      Author: abdel
 */

#include <stdio.h>
void main(){
	float number;
	printf("Enter a number: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &number);
	if(number > 0) printf("%.2f is positive\n", number);
	else if (number < 0) printf("%.2f is negative\n", number);
	else printf("You entered zero\n");
}


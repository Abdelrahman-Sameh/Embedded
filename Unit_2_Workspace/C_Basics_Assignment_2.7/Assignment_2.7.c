/*
 * Assignment_2.7.c
 *
 *  Created on: Sep 4, 2021
 *      Author: abdel
 */

#include <stdio.h>
void main(){
	int number, factorial = 1 ;
	printf("Enter a number: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);
	if (number<0) printf("ERROR!!! Factorial of negative number dosen't exist.\n");
	else if (number == 0) printf("Factorial of zero is 1\n");
	else {for(int i=1; i<=number; ++i){
		factorial *= i;
	}
	printf("Factorial = %d\n", factorial);
	}
}

/*
 * Assignment_2.3.c
 *
 *  Created on: Sep 3, 2021
 *      Author: abdel
 */

#include <stdio.h>
void main(){
	int number_1, number_2, number_3;
	printf("Enter three numbers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &number_1, &number_2, &number_3);

	if(number_1 > number_2){
		if (number_1 > number_3) printf("Largest number = %d", number_1);
		else printf("Largest number = %d", number_3);
	}
	else if(number_2 > number_3) printf("Largest number = %d", number_2);
	else printf("Largest number = %d", number_3);
}

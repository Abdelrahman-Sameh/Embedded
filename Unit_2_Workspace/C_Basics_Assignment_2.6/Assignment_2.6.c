/*
 * Assignment_2.6.c
 *
 *  Created on: Sep 4, 2021
 *      Author: abdel
 */

#include <stdio.h>
void main(){
	int number, sum = 0 ;
	printf("Enter a number: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);

	for(int i=1; i<=number; ++i){
		sum += i;
	}
	printf("sum = %d\n", sum);
}

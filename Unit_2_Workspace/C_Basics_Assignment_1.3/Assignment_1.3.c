/*
 * Assignment_1.3.c
 *
 *  Created on: Sep 2, 2021
 *      Author: abdel
 */

/*EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################
 */

#include <stdio.h>
void main(){
	int number_1, number_2;
	printf("Enter two integers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&number_1, &number_2);	//There is no comma between %d & %d
	printf("Sum: %d", number_1 + number_2);
}

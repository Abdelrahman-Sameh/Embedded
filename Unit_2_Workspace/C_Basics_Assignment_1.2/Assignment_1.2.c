/*
 * Assignment_1.2.c
 *
 *  Created on: Sep 2, 2021
 *      Author: abdel
 */

/*EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################
 */

#include <stdio.h>
void main(){
	int number;
	printf("Enter an Integer: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);
	printf("You Entered: %d", number);
}

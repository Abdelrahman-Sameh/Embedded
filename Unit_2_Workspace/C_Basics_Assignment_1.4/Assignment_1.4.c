/*
 * Assignment_1.4.c
 *
 *  Created on: Sep 2, 2021
 *      Author: abdel
 */

/*EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
 */

#include <stdio.h>
void main() {
	float number_1, number_2;
	printf("Enter two numbers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &number_1, &number_2);
	float product = number_1*number_2;
	printf("Product: %f", product);
}

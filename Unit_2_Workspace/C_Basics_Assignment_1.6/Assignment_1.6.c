/*
 * Assignment_1.6.c
 *
 *  Created on: Sep 2, 2021
 *      Author: abdel
 */

/*
  EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################
 */

#include <stdio.h>
void main(){

	float a, b, temp;
	printf("Enter value of a: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %.2f\n", a);
	printf("After swapping, value of b = %.2f\n", b);
}

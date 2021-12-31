/*
 * C_Arrays_Assignment_1.c
 *
 *  Created on: Dec 30, 2021
 *      Author: abdel
 */

#include <stdio.h>
void main(){
	float a[2][2];
	float b[2][2];
	int r,c;

	/*
	printf("Enter the elements of 1st matrix\n");
	printf("Enter a11: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a[0][0]);
	printf("Enter a12: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a[0][1]);
	printf("Enter a21: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a[1][0]);
	printf("Enter a22: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a[1][1]);
	 */
	printf("Enter the elements of 1st matrix\n");
	for(r=0; r<2; r++){
		for(c=0; c<2; c++){
			printf("Enter a%d%d:", r+1, c+1);
			fflush(stdin);	fflush(stdout);
			scanf("%f", &a[r][c]);
		}
	}

	/*
	printf("Enter the elements of 2nd matrix\n");
	printf("Enter b11: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b[0][0]);
	printf("Enter b12: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b[0][1]);
	printf("Enter b21: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b[1][0]);
	printf("Enter b22: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b[1][1]);
	 */
	printf("Enter the elements of 2nd matrix\n");
	for(r=0; r<2; r++){
		for(c=0; c<2; c++){
			printf("Enter b%d%d:", r+1, c+1);
			fflush(stdin);	fflush(stdout);
			scanf("%f", &b[r][c]);
		}
	}

	printf("Sum of matrix\n");
	for(r=0; r<2; r++){
		for(c=0; c<2; c++){
			printf("%.2f", a[r][c]+b[r][c]);
			printf("\t");
		}
		printf("\n");
	}
}

/*
 * Assignment_2.8.c
 *
 *  Created on: Sep 4, 2021
 *      Author: abdel
 */

// switch case usage
#include <stdio.h>
void main(){
	char operator;
	float operand_1, operand_2;

	printf("Enter operator either + or - or * or divide: \n");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &operand_1, &operand_2);

	/*
	if(operator == '+') printf("%.2f + %.2f = %.2f", operand_1, operand_2, operand_1+operand_2);
	if(operator == '-') printf("%.2f - %.2f = %.2f", operand_1, operand_2, operand_1-operand_2);
	if(operator == '*') printf("%.2f * %.2f = %.2f", operand_1, operand_2, operand_1*operand_2);
	if(operator == '/') printf("%.2f / %.2f = %.2f", operand_1, operand_2, operand_1/operand_2);
	 */

	switch (operator){
	case '+':
			printf("%.2f + %.2f = %.2f", operand_1, operand_2, operand_1+operand_2);
			break;
	case '-':
			printf("%.2f - %.2f = %.2f", operand_1, operand_2, operand_1-operand_2);
			break;
	case '*':
			printf("%.2f * %.2f = %.2f", operand_1, operand_2, operand_1*operand_2);
			break;
	case '/':
			printf("%.2f / %.2f = %.2f", operand_1, operand_2, operand_1/operand_2);
			break;
	default:
		printf("ERROR ! Operator is not correct\n");
		break;
	}
}


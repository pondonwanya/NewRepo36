#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main()
{
	int m[4][5], sum_i[4], sum_j[5], total = 0;
	printf("Matrix 4x5 : \n\n");
	for (int i = 0; i <= 3; i++) {
		printf("Row %d : \n", i);
		for (int j = 0; j <= 4; j++) {
			printf("Input Matrix[%d][%d] : ", i, j);
			scanf_s("%d", &m[i][j]);
		}
	}

	/****Compute Sum Rows****/
	for (int i = 0; i <= 3; i++) {
		sum_i[i] = 0;
		for (int j = 0; j <= 4; j++) {
			sum_i[i] = sum_i[i] + m[i][j];
		}
	}

	/****Compute Sum Column****/
	for (int j = 0; j <= 4; j++) {
		sum_j[j] = 0;
		for (int i = 0; i <= 3; i++){
			sum_j[j] = sum_j[j] + m[i][j];
	}
	total = total + sum_j[j];
}
	clearerr_s;
	printf("\n\n");
	printf("Sum Rows\n");

	/****Show Matrix****/
	for (int i = 0; i <= 3; i++) {
		printf(" ");
		for (int j = 0; j <= 4; j++) {
			printf("%4d", m[i][j]);
		}
		printf("%9d", sum_i[i]);
		printf("\n");
	}
	printf("\nSum Column\n");
	printf(" ");
	for (int j = 0; j <= 4; j++) 
		printf("%4d", sum_j[j]);
		printf("%9d", total);
		printf(" ");
}
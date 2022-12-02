#include<stdio.h>
#define size 5
int main(void)
{
	int row, column;
	char star[size][size]  = {
		{' ', ' ', '*', ' ', ' '},
		{' ', '*', '*', '*', ' '},
		{' ', '*', '*', '*', ' '},
		{' ', '*', '*', '*', ' '},
		{' ', ' ', '*', ' ', ' '}
		};
	for (row = 0; row < size; row++) {
			for (column = 0; column < size; column++)
			printf("%c", star[row][column]);
			printf("\n");
	}

	for (row = 0; row < size; row++) {
		for (column = 0; column < size; column++)
		printf("%c", star[column][row]);
		printf("\n");
		}

}


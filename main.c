#include <stdio.h>

int main(void)
{
	int **arrValue, i, j, rows, cols;
	int maxConsedata, repeatCount = 0;
	// display the program information
	printf("Program to find the maximum consecutive sequence of same integer in the 2d array\n\n");
	// prompt the user to enter the size of the array and read
	// the values as prompted
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of columns: ");
	scanf("%d", &cols);
	printf("\nEnter data in matrix form as prompted: \n");
	// set the memory of the array
	arrValue = (int **)malloc(rows * sizeof(int));
	for (i = 0; i < rows; i++)
	{
		arrValue[i] = (int *)malloc(cols * sizeof(int));
		printf("\nEnter row %d data: ", i);
		// read the values from the reach row
		for (j = 0; j < cols; j++)
		{
			scanf("%d", &arrValue[i][j]);
		}
	}
	printf("\n");
	// set the value of maxConsedata to hold the initial value of
	// arrValue at index 0, 0
	maxConsedata = arrValue[0][0];
}
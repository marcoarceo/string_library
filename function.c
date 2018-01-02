#include <stdio.h>

void max_consecutive_integer(int **arrValue, int rows, int cols, int *maxConseData, int *count)
{
	// declare the required variables
	int i, j, dataAtRowCol, maxCount = 1;
	int counter = 1;
	// set the initial valule of array into dataAtRowCol
	dataAtRowCol = (int)arrValue[0][0];
	// loop to check through the row
	for (i = 0; i < rows; i++)
	{
		//set the initial j values depending on the i value
		if (i == 0)
			j = 1;
		else
			j = 0;
		// loop to go through each column
		for (; j < cols; j++)
		{
			// check the condition whether the data in the dataAtRowCol
			// is equal to the data at index i, j of arrValue. If so,
			// increment the counter value
			if (arrValue[i][j] == dataAtRowCol)
				counter = counter + 1;
			// if it not equal check for the longest length
			else
			{
				// if the counter value is greater than maxCount, then
				// modify the values of maxCount to counter and
				// maxConsedata to dataAtRowCol
				if (maxCount < counter)
				{
					maxCount = counter;
					*maxConseData = dataAtRowCol;
				}
				// reset the counter to 1
				counter = 1;
				// set the dataAtRowCol value to new value
				dataAtRowCol = arrValue[i][j];
			}
		}
	}
	// set the count of sequence of same integer count to maxCount
	*count = maxCount;
}
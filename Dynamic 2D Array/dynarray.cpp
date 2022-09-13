#include <iostream>
#include <iomanip>

int** setdata(int rows, int columns)
{
	int** data = new int*[rows]();
	for (int i = 0; i < rows; i++)
	{
		data[i] = new int[columns]();
	}
	return data;
}

void printarray(int** data, int rows, int columns)
{
	for (int r = 0; r < rows ; r++)
	{
		for (int c = 0; c < columns; c++)
		{
			std::cout << std::setw(2) << data[r][c] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	const int rows = 3;
	const int cols = 2;
	int** data = setdata(rows, cols);
	printarray(data, rows, cols);
	for (int i = 0; i < rows; i++)
		delete[] data[i];
	delete[] data;
	return 0;
	
}
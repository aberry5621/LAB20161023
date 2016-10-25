// my program
// programmer: alex
// date: octo 24 2016
// something about binary search

#define prog 2

#if prog == 2

#include <iostream>
#include <ctime>
using namespace std;

const int COL_SIZE = 4;
double sum_column(const double matrix[][COL_SIZE], int row_size, int col_idx);

int main() {

	const int ROW_SIZE = 3;
	const int COL_SIZE = 4;
	double matrix[ROW_SIZE][COL_SIZE];

	cout << "Enter a 3 - by - 4 matrix, row by row :" << endl;

	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
			cin >> matrix[row][col];
			cout << "Initializing matrix cell [" << row << "][" << col << "] with " << matrix[row][col] << endl;
		}
	}

	for (int i = 0; i < COL_SIZE; i++)
	{
		sum_column(matrix, ROW_SIZE, i);
	}

	return 0;

}

double sum_column(const double matrix[][COL_SIZE], int row_size, int col_idx) {

		double col_total = 0;
		{
			for (int row = 0; row < row_size; row++) {
				col_total += matrix[row][col_idx];
			}
			cout << "Sum for column: " << col_idx << " " << col_total << endl;
		}

		return col_total;

}












#elif prog == 1

#include <iostream>
using namespace std;

// sorts arrays
void arr_sort(int[], int, int);

// prints arrays
void arr_print(int[], int, int);

int main() {

	cout << "A binary search exercise" << endl;

	int const ARR_SIZE = 10;



	return 0;

}
#endif
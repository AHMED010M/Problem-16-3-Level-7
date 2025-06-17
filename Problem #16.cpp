#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int RandomNumber(int From, int To)
{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}



void FillaMatrix3x3(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j];

		}

	}


}

bool IsSparceMatrix(int arr[3][3], int Rows, int Cols)
{
	short counter = 0;
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				if (arr[i][j] == 0)
				{
					counter++;
				}
				else if (counter >= 5)
				{
					return true;
				}
			}

		}
		return false;
}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);

		}
		cout << "\n";
	}

}



int main()
{

	srand(time(0));

	int arr1[3][3] = { { 0,0,0 }, { 3,0,4 }, { 0,1,0 } };

	FillaMatrix3x3(arr1, 3, 3);

	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr1, 3, 3);

	if (IsSparceMatrix(arr1, 3, 3))
	{
		cout << "\nYes : It is Sparse Matrix." << endl;
	}
	else
		cout << "\nNO : It is NOT Sparse Matrix." << endl;

}


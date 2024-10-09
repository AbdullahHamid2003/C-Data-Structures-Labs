#include <iostream>
using namespace std;
int main()
{
	int matrix[3][3], temp;

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << "Enter an integer value for Matrix[" << i << "][" << j << "]: ";
			cin >> matrix[i][j];
		}
	}
	cout << "\nMatrix:" << "\n";
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}

	cout << "Transpose:" << "\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";

	system("pause");
	return 0;
}

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr1[3][3], arr2[3][3], sum[3][3];
//
//	//Input for Array 01
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "Enter an integer value for arr1[" << i << "][" << j << "]: ";
//			cin >> arr1[i][j];
//		}
//	}
//	cout << "\n";
//
//	//Input for Array 02
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "Enter an integer value for arr2[" << i << "][" << j << "]: ";
//			cin >> arr2[i][j];
//		}
//	}
//
//	//Calculating sum of Array 01 and 02
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum[i][j] = arr1[i][j] + arr2[i][j];
//		}
//	}
//
//	//Printing Array 01
//	cout << "\nArray 01:\n";
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr1[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//
//	//Printing Array 02
//	cout << "\nArray 02:\n";
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr2[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//
//	//Printing Sum of Array 01 and 02
//	cout << "\n\nSum of Array 01 and 02:\n";
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << sum[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//	cout << "\n";
//
//	system("pause");
//	return 0;
//}
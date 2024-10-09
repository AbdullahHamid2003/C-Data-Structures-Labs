#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 6 , 8 , 5 , 10 , 9 };
	cout << "Array elements are before sort:";
	int temp;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i = 1; i < 5; i++)
	{
		temp = arr[i];      // temp = 8 
		int j = i - 1;      // j = 0

		while (j >= 0 && arr[j] > temp)  //arr[j] = 6
		{
			arr[j + 1] = arr[j];
			j = j - 1;              // 0-1 = -1 so j=-1
		}
		arr[j + 1] = temp;         
	}
	cout << "\nsorted arrray is :";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
}
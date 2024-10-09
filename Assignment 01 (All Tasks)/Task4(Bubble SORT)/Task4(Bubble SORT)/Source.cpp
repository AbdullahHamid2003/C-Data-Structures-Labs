#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
	int arr[5] = { 4,7,2,5,6 };
	cout << "Array elements are: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "  " << arr[i];
	}
	for (int i = 1; i < 5; i++) 
	{ 
		for (int j = 0; j < 5 - i; j++)
		{ 
			if (arr[j] > arr[j + 1]) 
			{ 
				int temp = arr[j]; 
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "\n\nsorted array: ";
	for (int i = 0; i < 5; i++) 
	{
		cout << arr[i] << " ";
	}
	return 0;
}



















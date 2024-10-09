#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 2,1,5,4,3 };
	cout << "Array before sort:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i = 0; i < 5 - 1; i++)
	{
		int min = arr[i]; 
		int loc = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				loc = j;
			}
		}
			int temp = arr[i];
			arr[i] = arr[loc];
			arr[loc] = temp;
	}
	cout << "\n Array after sort:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
}
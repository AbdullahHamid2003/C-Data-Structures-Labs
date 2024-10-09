#include <iostream>
using namespace std;
int main()
{
	int arr[5] = {5,4,3,2,1};
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	int counter = 1;
	while (counter < 5 )
	{
		for (int i = 0; i < 5 - counter; i++)  
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		counter++;
	}
	cout << "\nArray after sort: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
}
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
	int s = 0;
	int e = n;
	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (arr[mid] == key)
		{
			for (int i = 0; i < 10; i++)
			{
				if (arr[i] == key)
				{
					for (int j = i; j < (10 - 1); j++)
						arr[j] = arr[j + 1];
				}
			}
			return mid;
		}
		if (arr[mid] < key)
		{
			return binarySearch(arr, s, mid - 1);
		}
		else
		{
			return binarySearch(arr, mid + 1, key);
		}
		s++;
	}
	return -1;
}
int main()
{
	int arr[10] = { 11,22,33,36,45,52,57,60,64,78 };
	int n = 10;
	int key;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\nEnter your key to delete: ";
	cin >> key;
	int result = binarySearch(arr, n, key);
	if (result == -1)
	{
		cout << "Element not found";
	}
	else
	{
		cout << "\nElement deleted at position: " << result << endl;
	}
	cout << "\nNew array is:";
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
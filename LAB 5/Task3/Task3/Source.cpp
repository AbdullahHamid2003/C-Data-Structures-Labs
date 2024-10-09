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
			return mid;
		}
		else if (arr[mid] > key)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
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
	cout << "\n\nEnter your key to search: ";
	cin >> key;
	int result = binarySearch(arr, n, key);
	if (result == -1)
	{
		cout << "Element not found";
	}
	else
	{
		cout << "\nElement found at position: " << result;
	}
}
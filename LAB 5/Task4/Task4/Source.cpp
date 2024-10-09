#include <iostream>
#include <algorithm>
using namespace std;
void dlt_element(int arr[], int key)
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == key)
		{
			for (int j = i; j < (10 - 1); j++)
				arr[j] = arr[j + 1];
		}
	}
}
int main()
{
	int arr[] = { 11, 22, 33, 36, 45, 52, 57, 60, 64, 78 };
	int n = 10, flag = false;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}   cout << endl;
	int key;
	cout << "\nEnter the key you want to delete: "; 
	cin >> key;
	int s = 0, e = n - 1;
	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (key == arr[mid])
		{
			dlt_element(arr, key);
			n--;
			flag = true;
			break;
		}
		else if (key < arr[mid])
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	if (flag) {
		cout << "\nElement Found , now the new array is: ";
	}
	else {
		cout << "Element Not Found";
	}   
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
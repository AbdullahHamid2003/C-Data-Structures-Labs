#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
	bool flag = false;
	cout << "Sorted array after Bubble Sort: " << endl;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				flag = true;
			}
		}
		if (!flag)
		{
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
void InsertionSort(int arr[], int n)
{
	cout << "\n\nSorted array after Insertion Sort:" << endl;
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (arr[j] > key && j >= 0) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
void SelectionSort(int arr[], int n)
{
	cout << "\n\nSorted array after Selection Sort:" << endl;
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		int t = arr[i];
		arr[i] = arr[min];
		arr[min] = t;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[10] = { 0,8,5,9,6,4,3,7,2,1 };
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	BubbleSort(arr, n);
	InsertionSort(arr, n);
	SelectionSort(arr, n);

	return 0;
}

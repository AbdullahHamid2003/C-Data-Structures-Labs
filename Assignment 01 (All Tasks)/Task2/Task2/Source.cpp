#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	int num;
	int found = 0;
	cout << "Enter any 10 elements:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "\nElements you entered are: ";
	for (int i = 0; i < 10; i++)
	{
		cout << " " << arr[i];
	}
	cout << "\nGive a number to search : ";
	cin >> num;
	for (int i = 0; i < 10; i++)
	{
		if (num == arr[i])
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
	{
		cout << "The number is present in an array!";
	}
	else if (found == 0)
	{
		cout << "The number is present in an array!";
	}	
}

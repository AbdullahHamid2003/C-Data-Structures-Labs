#include <iostream>
using namespace std;
int main()
{
	int arr[10] = { 6,7,9,8,0,2,3,1,5,4 };
	int n,i;
	bool flag = false;
	for (i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	cout << "Enter element to search in array: ";
	cin >> n;
	for (i = 0; i < 10; i++)
	{
		if (n == arr[i])
		{
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		cout << "\n element found at position " << i;
	}
	else
	{
		cout << "element not found";
	}
}
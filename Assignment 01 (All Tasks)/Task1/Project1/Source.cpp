#include <iostream>
using namespace std;
int main() 
{
	int count = 1;
	int arr[5] = { 78,87,59,65,91 };
	for (int i = 0; i < 5; i++)
	{
		cout << "Test" << count << " = " << arr[i] << " marks" << endl;
		count++;
	}
}
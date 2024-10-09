#include<iostream>
using namespace std;
class Stack {
public:
	int stack[6]; int n = 6;
	int top = -1;
	void push(int x) 
	{
		if (top == n - 1)
		{
			cout << "Stack overflow" << endl;
			return;
		}
		top++;
		stack[top] = x;
	}
	void pop()
	{
		if (top == -1)
		{
			cout << "No element to pop" << endl;
		}
		top--;
	}
	int Peek()
	{
		if (top == -1)
		{
			cout << "No element in stack" << endl;
			return -1;
		}
		return stack[top];
	}
	void exit()
	{
		exit();
	}
	void display()
	{
		if (top >= 0)
		{
			cout << "Stack elements are : " << endl;
			for (int i = top; i >= 0; i--)
			{
				cout << "| " << stack[i] << " |";
				cout << endl;
			}
		}
		else { cout << "Stack is empty"; };
	}
};
void main()
{
	Stack st;
	int n, choice;
	cout << "1. Push an element in Stack \n2. Pop an Element from Stack ";
	cout << "\n3. Display All Elements \n4. Display Top Elements";
	cout << "\n5. Exit " << endl;
	cout << "--------------------------------" << endl;
    a:
	cout << "Please Enter Your Choice : ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter Push Element : ";
		cin >> n;
		st.push(n);
	}
	else if (choice == 2)
	{
		st.pop();
	}
	else if (choice == 3)
	{
		st.display();
	}
	else if (choice == 4)
	{
		cout << "Top : " << "| " << st.Peek() << " | " << endl;
	}
	else if (choice == 5)
	{
		cout << "Exit : "; 
		st.exit();
	}
	goto a;
}
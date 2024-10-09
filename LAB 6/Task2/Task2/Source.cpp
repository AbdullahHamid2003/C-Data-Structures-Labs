#include <iostream>
using namespace std;
class Node
{
public:
	Node* prev;
	int data;
	Node* next;
	Node(int val)
	{
		data = val;
		prev = NULL;
		next = NULL;
	}
};
void insertAtTail(Node*& head, int val)
{
	Node* newNode = new Node(val);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	Node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newNode->prev = temp;
	temp->next = newNode;
}
void deleteFromEnd(Node*& head)
{
	Node* temp1 = head;
	if (temp1->next == NULL)
	{
		head = NULL;
		free(temp1);
		return;
	}
	Node* temp2 = head;
	while (temp2->next->next != NULL)
	{
		temp2 = temp2->next;
	}
	Node* lastNode = temp2->next;
	temp2->next = NULL;
	free(lastNode);
}
void isListEmpty(Node* head)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
	}
	else
		cout << "List is not empty" << endl;
}
void display(Node* head)
{
	while (head != NULL)
	{
		cout << head->data << "->";
		head = head->next;
	}
	cout << "NULL" << endl;
}
int main()
{
	cout << endl
		<< endl;
	Node* head;
	head = NULL;
	int option;
	cout << "--------------Doubly-Linked List implementation of LIST ADT--------------\n\n";
		cout << "1. Insert an element at the end \n2. Delete an element from end \n3. Display List \n4. Is List Empty \n5. Exit \n";
		cout << "-------------------------------------------------------------------\n";
	while (true)
	{
		cout << "\nPlease enter your choice: ";
		cin >> option;
		int key;
		switch (option)
		{
		case 1:
			cout << "Enter value to enter: ";
			cin >> key;
			insertAtTail(head, key);
			break;
		case 2:
			deleteFromEnd(head);
			break;
		case 3:
			display(head);
			break;
		case 4:
			isListEmpty(head);
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "Invalid Number" << endl;
			break;
		}
	}
	cout << endl
		<< endl;
	return 0;
}
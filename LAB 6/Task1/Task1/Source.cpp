#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node(int val)
	{
		data = val;
		next = NULL;
	}
};
void insertAtEnd(Node*& head, int val)
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
	temp->next = newNode;
}
void deleteFromEnd(Node*& head)
{
	if (head->next == NULL)
	{
		head = NULL;
	}
	Node* temp = head;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	Node* lastNode = temp->next;
	temp->next = NULL;
	free(lastNode);
}
void search(Node* head, int val)
{
	bool flag = false;
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == val)
		{
			flag = true;
			break;
		}
		temp = temp->next;
	}
	if (flag)
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;
}
void isListEmpty(Node* head)
{
	if (head == NULL)
		cout << "List is empty" << endl;
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
	cout << endl << endl;
	Node* head;
	head = NULL;
	int opt;
	cout << "-------------- Singly-Linked List implementation of LIST ADT--------------\n";
	cout << "\n1. Insert an element at the end \n2. Delete an element from end \n3. Search an element \n4. Display List \n5. Is List Empty \n6. Exit \n";
	cout << "-------------------------------------------------------------------\n";
	while (true)
	{
		cout << "\nPlease enter your choice: ";
		cin >> opt;
		int key;
		switch (opt)
		{
		case 1:
			cout << "Enter value to enter: ";
            cin >> key;
            insertAtEnd(head, key);
            break;
        case 2:
	        deleteFromEnd(head);
	        break;
        case 3:
	        cout << "Enter node number to search: ";
	        cin >> key;
	        search(head, key);
	        break;
		case 4:
			display(head);
			break;
		case 5:
			isListEmpty(head);
			break;
		case 6:
			exit(0);
			break;
		default:
			cout << "Invalid Number" << endl;
			break;
		}
	}
	return 0;
}
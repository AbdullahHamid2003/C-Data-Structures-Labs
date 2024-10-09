//SINGLE LINK LIST
#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* next;
	node(int val)
	{
		data = val;
		next = NULL;
	}
};
void InsertionAtHead(node*& head, int val)
{
	node* temp = new node(val);
	temp->next = head;
	head = temp;
}
void InsertionAtTail(node*& head, int val)
{
	node* n = new node(val);
	if (head == NULL)
	{
		return;
	}
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}
void InsertionAtNth(node*& head, int data, int n)
{
	node* temp1 = new node(data);
	temp1->data = data;
	temp1->next = NULL;
	if (n == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	node* temp2 = head;
	for (int i = 0; i < n - 2; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}
bool Search(node*& head, int val)
{
	node* temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		if (temp->data == val)
		{
			return true;
		}
	}
	return false;
}
void deletion(node*& head, int val)
{
	node* temp = head;
	if (head == NULL)
	{
		return;
	}
	while (temp->next->data != val)
	{
		temp = temp->next;
	}
	node* todelete = temp->next;
	temp->next = temp->next->next;
	delete todelete;
}
void display(node*& head)
{
	node* temp = head;
	if (head == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
	}
}
int main()
{
	node* head = NULL;
	InsertionAtHead(head, 3);
	InsertionAtHead(head, 2);
	InsertionAtHead(head, 1);
	display(head);
	InsertionAtTail(head, 4);
	InsertionAtTail(head, 5);
	cout << endl;
	display(head);
}

//DOUBLY LINK LIST

#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* next;
	node* prev;
	node(int val)
	{
		data = val;
		next = NULL;
		prev = NULL;
	}
};
void InsertionAtHead(node*& head, int val)
{
	node* n = new node(val);
	if (head != NULL)
	{
		head->prev = n;
	}
	head = n;
}
void InsertionAtTail(node*& head, int val)
{
	if (head == NULL)
	{
		InsertionAtHead(head, val);
		return;
	}
	node* n = new node(val);
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
	n->prev = head;
}
void InsertionAtNth(node*& head, int val)
{

}
bool Search(node*& head, int val)
{
	node* temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		if (temp->data == val)
		{
			return true;
		}
	}
	return false;
}
void ReversePrint(node*& head)
{
	node* temp = head;
	if (temp == NULL)
	{

	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	cout << "Reverse Print: ";
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->prev;
	}
}
void deletionAtHead(node*& head)
{
	node* todelete = head;
	head = head->next;
	head->prev = NULL;
	delete todelete;
}
void deletion(node*& head, int pos)
{
	if (pos == 1)
	{
		deletionAtHead(head);
        return;
	}
	node* temp = head;
	int count = 1;
	while (temp != NULL && count != pos)
	{
		temp = temp->next;
		count++;
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	delete temp;
}
void display(node*& head)
{
	node* temp = head;
	if (head == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
	}
}
int main()
{
	node* head = NULL;
	InsertionAtHead(head, 3);
	InsertionAtHead(head, 2);
	InsertionAtHead(head, 1);
	display(head);
	InsertionAtTail(head, 4);
	InsertionAtTail(head, 5);
	cout << endl;
	display(head);
	ReversePrint(head);
}
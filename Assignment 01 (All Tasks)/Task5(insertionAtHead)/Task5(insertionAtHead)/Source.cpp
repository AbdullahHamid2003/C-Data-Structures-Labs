#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int val) {
		data = val;
		next = NULL;
	}
};
void insertionathead(node*& head, int val) {
	node* temp = new node(val);
	temp->next = head;
	head = temp;
}
bool search(node*& head, int key)
{
	node* temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		if (temp->data == key)
		{
			return true;
		}
	}
	return false;
}
void deletion(node*& head, int val)
{
	node* temp = head;

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
		cout << temp->data << "-> ";
		temp = temp->next;
	}
	cout << "NULL"<<endl;
}
void insertionatTail(node*& head, int val)
{
	node* n = new node(val);
	if (head == NULL) 
	{
		return;
	}
	node* temp = head;
	while (temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
node* head = NULL;
void InsertINbetween(int data, int n)
{
	node* temp1 = new node(n);
	temp1->data = data;
	temp1->next=NULL;
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
int main()
{
	node* head = NULL;
	insertionathead(head, 3);
	insertionathead(head, 2);
	insertionathead(head, 1);
	display(head);
	insertionathead(head, 0);
	cout << endl;
	display(head);
	insertionatTail(head, 4);
	cout << endl;
	display(head);
	cout << search(head, 2);
	deletion(head, 0);
	display(head);
	InsertINbetween(9, 3);
	cout << endl;
	display(head);
}
#include<iostream>
using namespace std;
struct Node 
{
	int data;
	Node* left;
	Node* right;
	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};
Node* Insert(Node* root, int val)
{
	if (root == NULL) 
	{
		return new Node(val);
	}
	
	else if (val < root->data)
	{
		root->left = Insert(root->left, val); 
	}
	else
	{
		root->right = Insert(root->right, val);
	}
	return root;
}
void inorder(Node* root)
{
	if (root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout << root->data << ", ";
	inorder(root->right);
}
int main()
{
	Node* root = NULL; 
	root = Insert(root, 52);
	root = Insert(root, 25);
	root = Insert(root, 60);
	root = Insert(root, 35);
	root = Insert(root, 20);
	root = Insert(root, 59);
	root = Insert(root, 65);
	cout << " We have inserted : 52, 25, 60, 35, 20, 59, 65 " << endl;
	cout << " After inorder we get : ";
	inorder(root);
	cout << endl;
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
void Preorder(Node* root) 
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << ", ";
	Preorder(root->left);
	Preorder(root->right);
}
void Inorder(Node* root) 
{
	if (root == NULL)
	{
		return;
	}
	Inorder(root->left);
	cout << root->data << ", ";
	Inorder(root->right);
}
void Postorder(Node* root) 
{
	if (root == NULL)
	{
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << ", ";
}
Node* Insert(Node* root, int data) 
{
	if (root == NULL)
	{
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if (data <= root->data)
	{
		root->left = Insert(root->left, data);
	}
	else
	{
		root->right = Insert(root->right, data);
	}
	return root;
}
int main() 
{
	Node* root = NULL;
	root = Insert(root, 52);
	root = Insert(root, 25);
	root = Insert(root, 60);
	root = Insert(root, 20);
	root = Insert(root, 35);
	root = Insert(root, 59);
	root = Insert(root, 65);
	cout << " We have Inserted : 52, 25, 60, 20, 35, 59, 65" << endl;
	cout << "\n Preorder : ";
	Preorder(root);
	cout << "\n Inorder : ";
	Inorder(root);
	cout << "\n Postorder : ";
	Postorder(root);
	return 0;
}
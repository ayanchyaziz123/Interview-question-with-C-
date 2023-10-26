#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left, *right;
};

typedef struct Node Node;

Node* createNode(int data){
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

Node* insert(Node* node, int data)
{
	// 50, 30, 20, 40, 70, 60, 80
	// 30 < 50 // 
	if(node == NULL)
	{
		return createNode(data);
	}
	if(data < node->data)
		node->left = insert(node->left, data);
	if(data > node->data)
		node->right = insert(node->right, data);
	return node;
}

bool search(Node* node, int target)
{
	if(node == NULL)
		return false;
	if(node->data == target)
		return true;
	if(target < node->data)
		search(node->left, target);
	else
		search(node->right, target);
	return false;

}

void inorderTrav(Node* root)
{
	if(root!=NULL)
	{
		// [ 50 30 20 ]
		// p-> 20 
		// p-> 30
		// p-> 40
		// p _> [50]
		// [ 70, 60 ]
		//cout << root->data << " -- > " <<  endl;
		inorderTrav(root->left);
		cout << root->data << " ";
		inorderTrav(root->right);
	}
}

void preOrderTrav(Node* root)
{
	if(root != NULL)
	{
	cout << root->data << " ";
	preOrderTrav(root->left);
	preOrderTrav(root->right);
	}
}


int main()
{
	 /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

	Node* root = NULL;
	root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    cout << root->data << endl;
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    // Print inorder traversal of the BST
    inorderTrav(root);
    cout << endl;
    preOrderTrav(root);
	return 0; 
}
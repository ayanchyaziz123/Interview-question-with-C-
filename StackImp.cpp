#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;

};

typedef struct Node Node;

Node* createNode(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}

Node* push(int data, Node* head)
{
	Node* newNode = createNode(data);
	if(head == NULL)
	{
		head = newNode;
		return newNode;
	}
	//10 | null   20 | 10  30 | 20
	newNode->next = head;
	head = newNode;
	return newNode;
}

Node* pop(Node* head)
{
	if(head == NULL)
	{
		cout << "Stack is empty..!" << endl;
		return head;
	}
	head = head->next;
	return head;
}

void printList(Node* head)
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	Node* head = NULL;
	head = push(10, head);
	head = push(20, head);
	head = push(30, head);
	head = pop(head);
	printList(head);
	return 0;
}
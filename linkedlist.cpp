/*
 *******************************************
 *      * AUTHOR : Nihan_Khan              *
 *      * NICK   :   NullByte              *
 *      * CREATED: 15.10.2023 18:26:24     *
 *******************************************
*/
#include <bits/stdc++.h>

#define sz size()
const int INF = 1e9+7;
#define pb(x) push_back(x)

using namespace std;

struct Node 
{
	int data;
	Node *next;
};

Node *head = NULL;

Node *createNode(int data)
{
	Node *newNode = new Node;

	if (newNode == NULL)
	{
		perror("Error");
		exit(1);
	}

	newNode -> data = data;
	newNode -> next = NULL;

	return newNode;
}

void append(int data)
{
	Node *newNode = createNode(data);

	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		Node *cur = head;

		while(cur -> next != NULL)
		{
			cur = cur -> next;
		}

		cur -> next = newNode;
	}
}

void prepend(int data)
{
	Node *newNode = createNode(data);

	newNode -> next = head;
	head = newNode;
	
}



void print()
{
	Node *cur = head;

	while(cur != NULL)
	{
		cout << cur -> data << " -> ";

		cur = cur -> next;
	}

	cout << "NULL" << endl;
}

int main(int argc, char **argv)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    append(2);
    append(3);
    append(4);
    append(5);
    append(6);
    append(7);

    print();

    prepend(1);

    print();
    
    
    return 0;   
}


/*

Randy Lee
02-20-2017

- copy constructor
- friendly funcion
- dynamic array - new and pointer
- recursion
- linked list

test2
- does this node exist and what is it's addrss
one possibility - insert a node in middle
second possibility - locate a node that has the given data

give pseudocode
pseudocode must have pre and post conditions

linked lists
binary tree - can find any node through pathing

- head points to first node
ie. head >>> dada/pointer >>> null

null at the end of the linked list ends the link list

*/

#include <iostream>
#include <cstdlib>
#include "stdafx.h"

using namespace std;

struct node
{
	int data;
	node *link;
};

typedef node* nodeptr; /// create new type definition called nodeptr that is a node pointer

int main()
{
	nodeptr link = new node; // new node object
	nodeptr head;
	nodeptr head10 = new node; // new node object
	nodeptr head20 = new node; // new node object

	head = new node; /// creating new address for head of linked list
	head->data = 15;
	head10->data = 12;
	head20->data = 3;

	cout << head->data << endl;
	head->link = head10;

	// to insert a pointer in the head, create a temporary pointer
	// point head pointer to the temporary pointer, 
	// point temporary pointer to new pointer

	return 0;
}
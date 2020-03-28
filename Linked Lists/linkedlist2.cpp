#include <iostream>
#include <limits.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
}*head = NULL;

void create(int A[],int n)
{
	Node *t,*last;
	head = new Node;
	head->data = A[0];
	head->next = NULL;
	last = head;
	for(int i = 1;i<n;i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void display(Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}

void Delete(int pos)
{
	Node *p,*q;
	int x = -1,i;
	if(pos == 1)
	{
		x = head->data;
		p = head;
		head = head->next;
		delete p;
	}
	else
	{
		p = head;
		q = NULL;
		for(i = 0;i<pos-1 && p;i++)
		{
			q = p;
			p = p->next;
		}
		if(p)
		{
			q->next = p->next;
			delete p;
		}
	}
}

void SortedInsert(Node *p , int x)
{
	Node *t, *q = NULL;
	t = new Node;
	t->data = x;
	t->next = NULL;
	if(head == NULL)
		head = t;
	else
	{
		while(p && p->data < x)
		{
			q = p;
			p = p->next;
		}
		if(p == head)
		{
			t->next = head;
			head = t;
		}
		else
		{
			t->next = q->next;
			q->next = t;
		}
	}
}

int isSorted(Node *p)
{
	int x = INT_MIN;
	while(p != NULL)
	{
		if(p->data < x)
			return 0;
		x = p->data;
		p = p->next;
	}
	return 1;
}

void reverse(Node *p)
{
	Node *q,*r;
	q = r = NULL;
	while(p != NULL)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	head =q;
}
int main()
{
	/*int A[] = {3,7,9,15,20};
	create(A,5);
	cout<<"Before Insertion"<<endl;
	display(head);
	cout<<"After Insertion"<<endl;
	SortedInsert(head,17);
	display(head);*/
	int A[] = {1,2,3,4,5,6,7,8,9};
	create(A,9);
	//cout<<"Before Deleting any element in linked list"<<endl;
	display(head);
	/*Delete(6);
	cout<<"After Deleting the element in linked list"<<endl;
	display(head);*/
	/*if(isSorted(head))
		cout<<"Your Linked list is Sorted"<<endl;
	else
		cout<<"Your Linked list is not sorted"<<endl;*/
	cout<<"Reversed Linked List is"<<endl;
	reverse(head);
	display(head);
	return 0;
}
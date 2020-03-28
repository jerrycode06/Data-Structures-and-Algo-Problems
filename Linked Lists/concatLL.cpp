#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
}*head = NULL,*second = NULL,*third = NULL;

void display(Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}

void create(int A[],int n)
{
	int i;
	Node *t,*last;
	head = new Node;
	head->data = A[0];
	head->next = NULL;
	last = head;
	for(i=1;i<n;i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void create2(int B[],int n)
{
	int i;
	Node *t,*last;
	second = new Node;
	second->data = B[0];
	second->next = NULL;
	last = second;
	for(i=1;i<n;i++)
	{
		t = new Node;
		t->data = B[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void merge(Node *p,Node *q)
{
	Node *last;
	if(p->data < q->data)
	{
		third = last = p;
		p = p->next;
		third->next = NULL;
	}
	else
	{
		third = last =q;
		q = q->next;
		third->next = NULL;
	}
	while(p && q)
	{
		if(p->data < q->data)
		{
			last->next = p;
			last = p;
			p = p->next;
			last->next = NULL;
		}
		else
		{
			last->next = q;
			last = q;
			q = q->next;
			last->next = NULL;
		}
		if(p)last->next = p;
		if(q)last->next = q;
	}
}

int main()
{
	int A[] = {1,3,5,7,9};
	int B[] = {2,4,6,8,10};
	create(A,5);
	create2(B,5);
	merge(head,second);
	display(third);
	return 0;
}
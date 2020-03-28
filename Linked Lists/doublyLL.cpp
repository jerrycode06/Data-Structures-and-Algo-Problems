#include<iostream>
using namespace std;
class Node
{
public:
	Node *prev;
	int data;
	Node *next;
}*head;

void create(int A[],int n)
{
	int i;
	Node *t,*last;
	head->data = A[0];
	head->prev = head->next =NULL;
	last = head;
	for(i=1;i<n;i++)
	{
		t=new Node;
		t->data = A[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last = t;
	}
}

void Display(Node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int main()
{
	int A[]={6,9,3,7,2};
	create(A,5);
	Display(head);
	return 0;
}
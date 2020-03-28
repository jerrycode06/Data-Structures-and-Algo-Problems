#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
}*head;

void Create(int A[],int n)
{
	int i;
	Node *t,*last;
	head = new Node;
	head->data = A[0];
	head->next = head;
	last = head;
	for(i=1;i<n;i++)
	{
		t=new Node;
		t->data = A[i];
		t->next = last->next;
		last->next = t;
		last = t;
	}
}

void display(Node *p)
{
	do{
		cout<<p->data<<" ";
		p = p->next;
	}while(p!=head);
	cout<<endl;
}

int Length(Node *p)
{
	int len = 0;
	do
	{
		len++;
		p = p->next;
	}while(p!=head);
	return len;
}

void Insert(Node *p,int pos,int x)
{
	Node *t;
	if(pos<0 || pos>Length(head))
		return;
	if(pos == 0)
	{
		t = new Node;
		t->data = x;
		if(head == NULL)
		{
			head = t;
			head->next=head;
		}
		else
		{
			while(p->next!=head)p=p->next;
			p->next = t;
			t->next = head;
			head=t;
		}
	}
	else
	{
		for(int i=0;i<pos-1;i++)p=p->next;
		t = new Node;
		t->data =x;
		t->next = p->next;
		p->next = t;
	}
}

void Delete(Node *p,int pos)
{
	Node *q;
	int i;
	if(pos<0 || pos>Length(head))
		return ;
	if(pos == 1)
	{
		while(p!=head)p=p->next;
		if(p==head)
		{
			delete head;
			head == NULL;
		}
		else{
		p->next = head->next;
		delete head;
		head=p->next;
	    }
	}
	else
	{
		for(int i=0;i<pos-2;i++)p = p->next;
			q = p->next;
		p->next = q->next;
		delete q;
	}
}
int main()
{
	int A[] = {8,3,9,6,2};
	Create(A,5);
	display(head);
	Insert(head,3,5);
	display(head);
	cout<<Length(head);
	Delete(head,2);
	display(head);
	return 0;
}
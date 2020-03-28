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

void display(Node *p)
{
	while(p != NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}

void RDisplay(Node *p)
{
	if(p != NULL)
	{
		cout<<p->data<<" ";
		RDisplay(p->next);
	}
}

int count(Node *p)
{
	int c = 0;
	while(p!=NULL)
	{
		c++;
		p = p->next;
	}
	return c;
}
int Rcount(Node *p)
{
	if(p==NULL)
		return 0;
	return Rcount(p->next)+1;
}

int Add(Node *p)
{
	int sum = 0;
	while(p!=NULL)
	{
		sum = sum + p->data;
		p = p->next;
	}
	return sum;
}

int RAdd(Node *p)
{
	if(p == NULL)
		return 0;
	else
		return RAdd(p->next) + p->data;
}

int Max(Node *p)
{
	int m = INT_MIN;
	while(p)
	{
		if(p->data>m)
		  m = p->data;
		p = p->next;
	}
	return m ;
}

int Search(Node *p,int key)
{
	while(p != NULL)
	{
		if(p->data == key)
			return 1;
		p = p->next;
	}
	return 0;
}

void Insert(int pos,int x)
{
	Node *t, *p;
	if(pos == 0)
	{
		t = new Node;
		t->data = x;
		t->next = head;
		head = t;
	}
	else if(pos>0)
	{
		p = head;
		for(int i = 0;i<pos-1;i++)
			p = p->next;
		if(p)
		{
			t = new Node;
			t->data = x;
			t->next = p->next;
			p->next = t;
		}
	}
}
int main()
{
	int A[]={3,4,8,7,9,5,1,10};
	int x;
	create(A,8);
	cout<<"Before Inserting an extra Node"<<endl;
	display(head);
	cout<<"Number of Nodes in this Linked list is "<<count(head)<<endl;
	cout<<"Sum of all elements in the linked list is "<<Add(head)<<endl;
	cout<<"Maximum Element in this linked is "<<Max(head)<<endl;
	/*cout<<"Enter the element the you want to Search"<<endl;
	cin>>x;
	if(Search(head,x))
		cout<<"Your Given Element is present in the linked list"<<endl;
	else
		cout<<"Sorry ! I can't find the given element in the list"<<endl;*/
	Insert(6,21);
	cout<<"After Inserting an extra Node"<<endl;
	display(head);
	cout<<"Number of Nodes in this Linked list is "<<count(head)<<endl;
	cout<<"Sum of all elements in the linked list is "<<Add(head)<<endl;
	cout<<"Maximum Element in this linked is "<<Max(head)<<endl;
	return 0;
}
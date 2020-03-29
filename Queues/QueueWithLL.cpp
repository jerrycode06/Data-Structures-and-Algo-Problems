#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
};

class Queue{
	Node *front,*rear;
public:
	Queue(){front = rear = NULL;}
	void enqueue(int x);
	int dequeue();
	void Display();
};

void Queue::enqueue(int x){
	Node *t = new Node;
	if(t == NULL)
		cout<<"Queue is Full"<<endl;
	else
	{
		t->data = x;
		t->next = NULL;
		if(front == NULL)
			front = rear = t;
		else
		{ 
			rear->next = t;
			rear = t;
		}
	}
}

int Queue::dequeue(){
	int x = -1;
	Node *t;
	if(front == NULL)
		cout<<"Queue is Empty"<<endl;
	else
	{	x = front->data;
		t = front;
		front = front->next;
		delete t;
	}
	return x;
}

void Queue::Display(){
	Node *p = front;
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
	cout<<endl;
}

int main(){
	Queue q;
	q.enqueue(5);
	q.enqueue(7);
	q.enqueue(3);
	q.enqueue(8);
	q.enqueue(10);
	q.Display();
	cout<<"After dequeueing our Queue"<<endl;
	q.dequeue();
	q.dequeue();
	q.Display();
	return 0;
}

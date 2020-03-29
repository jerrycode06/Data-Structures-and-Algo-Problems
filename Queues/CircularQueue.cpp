#include<iostream>
using namespace std;

class CircularQueue{
	int size;
	int front;
	int rear;
	int *Q;
public:
	CircularQueue(int size){
		this->size = size;
		front = rear = 0;
		Q = new int[this->size];
	}

	void enqueue(int x);
	int dequeue();
	void Display();
};

void CircularQueue::enqueue(int x){
	if((rear+1)%size == front)
		cout<<"Queue is Full"<<endl;
	else
	{
		rear =(rear + 1)%size;
		Q[rear] = x;
	}
}

int CircularQueue :: dequeue(){
	int x = -1;
	if(front == rear)
		cout<<"Empty Queue"<<endl;
	else{
		front = (front+1)%size;
		x = Q[front];
	}
	return x;
}

void CircularQueue :: Display(){
	int i = front + 1;
	do{
		cout<<Q[i]<<endl;
		i = (i+1)%size;
	}while(i != (rear+1)%size);
}

int main(){
	CircularQueue q(6);
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
	return 0 ;
}
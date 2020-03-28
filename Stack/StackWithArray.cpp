#include<iostream>
using namespace std;

class Stack
{
 int *st;
 int Top;
 int size;
public:
	Stack(){size = 10 ; Top = -1; st = new int[size];}
	Stack(int size)
	{
		this->size = size;
		Top = -1;
		st = new int[this->size];
	}

	void push(int x);
	int pop();
	int peek(int pos);
	int stackTop();
	int isEmpty();
	int isFull();
	void Display();
};

void Stack :: push(int x){
	if(isFull())
		cout<<"Stack Overflow"<<endl;
	else
	{
		Top++;
		st[Top] = x;
	}
}

int Stack :: pop(){
	int x = -1;
	if(isEmpty())
		cout<<"Stack is Empty "<<endl;
	else
	{
		x = st[Top];
		Top--;
	}
	return x;
}

int Stack :: peek(int pos){
	int x = -1;
	if(Top-pos+1<0)
		cout<<"Invalid Position "<<endl;
	else
		x = st[Top-pos+1];
	return x;
}

int Stack :: stackTop(){
	if(isEmpty())
		return -1;
	return st[Top];
}

int Stack:: isEmpty(){
	if(Top == -1)
		return 1;
	return 0;
}

int Stack :: isFull(){
	if(Top == size-1)
		return 1;
	return 0;
}

void Stack :: Display(){
	for(int i = Top;i>=0;i--)
		cout<<st[i]<<endl;
}


int main()
{
	Stack stk(5);
	stk.push(10);
	stk.push(7);
	stk.push(11);
	stk.push(13);
	stk.push(5);
	stk.Display();

	cout<<stk.peek(2)<<endl;
	return 0;
}
#include<iostream>

using namespace std;

class Node{
public:
	int data;
	Node *next;
};

class Stack {
	Node *top;
public:
	Stack(){top == NULL;}
	void push(int x);
	int pop();
	void display();
};

void Stack :: push(int x){
	Node *t = new Node;
	if(t == NULL)
		cout<<"Stack Overflow";
	else{
		t->data = x;
		t->next = top;
		top=t;
	}
}

int Stack::pop(){
	int x = -1;
	if(top == NULL){
		cout<<"Stack is Empty";
	}
	else{
		x = top->data;
		Node *t = top;
		top = top->next;
		delete t;
	}
	return x;
}

void Stack :: display(){
	Node *p = top;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}

int main(){
	Stack stk;
	stk.push(10);
	stk.push(9);
	stk.push(11);
	stk.push(8);
	stk.push(12);
	stk.display();
}
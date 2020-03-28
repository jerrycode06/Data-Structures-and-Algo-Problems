#include <iostream>
using namespace std;

class term
{
public:
	int coeff,exp;
};

class Polynomial
{
	int n;
	term *t;
public:
	Polynomial(int n)
	{
		this->n = n;
		t = new term[this->n];
	}
	~Polynomial()
	{
		delete[] t;
	}

	friend istream & operator >>(istream &is , Polynomial &p);
	friend ostream & operator <<(ostream &os , Polynomial &p);
	Polynomial operator + (Polynomial &p);
};

istream & operator >>(istream &is , Polynomial &p)
{
	cout<<"ENter the terms"<<endl;
	for(int i=0;i<p.n;i++)
		cin>>p.t[i].coeff>>p.t[i].exp;
	return is;
}

ostream & operator <<(ostream &os , Polynomial &p)
{
	for(int i = 0;i<p.n;i++)
		cout<<p.t[i].coeff<<"x"<<p.t[i].exp<<"+ ";
	cout<<endl;
}

Polynomial Polynomial:: operator + (Polynomial &p)
{
	int i,j,k;
	Polynomial *sum = new Polynomial(n+p.n);

	i=j=k=0;
	while(i<p.n && j<p.n)
	{
		if(t[i].exp > p.t[j].exp)
			sum->t[k++] = t[i++];
		else if(t[i].exp < p.t[j].exp)
			sum->t[k++] = p.t[j++];
		else
		{
			sum->t[k].exp = t[i].exp;
			sum->t[k++].coeff = t[i++].coeff + p.t[j++].coeff;
		}
	}
	for(;i<p.n;i++)sum->t[k++] = t[i];
	for(;j<p.n;j++)sum->t[k++] = p.t[j];
	sum->n = k;
	return *sum;
}

int main()
{
	Polynomial p1(3);
	Polynomial p2(5);
	cin>>p1;
	cin>>p2;
	Polynomial sum = p1 + p2;

	cout<<"First Polynomial "<<endl<<p1;
	cout<<"Second Polynomial "<<endl<<p2;
	cout<<"Sum is "<<endl<<sum;
	return 0;
}
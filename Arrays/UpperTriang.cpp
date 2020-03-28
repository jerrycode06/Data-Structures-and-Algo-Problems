#include<iostream>
using namespace std;
class UpperTri
{
	int n;
	int *A;
public:
	UpperTri(int n)
	{
		this ->n=n;
		A = new int[n];
	}
	void create(int i,int j,int x)
	{
		if(i<=j)
			A[j*(j-1)/2 + i-1] = x;
	}
	void display()
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i<=j)
					cout<<A[j*(j-1) + i-1]<<" ";
				else
					cout<<"0 ";
			}
			cout<<endl;
		}
	}
	~UpperTri()
	{
		delete[]A;
	}
};

int main()
{
	int d;
	cout<<"Enter the dimensions "<<endl;
	cin>>d;
	UpperTri um(d);
	int x;
	cout<<"Enter the elements"<<endl;
	for(int i=0 ; i<d ; i++)
	{
		for(int j=0;j<d; j++)
		{
			cin>>x;
			um.create(i,j,x);
		}
	}
	um.display();
	return 0;
}
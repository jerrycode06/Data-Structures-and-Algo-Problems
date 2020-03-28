#include <iostream> 

using namespace std;

class LowerTri
{
	int *A;
	int n;
public:
	LowerTri(int n)
	{
		this->n = n;
		A = new int [n*(n+1)/2];
	}
	void set(int i,int j, int x)
	{
		if(i>=j)
			A[i*(i-1)/2 + j-1] = x;
	}
	void Display()
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i>=j)
					cout<<A[i*(i-1)/2 +j-1]<<" ";
				else
					cout<<"0"<<" ";
			}
			cout<<endl;
		}
	}
};

int main()
{
	int d;
	cout<<"Enter Dimensions of Matrix"<<endl;
	cin>>d;
	LowerTri lm(d);
	int x;
	cout<<"Enter the elements"<<endl;
	for(int i=0 ; i<d ;i++)
	{
		for(int j=0; j<d ;j++)
		{
			cin>>x;
			lm.set(i,j,x);
		}
	}
	lm.Display();
	return 0;
}
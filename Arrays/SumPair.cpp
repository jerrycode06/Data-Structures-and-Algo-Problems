#include <iostream>
using namespace std;
int main()
{
	//int A[10] = {6,3,8,10,16,7,5,2,9,14};
	int k = 10;
	/*for(int i = 0;i<9;i++)
	{
		for(int j = i+1;j<10;j++)
		{
			if(A[i]+A[j]==k)
				cout<<"Pair which form sum = 10 is "<<A[i]<<" and "<<A[j]<<endl;
		}
	}*/
	/*int H[16]={0};  --> Using Hash Table
	for(int i = 0;i<10;i++)
	{
		if(H[k-A[i]] != 0)
			cout<<"Your Sum Pair is "<<A[i]<<" and "<<k-A[i]<<endl;
		H[A[i]]++;
	}*/
	int A[10] ={1,3,4,5,6,8,9,10,12,14};
	int i=0,j = 9;
	while(i<j)
	{
		if(A[i]+A[j]==k)
		{
			cout<<"Pair is "<<A[i]<<" and "<<A[j]<<endl;
			i++;
			j--;
		}
		else if(A[i]+A[j]<k)
			i++;
		else
			j--;
	}
	return 0;
}
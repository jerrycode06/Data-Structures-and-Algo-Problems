#include<iostream>
using namespace std;

int main()
{
	//int A[11]={1,2,3,4,5,6,8,9,10,11,12};
	/*int n = 12; 
	int sum = 0,s;
	for(int i=0;i<11;i++)
		sum = sum + A[i];
	s = n*(n+1)/2;
	cout<<"Missing Number is "<<s-sum;
	return 0; */
	//-------------------------------------------------
	/*int l = 1 , h = 12; -->Another method for finding Missing Element and this method is used when numbers is not starting from 1
	int diff = l - 0;
	for(int i = 0;i<11;i++)
	{
		if(A[i]-i!=diff)
		{
			cout<<"Missing Element is "<<diff+i;
			break;
		}
	}*/
	//-------------------------------------------------
	/*int A[11] = {6,7,8,9,11,12,15,16,17,18,19}; --> This is for multiple missing elements
	int diff = 6;
	for (int i = 0;i< 11;i++)
	{
		if(A[i]-i != diff)
		{
			while(diff<A[i]-i)
			{
				cout<<i+diff<<" ";
				diff++;
			}
		}
	}*/
	//-------------------------------------------------
	int A[10] = {3,7,4,9,12,6,1,11,2,10}; //Using Hash Table we find the missing elements in an unsorted array
	int H[12]={0};
	int l = 1, h = 12;
	for(int i = 0;i<10;i++)
		H[A[i]]++;
	for(int i = l;i<=h;i++)
	{
		if(H[i]==0)
			cout<<i<<" ";
	}
	return 0;
}
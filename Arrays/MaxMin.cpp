#include <iostream>
using namespace std;
int main()
{
	int A[10] = {5,8,3,9,6,2,10,7,-1,4};
	int min = A[0],j;
	int max = A[0];
	for(int i=0;i<10;i++)
	{
		if(A[i]<min)
			min = A[i];
		else if(A[i]>max)
			max = A[j];
	}
	cout<<"Maximum and Minimum Elements in the array are "<<max <<" "<<min;
	return 0;
}
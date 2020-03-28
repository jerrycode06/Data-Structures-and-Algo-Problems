#include<iostream>
using namespace std;
void Merging(int arr1[],int arr2[],int m ,int n)
{
    int arr3[m+n];
    int i = 0, j=0,k=0;
    while(i<m && j<n)
    {
    	if(arr1[i] < arr2[j])
    		arr3[k++] = arr1[i++];
    	else
    		arr3[k++] = arr2[j++];
    }	
    while(i<m)
    	arr3[k++]=arr1[i++];
    while(j<n)
    	arr3[k++]=arr2[j++];
    for(int f=0;f<m+n;f++)
    	cout<<arr3[f]<<" ";
}
int main()
{
	int arr1[]={3,8,16,20,25};
	int arr2[] = {4,10,12,22,23};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);
	Merging(arr1,arr2,m,n);
	return 0;
}
#include <iostream>
using namespace std;
void Intersection(int arr1[],int arr2[],int m, int n);
void Union (int arr1[],int arr2[],int m,int n)
{
	int i = 0,j=0;
	while(i<m && j<n)
	{
		if(arr1[i] < arr2[j])
			cout<<arr1[i++]<<" ";
		else if(arr1[i] > arr2[j])
			cout<<arr2[j++]<<" ";
		else
		{	cout<<arr1[i++]<<" ";
			j++;
		}
	}
	while(i<m)
		cout<<arr1[i++]<<" ";
	while(j<n)
		cout<<arr2[j++]<<" ";
}
void Intersection(int arr1[],int arr2[],int m, int n)
{
	int i = 0,j = 0;
	while(i<m && i<n)
	{
		if(arr1[i]<arr2[j])
			i++;
		else if(arr1[i]>arr2[j])
			j++;
		else
		{	cout<<arr1[i]<<" ";
			i++;
			j++;
		}
	}
}
void Difference(int arr1[],int arr2[],int m, int n)
{
	int i = 0,j = 0;
	while(i<m && i<n)
	{
		if(arr1[i]<arr2[j])
			cout<<arr1[i++]<<" ";
		else if(arr1[i]>arr2[j])
			cout<<arr2[j++]<<" ";
		else
		{
			i++;
			j++;
		}
	}
}
int main()
{
	int arr1[] = {3,4,5,6,10};
	int arr2[]= {2,4,5,7,12};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr1)/sizeof(arr1[0]);
	Union(arr1,arr2,m,n);
	cout<<endl;
	Intersection(arr1,arr2,m,n);
	cout<<endl;
	Difference(arr1,arr2,m,n);
	return 0;
}
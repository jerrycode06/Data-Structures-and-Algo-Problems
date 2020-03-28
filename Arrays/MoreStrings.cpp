#include <iostream>
using namespace std;
int main()
{
	/*char A[] ="nitin";
	int i,j,flag = 0;
	j = 0;
	while(A[j]!='\0')
		j++;
	j = j-1;
	for(i = 0;i<j;i++,j--)
	{
		if(A[i]!=A[j])
		{	flag = 1;
			break;
		}
	}
	if(flag)
		cout<<"It is not Pallindrome"<<endl;
	else 
		cout<<"It is a Pallindrome"<<endl;*/
	//char A[]= "finding";
	/*for(int i = 0; A[i]!='\0'; i++) --->Finding Duplicates using comparisons
	{	for(int j=i+1;A[j]!='\0';j++)
		{ 
			if(A[i]==A[j])
				cout<<A[j]<<" has a duplicate"<<endl;
		}
	}*/
	char A[] = "decimal";
	char B[] = "medical";
	int H[26] = {0},i;
	for(i=0; A[i]!='\0';i++)
		H[A[i]-97]++;
	for(i=0; B[i]!='\0';i++)
	{	H[B[i]-97]--;
		if(H[B[i]-97]<0)
		{	cout<<"It is not a anagram";
			break;
		}
	}
	if(B[i]=='\0')
		cout<<"It is Anagram";
	return 0;
}
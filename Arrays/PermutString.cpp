#include <iostream>

using namespace std;

void perm(char s[],int k)
{
	static char A[10] = {0};
	static char res[10];
	int i;
	if(s[k] == '\0')
	{
		res[k] = '\0';
		cout<<res<<endl;
	}
	else
	{
		for(i=0;s[i]!='\0';i++)
		{
			if(A[i]==0)
			{
				res[k]=s[i];
				A[i]=1;
				perm(s,k+1);
				A[i]=0;
			}
		}
	}

}
int main()
{
	char s[] = "ABC";
	int k = 0;
	perm(s,k);
	return 0;
}
#include <iostream>

using namespace std;
int validate(char u_str[])
{
	int i;
	for(i=0;u_str[i]!='\0';i++)
	{
		if(!(u_str[i]>=65 && u_str[i]<=90) && !(u_str[i]>=97 && u_str[i]<=122) && !(u_str[i]>=48 && u_str[i]<=57))
			return 0;
	}
	return 1;
}
int main()
{
	/*char s[] = "WeLcOmE";
	int i = 0;
	while(s[i]!='\0')
		i++;
	cout<<"Length is "<<i<<endl;
	for(int j=0; s[j]!='\0';j++)       // Toggle the letters in uppercase and lowercase
	if(s[j]>=65 && s[j]<=90)
		s[j] = s[j]+32;                  //Adding ASCII value to it
	else if(s[j]>=97 && s[j]<=122)
		s[j] = s[j]-32;
	cout<<s;*/
	//-------------------------------------------------------------------
	/*char A[] = "How are you";   --> COunting the number of Vowels and consonants
	int i, vcount = 0, ccount = 0;
	for(i = 0; A[i]!='\0';i++)
	{
	if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
		vcount++;
	else if((A[i]>=65 && A[i]<=90)|| (A[i]>=97 && A[i]<=122))
		ccount++;
	}
	cout<<"Number of Vowels "<<vcount<<endl;
	cout<<"Number of Consonants "<<ccount<<endl;*/
	char username[] = "Nik123";
	if(validate(username))
		cout<<"Valid Username";
	else
		cout<<"Invalid Username";
	return 0;
}
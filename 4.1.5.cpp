#include<bits/stdc++.h>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	for(int i=0;i<strlen(s2);i++)
	{
		int flag=1;
		for(int j=0;j<strlen(s1);j++)
		{
			if(s1[j]!=s2[i+j])
			{
			
				flag=0;
				break;
			}	
		}
		if(flag)
			return i+1;
	}
	return -1;
}
int main()
{
	char s1[300],s2[300];
	
	int num1=-1,num2=-1;
	char ch;
	while((ch=cin.get())!='\n')
	{
		if(ch!=' ')
		s1[++num1]=ch;
	}
	while(( ch=cin.get())!='\n')
	{
		if(ch!=' ')
		s2[++num2]=ch;
	}
	cout<<indexOf(s1,s2);
	return 0;
}

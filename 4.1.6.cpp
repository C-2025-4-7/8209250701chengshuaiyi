#include<bits/stdc++.h>
using namespace std;
void count(const char s[], int counts[])
{
	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			counts[s[i]-'A'+1]++;
		}
		if(s[i]>='a'&&s[i]<='z')
		{
			counts[s[i]-'a'+1]++;
		}		
	}
}
int main()
{
	char s[3000];
	int count1[100];
	for(int i=1;i<=30;i++)
		count1[i]=0;
	char ch;
	int num=-1;
	while((ch=cin.get())!='\n')
	{
		s[++num]=ch;
	}
	count(s,count1);
	for(int i=1;i<=26;i++)
	{
		if(count1[i])
			cout<<char('a'+i-1)<<" "<<count1[i]<<"times"<<endl;
	}
	return 0;
}

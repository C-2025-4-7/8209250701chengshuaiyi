#include<bits/stdc++.h>
using namespace std;
int parseHex(const char *const hexString)
{
	const char * te1=hexString;
	int count=0;
	int wei=1;
	while(*te1!='\n')
	{
	//	cout<<"ha"<<*te1<<endl;
		wei*=16;
		te1++;
	}
	wei/=16;
	const char *te2=hexString;
	while(*te2!='\n')
	{
		if(*te2>='A'&&*te2<='F')
		{
			count+=((*te2)-'A'+10)*wei;
		}
		else
		count+=((*te2)-'0')*wei;
		wei/=16;
		te2++;
	}
	return count;
}
int main()
{
	string s;
	cin>>s;
	const char *c=&s[0];
	s[s.length()]='\n';
	
	cout<<parseHex(c);
	return 0;
}

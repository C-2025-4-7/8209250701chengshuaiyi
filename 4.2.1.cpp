#include<bits/stdc++.h>
using namespace std;
int indexof(const char *s1,const char *s2)
{
	int ans=1;
	while(*s2!='\0')
	{	
			const char *te1=s1;
			const char *te2=s2;
		//	cout<<"s1"<<*s1<<"s2"<<*s2<<endl;
			int te=0;
			while(*te1==*te2&&*te1!='\0')
			{
		//		cout<<"te1"<<*te1<<"te2"<<*te2<<endl;
				te++;
				te1++;
				te2++;
			}
		//	cout<<"end"<<*te2<<endl;
			if(*te1=='\0')
				return ans;
			s2++;
			ans++;
	}	
	return -1;
}
int main()
{
	char ch1[1000],ch2[1000];
	int num1=-1,num2=-1;
	char ch;
	while((ch=cin.get())!='\n')
		if(ch!=' ')
			ch1[++num1]=ch;
		ch1[++num1]='\0';
	while((ch=cin.get())!='\n')
		if(ch!=' ')
			ch2[++num2]=ch;
		ch2[++num2]='\0';
	char (*s1)=ch1;
	char (*s2)=ch2;
	//cout<<*s1<<" "<<*s2<<endl;
	cout<<indexof(s1,s2); 
	return 0;
}

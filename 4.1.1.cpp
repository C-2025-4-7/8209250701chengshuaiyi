#include<bits/stdc++.h>
using namespace std;
int a[30],x;
int main()
{
	int num=-1;
	for(int i=0;i<10;i++)
	{
		int flag=0;
		cin>>x;
		for(int i=0;i<=num;i++)
			if(a[i]==x)
				flag=1;
		if(!flag)
			a[++num]=x;	
	}
	for(int i=0;i<=num;i++)
		cout<<a[i]<<" ";
	return 0;
}

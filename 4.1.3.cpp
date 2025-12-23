#include<bits/stdc++.h>
using namespace std;
int num[200];
int main()
{
	for(int i=1;i<=100;i++)
		num[i]=1;
	for(int i=2;i<=100;i++)
	{
		for(int j=i;j<=100;j+=i)
			num[j]=1-num[j];
	}
	for(int i=1;i<=100;i++)
		if(num[i]==1)
			cout<<i<<" ";
	return 0;
}

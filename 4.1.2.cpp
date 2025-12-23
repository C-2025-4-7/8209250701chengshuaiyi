#include<bits/stdc++.h>
using namespace std;
double a[20];
int main()
{
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	int flag=1;
	while(flag)
	{
		flag=0;
		for(int i=0;i<9;i++)
		{
			if(a[i]>a[i+1])
			{
				double temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				flag=1;
			}
		}
	}
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	return 0;
}

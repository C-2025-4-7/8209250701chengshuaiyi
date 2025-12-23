#include<bits/stdc++.h>
using namespace std;

void paixu(int a[],int len)
{
	bool che=0;
	while(1)
	{
		che=1;
		for(int i=0;i<len-1;i++)
		{
			if(a[i]>a[i+1])
			{
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				che=0;
			}
		}
		if(che)
			break;
	}
}
int main()
{
	int n;
	cin>>n;
	int *num =new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	paixu(num,n);
	int *x=num;
	for(int i=0;i<n;i++)
		{
			cout<<*x<<" ";
			x++;
		}
	delete[] num;
	num=nullptr;
	return 0;
}

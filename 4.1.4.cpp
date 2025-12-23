#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],c[300],num1,num2;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int num=0,x1=1,x2=1;
	while(x1<=size1||x2<=size2)
	{
	
		if((list1[x1]<=list2[x2]&&x1<=size1)||x2>size2)
		{
			list3[++num]=list1[x1];
			
			x1++;
			continue;
		}
		if((list1[x1]>list2[x2]&&x2<=size2)||x1>size1)
		{
			list3[++num]=list2[x2];
			x2++;
		}
	}
}
int main()
{
	cin>>num1;
	for(int i=1;i<=num1;i++)
		cin>>a[i];
	cin>>num2;
	for(int i=1;i<=num2;i++)
		cin>>b[i];
	merge(a,num1,b,num2,c);
	for(int i=1;i<=num1+num2;i++)
		cout<<c[i]<<" ";
	return 0;
}

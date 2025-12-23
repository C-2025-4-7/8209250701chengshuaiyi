#include<bits/stdc++.h>
using namespace std;
bool is_prime(int num)
{
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		return false;
	}
	return true;
}
int main()
{
	int sum=0;
	int num=2;
	while(true)
	{
		if(is_prime(num))
		{
			cout<<num<<" ";
			sum++;
			if(sum%10==0)
			cout<<endl;
		}
		if(sum==200)
		break;
		num++;
	}
	return 0;
}

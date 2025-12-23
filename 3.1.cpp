#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	else return gcd(b,a%b);
}
int gbd(int a,int b,int c)
{
	return a*b/c;
}
int main()
{
	int x,y;
	cin>>x>>y;
	int num=gcd(x,y);
	cout<<num<<" "<<gbd(x,y,num);
	return 0;
}

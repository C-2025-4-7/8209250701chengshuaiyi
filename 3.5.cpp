#include<bits/stdc++.h>
using namespace std;

void monkey(int num,int day)
{

	if(day==0)
	{
		cout<<num;
		return;
	}
	monkey((num+1)*2,day-1);
}
int main()
{
	monkey(1,9);
	return 0;
}

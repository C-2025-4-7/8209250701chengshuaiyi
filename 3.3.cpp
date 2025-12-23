#include<iostream>
#include"mytemperature.h"

using namespace std;

int main()
{
	string s;
	cout<<"fah or cel";
	cin>>s;
	cout<<"please tell me number";
	double num;
	
	cin>>num;
	if(s[0]=='f')
		cout<<fahrenheit_to_cels(num);
	else
		cout<<celsius_to_fah(num);
	return 0;
}

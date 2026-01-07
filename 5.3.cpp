#include<iostream>
using namespace std;
class cf
{
	double len,hei,wid;
	public:
	cf()
	{
		double a,b,c;
		cin>>a>>b>>c;
		len=a;wid=b;hei=c;
	}
	
	int venue()
	{
		return len*wid*hei;
	}
};
int main()
{
	cf a;
	cout<<a.venue()<<endl<<3*a.venue();
	return 0;
}

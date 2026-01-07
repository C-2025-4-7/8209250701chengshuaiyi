#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
	point(int a=60,int b=80)
	{
		x=a;
		y=b;
	}
	void setPoint(int i,int j)
	{
		cin>>i>>j;
		x+=i;
		y+=j;
	}
	void display()
	{
		cout<<x<<" "<<y;
	}
};
int main()
{
	point a;
	int i,j;
	a.setPoint(i,j);
	a.display();
	return 0;
}

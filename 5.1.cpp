#include<iostream>
using namespace std;
class Time             // 定义Time类
{
              // 数据成员为公用的
int hour;
int minute;
int sec ;
public:
void inp()
{
	int a,b,c;
	cin>>a>>b>>c;
	hour=a;
	minute=b;
	sec=c;
}
void ou()
{
	cout<<hour<<" "<<minute<<" "<<sec;
}
};
int main()
{
Time tl;          


tl.inp();

tl.ou();
return 0;
}

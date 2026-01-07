#include<iostream>
#include<string>
using namespace std;
class student{
	
	string x; 
	int num;
	public:
		set(string a,int b)
			{
				x=a;
				num=b;
			}
	friend::string imax(student *z);
};
string imax(student *z)
{
	int ans=0;
	string tem;
	while(z->num>0)
	{
		if(z->num>ans)
		{
			ans=z->num;
			tem=z->x;		
		}
		z++;
	}
	return tem;
}
int main()
{
	student stu[8];
	for(int i=0;i<5;i++)
		{
			string a;
			int b;
			cin>>a>>b;
			stu[i].set(a,b);
		}
	student* z=stu;
	cout<<imax(z);
	return 0;
}

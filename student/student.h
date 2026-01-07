#include<cstring>
#include<string>
class Student{
	public:
		void display();
		void set_value()
		{
			num=001;
			strcpy(name,"zack");
			sex='m';
		}
		Student()
		{
			set_value();
		}
		Student(int a,const char b[],char c)
		{
			num=a;
			strcpy(name,b);
			sex=c;
		}
	private:
		int num;
		char name[20];
		char sex;
};

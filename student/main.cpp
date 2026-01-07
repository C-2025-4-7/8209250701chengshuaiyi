
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
#include<cstring>
#include<string>
using namespace std;
int main()
{
   Student stud;                //定义对象
   Student stud1(007,"tcg",'m');
	stud.display();              //执行stud对象的display函数
//	cout<<"hello"<<endl;
//	system("pause");
   return 0;
}

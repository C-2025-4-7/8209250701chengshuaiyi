#include <iostream>
using namespace std;

int main()
{
    double num1, num2; 
    char op;           
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "错误：除数不能为0！" << endl;
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0)
        {
            cout << "错误：取模运算的除数不能为0！" << endl;
        }
        else if (num1 != (int)num1 || num2 != (int)num2)
        {
            cout << "错误：取模运算仅适用于整数！" << endl;
        }
        else
        {
            cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        break;
    default:
        cout << "错误：非法运算符！仅支持 +、-、*、/、%" << endl;
    }

    return 0;
}
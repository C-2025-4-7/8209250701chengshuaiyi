#include<iostream>
using namespace std;
float pi = 3.1415926;
int main()
{
    float r, h;
    cin >> r >> h;
    float ans = (r * r * pi * h) / 3;
    cout << ans;
    return 0;
}
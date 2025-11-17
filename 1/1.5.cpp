#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    float f;
    cin >> f;
    float c=(float)(f - 32) / 1.8;
    printf("%.2f",c);
    return 0;
}
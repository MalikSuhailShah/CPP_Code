#include<iostream>
using namespace std;
int main ()
{
    int a=10;
    int b=a++;//updation after assigning to the b variable
    int c=++a;// updation before assinging to the c variable
    int d=a--;//updation after assigning to the d variable
    int e=--a;//updation before assigning to the e variable
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    cout<<"e="<<e<<endl;
    return 0;
}
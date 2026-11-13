#include<iostream>
using namespace std;
int a=7;//global variable
int f()
{
    cout<<a;
}
int main ()
{
    int b=6;//local variable
    a=89;
    f();



}
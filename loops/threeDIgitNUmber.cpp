// number is three digit or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n>99 && n<1000)
    {
        cout<<"Number is of threee digit"<<endl;
    }
    else cout<<"NUmber is not of threee digit"<<endl;

    if(n%5==0 && n%3==0)
    {
        cout<<"and The number is divisible by 5 and 3";
    }
    else  cout<<"and  The number is not divisible by 5 and 3";
    return 0;
}

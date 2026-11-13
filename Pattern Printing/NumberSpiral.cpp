#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            int p=i;
            int q=j;
           if(i>n) p=2*n-i;
           if(j>n) q=2*n-j;
            cout<<n+1-min(p,q);
        }
        cout<<endl;
    }
}
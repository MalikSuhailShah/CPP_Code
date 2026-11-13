#include <iostream>
using namespace  std;
int main()
{
    int n;
    cout<<"enter the value of n ->";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>0;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<k+1;
        }
        for(int l=i;l>0;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}
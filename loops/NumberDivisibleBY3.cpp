#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ->";
    cin >> n;
    // for(int i=1;i<=n;i++)
    // {
    //     if(i%3==0)
    //     {
    //         cout<<i<<" ";

    //     }
    // }

    /// Factorial of n
    int nfact=1;
    for(int i=1;i<=n;i++)
    {
        nfact*=i;
    }
    cout<<endl<<"factorial of n is ->"<<nfact;


    return 0;
}
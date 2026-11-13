#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows:";
    cin >> n;
    int m = n - 1;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m+1-i;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;

    //}
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) >= (n + 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
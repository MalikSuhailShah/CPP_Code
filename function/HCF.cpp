#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    int hcf;
    // for (int i = min(n,m); i >=2; i--)
    // {
    //     if(n%i==0&&m%i==0)
    //     {
    //         hcf=i;
    //         break;
    //     }

    // }
    for (int i = 2; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            hcf = i;
        }
    }

    cout << hcf;
}
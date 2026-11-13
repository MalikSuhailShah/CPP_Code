#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i;
    }
    cout << endl;
    int nsp = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        int p = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << p;
            p++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            p++;
        }
        for (int r = 1; r <= n - i; r++)
        {
            cout << p;
            p++;
        }
        cout << endl;
        nsp += 2;
    }
}
#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {

        int current = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << current<<" ";
            current = current*(i-j)/(j+1);
        }
        cout << endl;
    }
}
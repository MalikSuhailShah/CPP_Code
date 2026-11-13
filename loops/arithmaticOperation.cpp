#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n->" << endl;
    cin >> n;
    int m;
    cout << "enter the value of m" << endl;
    cin >> m;
    int sum = m + n;
    int product = m * n;
    int difference = m - n;
    double quotient = (m / n);
    int remainder = m % n;
    cout << sum << endl
         << product << endl
         << difference << endl
         << " quotient =" << (m / n) << endl;
    cout << "remainder=" << remainder;
    return 0;
}

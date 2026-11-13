#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n->";
    cin >> n;

    // ulta triangle of numbers pattern
    //    1111
    //     222
    //      33
    //       4
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = n - i; k > 0; k--)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    cout << endl;

    // ulta triangle of alphabet pattern
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = n - i; k > 0; k--)
        {
            cout << ch;
        }
        cout << endl;
        ch += 1;
    }
    return 0;
}
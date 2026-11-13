#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n->";
    cin >> n;
    // number triangle pattern
    //     1
    //     1 2
    //     1 2 3
    //     1 2 3 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    // triangle of alphabet pattern
    //    A
    //    A B
    //    A B C
    //    A B C D
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    cout << endl;

    // triangle pattern
    //    1
    ///   2 2
    ///   3 3 3
    //    4 4 4 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    // alphabet triangle
    //     A
    //     B B
    //     C C C
    //     D D D D
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }
    cout << endl;

    // number triangle pattern
    //     1
    //     2 3
    //     4 5 6
    //     7 8 9 10
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
    cout << endl;

    // alphabet triangle pattern
    //    A
    //    B C
    //    D E F
    //    G H I J
    char cha = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << cha << " ";
            cha += 1;
        }
        cout << endl;
    }
    cout << endl;

    // number triangle printing
    //     1
    //     2 1
    //     3 2 1
    //     4 3 2 1

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // alphabet triangle pattern
//    A
//    B A
//    C B A
//    D C B A

    char alpha = 'A';
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << alpha << " ";
            if (j != i)
            {
                alpha -= 1;
            }
        }
        alpha += i;
        cout << endl;
    }
    return 0;
}
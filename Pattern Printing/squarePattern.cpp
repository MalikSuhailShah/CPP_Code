#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n->";
    cin >> n;
    //  1 2 3 4
    // pattern->     //  1 2 3 4
    //   1 2 3 4
    //   1 2 3 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    // square of characters
    //   A B C D
    //   A B C D
    //   A B C D
    //   A B C D
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    cout << endl;
    // continous number square pattern
   // 1 2 3 4
   // 5 6 7 8
   // 9 10 11 12
   // 13 14 15 16
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    cout << endl;

    // continous square of alphabet
//    A B C D
//    E F G H
//    I J K L
//    M N O P
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}
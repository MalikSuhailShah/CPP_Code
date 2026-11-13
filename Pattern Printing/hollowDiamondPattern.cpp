#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n->";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // TOP PART OF HOLLOW DIAMOND
        //  first number of spaces:
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        // printing first line of star
        cout << "*";

        // printing second space
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << " ";
        }

        // printing second line of stars:
        if (i != 0)
        {
            cout << "*";
        }

        cout << endl;
    }
    // BOTTOM PART OF HOLLOW DIAMOND
    for (int i = 0; i < n - 1; i++)
    {
        // printing spaces
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        // printing first line of  star
        cout << "*";
        for(int k=2*n-2*i-5;k>0;k-- )
        {
            cout<<" ";
        }
        if(i!=n-2)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the character -> ";
    cin >> ch;
    // if(ch>='a' && ch<='z')
    // {cout<<"lowercase";
    // }
    // else if (ch>='A' && ch<='Z')
    // {
    //     cout<<"uppercase";
    // }
    // else cout<<"Invalid character";

    if (ch >= 97 && ch <= 122) // here implicit type conversion occurs from character to integer
    {
        cout << "lowercase";
    }
    else if (ch >= 65 && ch <= 90)
        cout << "uppercase";

    else
        cout << "can not say";

    return 0;
}
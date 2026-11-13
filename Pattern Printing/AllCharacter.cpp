#include <iostream>
using namespace std;
int main()
{
    int ascii = 1;
    for (int i = 1; i <= 500; i++)
    {
        char ch = (char)ascii;

        cout << ch << "->" << ascii << endl;
        ascii++;
    }
}
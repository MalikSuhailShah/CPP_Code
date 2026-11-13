#include <iostream>
using namespace std;
int main()
{
    int CP, SP;
    cout << "enter the value of CP And SP->" << endl;
    cin >> CP >> SP;

    int x = SP - CP;
    if (x == 0)
    {
        cout << "neither loss nor profit";
    }
    else if (x > 0)
    {
        cout << "he made profit of " << x;
    }
    else
    {
        cout << "he made losss of " << (-x);
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n->";
    cin >> n;

    // Using For loop
 bool flag = false;
    cout << endl;
    for (int i = 2; i*i <= n; i++)//because for any number after the factor sqrt(n)*sqrt(n), factor repeat itself so we neeed to check the condition only upto i<+sqrt(n) i.e = i*i<=n; 
    {
        if (n % i == 0)
        {
            cout << " non  prime number";
            break;
        }
        else
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        cout<<"prime number";
    }
    return 0;
}
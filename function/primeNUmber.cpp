#include <iostream>
using namespace std;

void prime(int n)
{
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            cout << "number is not prime";
            break;
        }
        else
        {
            cout << "number is prime" << endl;
        }
        // to print prime numbers from 2 to n
        for (int i = 2; i < n; i++)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
                else
                {
                    cout << i << " ";
                    break;
                }
            }
        }
        return;
    }
}
int main()
{
    int n;
    cout << "enter the value of n->";
    cin >> n;
    prime(n);
    return 0;
}
#include <iostream>
using namespace std;
void find(int n, int *p1, int *p2)
{
    *p2 = n % 10;
    while (n > 9)
    {
        n /= 10;
    }
    *p1 = n;
    return;
}
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    int firstDigit, lastDigit;
    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;
    find(n, ptr1, ptr2);
    cout << firstDigit << " " << lastDigit;
}
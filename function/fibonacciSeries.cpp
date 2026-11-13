#include <iostream>
using namespace std;
void fibo(int n)
{
    int a = 0;
    int b = 1;
    int nthterm ;
    int sum = a + b;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            a = 0;
            b = 1;
            cout << a << " ";
        }
        else
        {
            a = b;
            b = sum;
            sum = a + b;
            cout << a << " ";
        }
        if(i==n)
        {
            nthterm=a;
        }

    }
    cout <<"\n"<< n <<"th fibonacci term is->"<< nthterm << "\n ";
    return ;

}
int main()
{
    int n;
    cout << "enter the value of n->";
    cin >> n;
    fibo(n);
    return 0;
}
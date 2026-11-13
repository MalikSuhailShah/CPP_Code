#include<iostream>
using namespace std;
int main ()
{
    char ch;
    cout<<"enter the character->";
    cin>>ch;
    int n=(int)ch;
    cout<<n<<endl;
    if((n>=65 && n<=90) || (n>=97 && n<=122))
    {
        cout<<"character is either UPPER CASE or LOWER CASE alphabet";
    }
    return 0;
}
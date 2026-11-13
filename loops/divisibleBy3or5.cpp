#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cout<<"enter the value of n:";
    cin>>n;
   
      if(n%3==0)
      {
          cout<<"number is divisible  by 3";
      }
       else if(n%5==0)
      {
          cout<<"number is divisible  by 5";
      }
      else cout<<"number is neither divisible by 5 nor by 3";

    
    return 0;
}
#include<iostream>
using namespace std;

int decimatlToBinary(int deciNum)
{
    int ans=0,r,pow=1;
    while(deciNum>0)
    {
        r=deciNum%2;
        deciNum/=2;
        ans+=r*pow;
        pow*=10;

    }
    return ans;
}
int main (){
    int n;
    cout<<"enter the decimal number->";
    cin>>n;

    cout<<"binary number corresponding to decimal number given-> "<<decimatlToBinary(n);
    return 0;
}
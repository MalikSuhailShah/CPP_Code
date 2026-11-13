#include<iostream>
using namespace std;
int binaryTodecimal(int binNum)
{
    //int binNum;
     int ans=0,pow=1,r; 
     while(binNum>0)
     {
        r=binNum%10;
        ans+=r*pow;

        pow+=2;
        binNum/=10;
     }
     return ans;
}
int main (){
    int n;
    cout<<"enter the binary number->";
    cin>>n;
    cout<<"decimal number corresponding to given binary number->"<<binaryTodecimal(n)<<endl;


    return 0;
}
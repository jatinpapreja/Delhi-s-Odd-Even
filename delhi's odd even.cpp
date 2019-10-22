#include<iostream>
using namespace std;
int main()
{
    int n,r,t,i,sum_even,sum_odd;

    cin>>t;   /// t is the number of test cases.

    for(i=1;i<=t;i++)
    {
    cin>>n;     /// the input number.
    sum_even=0;   /// for storing even digits.
    sum_odd=0;   /// for storing odd digits.

    while(n)
    {
        r=n%10; /// here we calculate remainder.
        if(r%2==0) sum_even += r; /// checking if the digit is even or odd
        else sum_odd += r;
        n=n/10;
    }

    if((sum_even%4==0)||(sum_odd%3==0)) cout<<"Yes";
    else cout<<"No";

    cout<<endl;
    }

return 0;
}

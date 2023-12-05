#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the binary number "<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int digit=n%10;
        n=n/10;
        if(digit==1)
        {
            ans=pow(2,i)+ans;
        }
        i++;
    }
    cout<<ans;
    return 0;
}
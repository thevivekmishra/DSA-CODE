#include<iostream>
using namespace std;
int isprime(int n)
//prime no are those number whose factor are 1 and itself ex 1,5,7,11
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"enter any number "<<endl;
    cin>>n;
    if(isprime(n))
    {
        cout<<"it is prime"<<endl;
    }
    else
    {
        cout<<"it is not prime"<<endl;
    }
    return 0;
}
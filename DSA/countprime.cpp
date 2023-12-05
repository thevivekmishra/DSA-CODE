#include<iostream>
using namespace std;
bool isprime(int n)
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
int countprime(int n)
{
    int count =0;
 for(int i=2;i<n;i++)
     {
        if(isprime(i))
        {
            count++;
        }
     }
     return count ;
}
int main()
{
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
   
     if(isprime(n))
     {
        cout<<"it is prime"<<endl;
     }
     else{
        cout<<"it is not a prime no"<<endl;
     }
   // cout << "The count of prime numbers less than " << n << " is: " << countprime(n) << endl;
cout<<"total number of prime less than the entered number is "<<countprime(n);
     return 0;
}
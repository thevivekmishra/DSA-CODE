#include<iostream>
using namespace std;
int getsum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
     sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter the size of n"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the number "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=getsum(arr,n);
    cout<<"sum of the entered number is "<<ans<<endl;
    return 0;
    
}
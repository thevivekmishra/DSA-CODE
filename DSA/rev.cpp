#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
    int start=5;
    int end=n-1;
    while(start<end)
    {
        if(arr[start]<arr[end])
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    return 0;
}
int print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,10);
    print(arr,10);
    return 0;
}
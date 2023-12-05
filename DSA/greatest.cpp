#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int smallest(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[20]={1,15,24,65,558,998,4465,44456,1115,1112,4445,4445,88,446,4554,454,5555,4554,11111,1422};
    int largestnois =largest(arr,20);
    cout<<"largest number is "<<largestnois<<endl;
    int minimunnois=smallest(arr,20);
    cout<<"smallest number is "<<minimunnois;
    return 0;
}
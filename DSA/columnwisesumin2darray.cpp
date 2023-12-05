#include<iostream>
using namespace std;

int sum(int arr[][4],int r,int c)
{
    for(int j=0;j<c;j++)
    {
        int sum=0;
        for(int i=0;i<r;i++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main()
{

int arr[3][4];
  cout<<"enter the elements "<<endl;
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<4;j++)
        {
          cin>>arr[i][j];
        }
    }
  cout<<"array"<<endl;
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<4;j++)
        {
          cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
  cout<<"sum of column"<<endl;
  cout<<sum(arr,3,4)<<endl;
return 0;
}

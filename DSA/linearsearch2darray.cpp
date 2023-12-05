#include<iostream>
using namespace std;
int ispresent(int arr[][4],int r,int c,int target)
{
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
        {
          if(arr[i][j]==target)
          {
            return 1;
          }
        }
    }
  return 0;
}
int main()
{
  int target;
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
  cout<<"enter the number you want to search "<<endl;
  cin>>target;
  if(ispresent(arr,3,4,target))
  {
    cout<<"element found"<<endl;
  }
  else
  {
    cout<<"not found"<<endl;
  }
return 0;
}

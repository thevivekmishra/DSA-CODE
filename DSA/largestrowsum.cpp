#include <iostream>
#include<climits>
using namespace std;
void printsum(int arr[][3],int r,int c)
{
  for(int i=0;i<r;i++)
    {
      int sum=0;
      for(int j=0;j<c;j++)
        {
          sum=sum+arr[i][j];
        }
      cout<<sum<<" ";
    }
cout<<endl;
}
void largest(int arr[][3],int r,int c)
{
int maxi=INT_MIN;
int rowindex=-1;
for(int i=0;i<r;i++)
  {
  int sum=0;
  for(int j=0;j<c;j++)
    {
      sum=sum+arr[i][j];
    }
    if(sum>maxi)
    {
      maxi=sum;
      rowindex=i;
    }
  }
cout<<"largest sum of the row is "<<maxi<<endl;
cout<<"index of the largest sum is "<< rowindex;
}
int main()
{
  int arr[3][3];
  cout<<"enter the elements of row and colomn"<<endl;
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
        {
          cin>>arr[i][j];
        }
    }
  cout<<"printing the array"<<endl;
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
        {
          cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
  cout<<"printing sum of rows"<<endl;
  printsum(arr,3,3);
  largest(arr,3,3);
  return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    cout<<"enter the elements of an row and colomn"<<endl;
    for(int i=0;i<4;i++)
    {
    for(int j=0;j<3;j++)
    {
        cin>>arr[j][i];
    }
    }
    cout<<"enterd elements are "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
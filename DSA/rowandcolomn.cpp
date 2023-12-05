#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter the size of row "<<endl;
    cin>>r;
    cout<<"enter the size of colomn"<<endl;
    cin>>c;
    int arr[r][c];
    cout<<"enter the elements of row and colomn"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
            cin>>arr[j][i];
            }
        }
    
    cout<<"2d array"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
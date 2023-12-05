#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,6,8,5};
    cout<<"address of first block is "<<arr<<endl;
    cout<<"address of first block is "<<&arr[0]<<endl;
    cout<<"address of first block is "<<arr[1]<<endl;
    cout<<"address of first block is "<<arr[5]<<endl;
    cout<<"address of first block is "<<&arr[5]<<endl;
    cout<<"address of first block is "<<*arr<<endl;
    cout<<"address of first block is "<<*arr+1<<endl;
    cout<<"address of first block is "<<*arr+2<<endl;
    cout<<"address of first block is "<<*(arr+2)<<endl;
     cout<<"address of first block is "<<*(arr+3)<<endl;
  cout<<"address of first block is "<<(*arr)+3<<endl;
  cout<<"--------"<<endl;
  int i =4;
  cout<<i[arr]<<endl;
  cout<<arr[i]<<endl;
  cout<<"------new array------"<<endl;

  int a[20]={1,2,5};
  cout<<&a[0]<<endl;
  cout<<&a<<endl;
  cout<<a<<endl;
  cout<<"---pointer----"<<endl;
  int *p=&a[0];
  cout<<p<<endl;
  cout<<*p<<endl;
  cout<<&p<<endl;
  cout<<"---------"<<endl;
  int ab[10];
  //ab=ab+1;
  int *pt=&ab[0];
  cout<<pt<<endl;
  pt=pt+1;
  cout<<pt<<endl;

    
    return 0;
}
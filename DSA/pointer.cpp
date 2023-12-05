#include<iostream>
using namespace std;
int main()
{
   int num=5;
   int a=num;
   cout<<num<<endl;
   a++;
   cout<<"number after increment "<<num<<endl;
   int *ptr=&num;
   cout<<"before "<< num<<endl;
   (*ptr)++;
   cout<<"after "<<num<<endl;
   //copying a pointer
   int *q=ptr;
   cout<<ptr<<"-"<<q<<endl;
   cout<<*ptr<<"-"<<*q<<endl;
   //important concept
   int i=4;
   int *pt=&i;
  cout<<*pt<<endl;
   cout<<"before "<<pt<<endl;
   pt=pt+1;
   cout<<"after "<<pt<<endl;
   
    return 0;
}
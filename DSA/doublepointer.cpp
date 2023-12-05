#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"printing &i "<<&i<<endl;
    cout<<"printing *p "<<*p<<endl;
    cout<<"printing p " <<p<<endl;
    cout<<"printing &p "<<&p<<endl;
    cout<<"printing *p2 "<<*p2<<endl;
    cout<<"printing &p2 "<<&p2<<endl;
    cout<<"-------"<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    return 0;

}
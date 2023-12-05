#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<" enter the value of a b and c "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
cout<<"largest number is "<<endl;
if(a>b && a>c)
{
    cout<<"a is largest "<<endl;
}
else if (b>a && b>c)
{
    cout<<"b is greater "<<endl;
}
else
{
    cout<<"c is largest "<<endl;
}
return 0;
}
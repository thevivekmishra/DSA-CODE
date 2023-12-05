#include<iostream>
using namespace std;
//pass by value
void update(int n)
{
    n++;
}
//pass by reference 
void update1(int &n)
{
    n++;
}
int main()
{
    int n=5;
    cout<<"----pass by value----"<<endl;
    cout<<"before "<<endl;
    cout<<n<<endl;
    cout<<"after "<<endl;
    update(n);
    cout<<n<<endl;
cout<<"----pass by reference----"<<endl;
    cout<<"before "<<endl;
    cout<<n<<endl;
    cout<<"after "<<endl;
    update1(n);
    cout<<n<<endl;
    return 0;

}
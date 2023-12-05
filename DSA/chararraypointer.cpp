#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,54,5};
    char ch[6]="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *ptr=&ch[0];
    cout<<ptr<<endl;
// without initilization of null
    char temp='o';
    char *pt=&temp;
    cout<<pt<<endl;
    return 0;

}
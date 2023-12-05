#include<iostream>
using namespace std;
int reverse(char ch[],int n)
{
    int s =0;
    int e=n-1;
    while(s<e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}
int length(char ch[])
{
    int count=0;
    for(int i=0;ch[i] != '\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[20];

    cout<<"enter your name "<<endl;
    cin>>ch;
    cout<<"your name is "<<ch<<endl;
    int len=length(ch);
    cout<<"length of the name is "<<len<<endl;
    reverse(ch,len);
    cout<<"everse of your name is "<<reverse(ch,len);


    return 0;
}
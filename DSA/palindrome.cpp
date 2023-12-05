#include<iostream>
using namespace std;
int palindrome(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(name[s]!=name[e])
        {
            return 0;
        }
        else
        {
            swap(name[s],name[e]);
            s++;
            e--;
        }
    }
    return 1;
}
int length(char name[])
{
    int count=0;
    for(int i=0;name[i]!=0;i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"enter string "<<endl;
    cin>>name;
    int len=length(name);
    cout<<"palindrome on not  "<<palindrome(name,len);
    return 0;

}
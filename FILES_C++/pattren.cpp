#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        //space pattern
        for (int j = 1; j <= n-i ; j++)
        {
            cout<<" ";
        }
        //star pattren
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
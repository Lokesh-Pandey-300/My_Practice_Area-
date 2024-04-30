#include<iostream>
using namespace std;
int main()
{
    int a,i,sum;
    i=1;
    sum=0;
    cout<<"enter the number till where you want to find the sum"<< endl;
    cin>>a;
    while (i<=a)
    {
        if ((i%2)==0)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<<"the sum is"<< sum << endl;    
    return 0;
}
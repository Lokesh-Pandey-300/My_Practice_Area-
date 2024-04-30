#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter the number of rows you want"<<endl;
    cin>>row;
    int count=row-1;
    for (int i = 1; i <=row ; i++)
    {
        //print spaces
        for (int j = 1; j <= count; j++)
        {
            cout<<" ";
        }
        count=count-1;
        //print numbers
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        //print the third triangle
        for (int j = i-1; j>0 ; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
    return 0;
}
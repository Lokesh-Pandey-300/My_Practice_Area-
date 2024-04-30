#include<iostream>
using namespace std;
int main()
{
    int row;
    int col;
    cout<<"enter the number"<<endl;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        //print spaces
        for (int i = 1; i < row-1; i++)
        {
            cout<<" ";
        }
        //print stars
        cout<<"*";
        cout<<endl;

        
    }
    
    

    return 0;
}
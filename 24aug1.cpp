// PATTERN

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter any number : \n";
    cin>>n;
    for ( i = n; i >= 1; i--)
    {
        for ( j = i; j>= 1; j--)
        {
            cout<<"*";
        }
        cout<<"\n";    }
    
}
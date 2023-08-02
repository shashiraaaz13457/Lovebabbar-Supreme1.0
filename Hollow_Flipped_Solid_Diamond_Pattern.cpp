#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        //Star
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }

        //Spaces
        for (int col = 0; col < 2*row; col++)
        {
            cout<<" ";
        }

        //Star
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }

    for (int row = 0; row < n; row++)
    {
        //Star
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }

        //Spaces
        for (int col = 0; col < 2*(n-row-1); col++)
        {
            cout<<" ";
        }

        //Star
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    
    
}
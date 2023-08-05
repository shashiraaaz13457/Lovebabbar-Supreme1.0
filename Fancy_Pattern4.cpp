#include<iostream>
using namespace std;

//Not Solved
int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;
    int count = 1;
    // int count2 = 10;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<count;
            count++;
            if (col != row)
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            
            if (col != row)
            {
                cout<<"*";
            }
            
            
        }
        cout<<endl;
        
    }
    
    
}
#include<iostream>
using namespace std;

//Tough Question solve it one more time.
int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<" ";
        }
        for (int col = 0; col < 2*row+1; col++)
        {
            if (col == 0 || col == 2*row)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            } 
        }
        cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<" ";
        }
        for (int col = 0; col < 2*(n-row)-1; col++)
        {
            if (col == 0 || col == 2*(n-row)-2)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }

    
    
}
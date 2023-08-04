#include<iostream>
using namespace std;

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
            if (col==0)
            {
                cout<<col+1;
            }
            else if (col == 2*row)
            {
                cout<<col-2*row+1;
            }
            else if (col > row)
            {
                cout<<2*row-col+1;
            }
            
            
            else{
                cout<<col+1;
                // cout<<"*";
            }
            
        }
        
        cout<<endl;
        
    }
    
}
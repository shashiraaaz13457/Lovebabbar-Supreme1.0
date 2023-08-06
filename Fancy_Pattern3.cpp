#include<iostream>
using namespace std;

//Good one ,it just too much for me at that time.

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2*row+1; col++)
        {
            if (col == 0 || row == 0 || col == 2*row )
            {
                cout<<"*";
            }
            else if (col == 1 || col == 2*row-1)
            {
                cout<<"1";
            }
            else if (col > row)
            {
                // cout<<col-row+1;
                cout<<2*row-col;
            }
            
            
            else{
                cout<<col;
            }
            
        }
        cout<<endl;
        
    }
    for (int row = 0; row < n-1; row++)
    {
        int start = n-row-3;
        for (int col = 0; col < 2*(n-row)-3; col++)
        {
            
            if (col == 0 || col == 2*(n-row)-4)
            {
                cout<<"*";
            }
            else if (col == 2*(n-row)-5)
            {
                cout<<"1";
            }
            
            else if (col > n-row-2)
            {
                cout<<start;
                start--;

            }
            
            
            else{
                cout<<col;
            }
            
        }
        cout<<endl;
        
    }
    
    
}
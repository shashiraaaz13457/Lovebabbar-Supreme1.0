#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            if (col == 0 || col == row)
            {
                cout<<"1";
            }
            else if (col == 1)
            {
                cout<<col+row-1;
            }
            
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}
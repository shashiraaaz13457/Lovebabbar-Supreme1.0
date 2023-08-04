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
            //col == row means last row. same for row == n-1 .
            if (col == 0 || col == row || row == 0 || row == n-1)
            {
                cout<<col+1;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}
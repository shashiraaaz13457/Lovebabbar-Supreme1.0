#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n-row-1; space++)
        {
            cout<<" ";
        }
        
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+col+1;
        }
            int start = 2*row;
        for (int col = 0; col < row; col++)
        {
    //         cout<<2*row-col;
                cout<<start;
                start--;
        }
        
        cout<<endl;
    }

    //Using two loops

    for (int row = 0; row < n; row++)
    {
        int k = 0;
        for (int col = 0; col < 2*n-1; col++)
        {
            if (col < n-row-1)
            {
                cout<<" ";
            }
            else if (k < 2*row+1)
            {
                
                k++;
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    
}
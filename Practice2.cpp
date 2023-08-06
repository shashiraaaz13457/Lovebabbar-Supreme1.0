#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

// First Method
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int col = 0; col < 2*row+1; col++)
    //     {
    //         if (col ==0)
    //         {
    //             cout<<col+1;
    //         }
    //         else if (col == 2*row)
    //         {
    //             cout<< row+1;
    //         }
    //         else if (row == n-1)
    //         {
    //             if (col > row)
    //             {
    //                 break;
    //             }
    //             else{
    //                 cout<<" "<<col+1;
    //             }
                
    //         }
            
    //         else{
    //             cout<<" ";
    //         }
            
            
    //     }
        
    //     cout<<endl;
    // }

    //Second method by babbar bhaiya.

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n-row-1; space++)
        {
            cout<<" ";
        }
        int start = 1;
        for (int col = 0; col < 2*row+1; col++)
        {
            if (row == 0 || row == n-1)
            {
                //even
                if (col%2 == 0)
                {
                    cout<<start;
                    start++;
                }
                //odd
                else{
                    cout<<" ";
                }
            }
            else{
                if (col == 0)
                {
                    cout<<1;
                }
                else if (col == 2 * row)
                {
                    cout<<row+1;
                }
                else{
                    cout<<" ";
                }
                
            }
            
            
        }
        cout<<endl;
        
    }
    
    
}
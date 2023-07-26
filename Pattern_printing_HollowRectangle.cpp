#include<iostream>
using namespace std;

//Hollow Rectangle
int main(){
    // for (int row = 0; row < 3; row++)
    // {
    //     //for first row and last row print 5*
    //     if (row == 0 || row == 2)
    //     {
    //         for (int col = 0; col < 5; col++)
    //         {
    //             cout<<"*";
    //         }
    //     } 

    //     else {
    //         //middle row
    //         //first star
    //         cout<<"*";
    //         //spaces
    //         for (int spaces = 0; spaces < 3 ; spaces++)
    //         {
    //             cout<<" ";
    //         }
    //         // last star
    //         cout<< "*";
            
    //     }
    //     cout<< endl;
    // }

    // Self Practice

    // for (int row = 0; row < 3; row++)
    // {
    //     if (row == 0 || row == 2)
    //     {
    //         for (int col = 0; col < 5; col++)
    //         {
    //             cout<<"*";
    //         }
            
    //     }
    //     else{
    //         cout<<"*";
    //         for (int spaces = 0; spaces < 3; spaces++)
    //         {
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }

    // Generic code
        int row_count,col_count;
        cout<<"Enter how many rows you want to insert: ";
        cin>>row_count;
        cout<<"Enter how many column you want to insert: ";
        cin>>col_count;

    for (int row = 0; row < row_count; row++)
    {
        if (row == 0 || row == row_count-1)
        {
            for (int col = 0; col < col_count; col++)
            {
                cout<<"*";
            }
            
        }
        else{
            cout<<"*";
            for (int spaces = 0; spaces < col_count-2; spaces++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
        
    }

    
}
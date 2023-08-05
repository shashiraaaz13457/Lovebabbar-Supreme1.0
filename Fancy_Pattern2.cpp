#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        // for (int col = 0; col < 3*n+2; col++)
        // {
        //     if (col == 2*n-row-2)
        //     {
        //         cout<<row+1;
        //     }
        //     else if (/* condition */)
        //     {
        //         /* code */
        //     }
            
        //     else{
        //         cout<<"*";
        //     }
            
        // }
        // cout<<endl;

        for (int col = 0; col < 2*n-row-2; col++)
        {
            cout<<"*";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+1;
            if(col!=row){
                cout<<"*";
            }
        }
        for (int col = 0; col < 2*n-row-2; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
        
    }
    
}
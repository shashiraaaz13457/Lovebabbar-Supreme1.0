#include<iostream>
using namespace std;

//Tough but solved in 40mins.

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
            if (col == 0 || col == 2*row || row == 0 )
            {
                cout<<"*";
            }
            else if (row == n-1)
            {
                if (col < n)
                {
                    cout<<" "<<"*";
                }
                else{
                    break;
                }
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
}
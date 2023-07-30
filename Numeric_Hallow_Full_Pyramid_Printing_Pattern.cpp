#include<iostream>
using namespace std;

//Self Solved but takes 1hr to solve.(Try for better approach)

int main(){
    int n;
    cout<<"Enter the number of rows you want to insert: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int spaces = 0; spaces < n-row-1; spaces++)
        {
            cout<<" ";
        }
        if (row == 0 || row == n-1)
        {
            for (int col = 0; col < row+1; col++)
            {
                cout<<col+1<<" ";
            }
        }
        else{
            cout<<"1";
            for (int space = 0; space < row; space++)
            {
                cout<<" ";
            }
            for (int space = 0; space < row; space++)
            {
                
                if (row==1)
                {
                    cout<<row+1;
                }
                
            }
            for (int space = 0; space < row-1; space++)
            {
                if (row == 2)
                {
                    cout<<" "<<row+1;
                }
                else{
                    cout<<"  "<<row+1;
                    break;
                }
                 
            }
            
        }
        
        cout<<endl;
    }
    
}
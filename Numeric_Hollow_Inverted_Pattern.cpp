#include<iostream>
using namespace std;

//It takes 20-25mins to solve.(Little bit tricky)

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            if (col == 0 )
            {
                cout<<row+1;
            }
            else if (row == 0)
            {
                cout<<col + 1;
            }
            else if (col == n-row-1 || row == n-1)
            {
                cout<<n;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}
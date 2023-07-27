#include<iostream>
using namespace std;

//Self Solved Take upto 30mins-45mins.
int main(){
    int n;
    cout<<"Enter the number of rows you want to insert:";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int spaces = 0; spaces < n-row-1; spaces++)
        {
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<col+row+1;
        }
        for (int i = 0; i < row; i++)
        {
            cout<<2*(row)-i;
        }
        
        cout<<endl;
    }
    
}


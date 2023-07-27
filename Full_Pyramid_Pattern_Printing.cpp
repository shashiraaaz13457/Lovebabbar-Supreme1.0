#include<iostream>
using namespace std;

//Good Self solved.

int main(){
    int n;
    cout<<"Enter how much row you want to print: ";
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col_spaces = 0; col_spaces < n-row-1; col_spaces++)
        {
            cout<<" ";
        }

        for (int col = 0; col < row+1; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
    
    
}
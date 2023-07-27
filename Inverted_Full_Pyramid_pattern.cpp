#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int spaces = 0; spaces < row; spaces++)
        {
            cout<<" ";
        }

        //1st Approach
        // for (int star = n; star > row;star--)
        // {
        //     cout<<"*"<<" ";
        // }

        //2nd Approach
        for (int star = 0; star < n-row; star++)
        {
            cout<<"*"<<" ";
        }
        
        
        cout<<endl;
        
    }
    
}
#include<iostream>
using namespace std;

//Nhi smj aaya ache se phir se try kr..

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            int ans = col+1 ;
            char ch = ans + 'A'-1;
            cout<< ch;
        }

        //For reverse counting
        for (int col = row; col >= 1; col--)
        {
            int ans = col;
            char ch = ans + 'A'-1;
            cout<<ch;
        }
        cout<<endl;
        
    }
    
}
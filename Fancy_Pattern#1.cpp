#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+3;
        }
        cout<<endl;
    }
    for (int row = 0; row < n-1; row++)
    {
        for (int col = 0; col < n-1-row; col++)
        {
            cout<<n+1-row;
        }
        cout<<endl;
    }
    
    
    
    
}
#include <iostream>

using namespace std;

//Efficient way to solve Hollow Questions better than love bhaiya concept.(Lakshya bhaiya concept.)
int main()
{
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0 || i == n-1|| j == 0 ||j == n-1){
            cout<<"*";
            }
            else{
                cout<<" ";
            }   
        }
        
        
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        char ch;
        for (int col = 0; col < row+1; col++)
        {
            ch = col + 1 + 'A' - 1 ;
            cout<<ch;
        }
        //Reverse ke liye chlao ab jbtk A tk nhi pahucho.

        for (char alphabet = ch; alphabet > 'A' ; )
        {
            /* code */
            alphabet = alphabet - 1;
            cout<< alphabet;
        }
        
        cout<<endl;
    }
    
}
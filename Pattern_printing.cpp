#include<iostream>
using namespace std;

// Rectangle Printing
int main(){
    //First Approach
    //outer-loop = row
    for (int row = 0; row < 3; row = row+1)
    {
        //inner-loop = col
        for (int col = 0; col < 5; col+=1)
        {
            cout<< " * " ;
        }
        cout << endl;
    }

    

// Square Printing
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<< " * ";
        }
        cout<<endl;
        
    }

    //user input to print Square pattern
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout<< endl;
        
    }
    
    

    
    
}
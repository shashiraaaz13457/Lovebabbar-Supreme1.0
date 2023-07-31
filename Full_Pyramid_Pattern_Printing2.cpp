#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of rows you want to print: ";
//     cin>>n;

// //Tough to think this kind of approach ...(BY Lakshaya bhaiya concept)
//     for (int rows = 0; rows < n; rows++)
//     {
//         int k = 0;
//         for (int col = 0; col < (2*n)- 1; col++)
//         {
//             if (col < n-rows-1){
//                 cout<<" ";
//             }
//             else if (k < 2*rows+1)
//             {
//                 cout<<"*";
//                 k++;
//             }
//             else{
//                 cout<<" ";
//             }
             
//         }
//         cout<<endl;
        
//     }
    
// }

// Hollow print krwana h toh..

int main(){
    int n;
    cout<<"Enter the number of rows you want to print: ";
    cin>>n;

//Tough to think this kind of approach ...(BY Lakshaya bhaiya concept)(Hard to digest)
    for (int rows = 0; rows < n; rows++)
    {
        int k = 0;
        for (int col = 0; col < (2*n)- 1; col++)
        {
            if (col < n-rows-1){
                cout<<" ";
            }
            else if (k < 2*rows+1)
            {
                if (k == 0 || k == 2*rows || rows == n-1)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                k++;
            }
            else{
                cout<<" ";
            }
             
        }
        cout<<endl;
        
    }
    
}
//  Syntax of for loops
/*
for(initialistion; condition; Increment/Decrement){
    //code
}
*/ 
#include<iostream>
using namespace std;

int main(){
    
    // for(int i = 0; i<5; i++){
    //  cout<< i<< endl;
    // }

    // for(int i = 5; i>0; i--){
    //     cout<< i<< endl;
    // }

    // for(int i = 1; i<=10; i = i*2){
    //     cout<< i <<endl;
    //     //op- 1 2 4 8 
    // }

    // for(int i = 100; i > 0; i = i/2){
    //     cout<< i <<endl;
    // }

    for (int i = 5; (i >= 0 && i<=10); i++)
    {
        cout<< i << endl;
    }
    
}


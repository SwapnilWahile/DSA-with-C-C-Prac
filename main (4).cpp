/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n= 11;
    for(int i=0; i<=n/2; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
         
        }
        if(i==n/2){
            cout<<"*";
        }
        for(int k=i; k<(n/2); k++){
            cout<<"*";
        }
        for(int l=i; l<(n/2); l++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

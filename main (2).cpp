/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n = 50, pos = 3;
    int arr[50] = {1,2,3,4,5};
    for(int i=5; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = n;
    for(int i=0; i<6; i++){
        cout<<arr[i];
    }
        return 0;
}

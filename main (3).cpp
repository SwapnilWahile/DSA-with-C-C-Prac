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
    string str = "swapnil";
    int n = str.length();
    for(int i=0; i<n/2; i++){
        char tem = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = tem;
        
    }
    cout<<str;
        return 0;
}

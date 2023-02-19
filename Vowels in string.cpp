/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;
int main()
{
    string str = "abcdeefighopuwy";
    char arr[7];
    for(int i =0; i<str.length(); i++){
        int flag = 1;
        if((str[i] == 'a')||(str[i]=='e')||(str[i] == 'i')||(str[i] == 'o')||(str[i] == 'u')){
            for(int j=0; j<i; j++){
                if(arr[j]==str[i]){
                    flag--;
                    break;
                }
            }
            if(flag){
                arr[i] = str[i];
            }
            
        }
    }
     for(int i=0; i<sizeof(arr)/sizeof(arr[i]); i++){
         cout<<arr[i];
     }
        return 0;
}

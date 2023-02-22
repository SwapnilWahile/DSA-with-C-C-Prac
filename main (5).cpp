/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverse(string &str, int l, int r){
    while(l<r){
        swap(str[l], str[r]);
        l++;
        r--;
    }
} 
string reverstr(string str){
    str.insert(str.end(), ' ');
    int n = str.length();
    int j = 0;
    for(int i=0; i<n; i++){
        if(str[i] == ' '){
            reverse(str, j, i-1);
            j=i+1;
        }
    }
    str.pop_back();
    reverse(str, 0,str.length()-1);
    return str;
} 
int main()
{
 string sent = "hello world from jupiter";
 cout<<reverstr(sent);
 
;   return 0;
}

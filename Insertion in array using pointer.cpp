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
 /*for(int i=1; i<6; i++){
     for(int j=i; j>=1; j--){
         cout<<j;
     }
     cout<<endl;
 }*/
 int n, indx, inelsi;
 cin>>n>>indx>>inelsi;
 int arr[inelsi];
 for(int i=0; i<inelsi; i++){
     cin>>arr[i];
 }
 int* oldar  = new int [n];
 int* nwarr = new int [n + inelsi]; 
for(int i=0; i<n; i++){
    cin>> oldar[i];
}

 for(int i=0; i<indx; i++){
     nwarr[i] = oldar[i];
 }

 for(int k=0; k<inelsi; k++){
     nwarr[indx+k] = arr[k];
 }
 for(int j=indx + inelsi; j<n+inelsi; j++){
     nwarr[j] = oldar[j-inelsi];
 }
 delete []oldar;
 oldar = nwarr;
 nwarr = NULL;

 for(int i=0; i<n+inelsi; i++){
     cout<<oldar[i];
 }
 

        return 0;
}

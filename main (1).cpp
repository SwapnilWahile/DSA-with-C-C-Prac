/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

// Function to match character
void check(string s1, string s2){
    vector<char> v;
  // Create a map to map
  // characters of 1st string
  map < char, int >map;
  // traverse the first string
  // and create a hash map
  for (int i = 0; i < s1.length (); i++){
    map[s1[i]]++;
    }
  // traverse the second string
  // and if there is any
  // common character than add it into vector
  for (int i = 0; i < s2.length (); i++){
    if (map[s2[i]] > 0){
        v.push_back(s2[i]);
        //to avoid printing repition of char we making its occurance 0 in map after storing it in vector. 
        map[s2[i]] = 0;
    }
  }
 //now print containt of vector that is common character
 for(int k=0; k< sizeof(v); k++){
     cout<<v[k];
 }
     
}

// Driver code
int main ()
{
  // Declare two strings
  string s1, s2;
    cin>>s1>>s2;
    // Find if there is a common subsequence
    check(s1, s2);
    return 0;
}

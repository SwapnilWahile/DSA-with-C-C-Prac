/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
float slope(float x1, float y1, float x2 ,float y2){
    if(x2 - x1 != 0){
        return (y2 - y1) / (x2 -x1);
    }
    return INT_MAX;
}
int main()
{
    float x1 = 4, y1 = 2;
    float x2 = 2, y2 = 5;
    cout<<slope(x1, y1, x2, y2);
    return 0;
}

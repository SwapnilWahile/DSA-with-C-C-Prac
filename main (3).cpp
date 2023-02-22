/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//area of cone =  return pi * r * s + pi * r * r;
//volume of cone = return (float(1) / float(3)) * pi * r * r * h;
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
float triangle(float b, float h)
{
    float area = (h*b) / 2;
    return area;
}
float square(float side){
    float area = side * side;
    return area;
}
float circle(float r){
    float area = 3.14 * (r*r);
    return area;
}
float rectangle(float l, float b){
    return l * b;
}
int main ()
{

    cout<<triangle(3, 5)<<endl;
    cout<<square(3)<<endl;
    cout<<circle(5)<<endl;
    cout<<rectangle(3, 5)<<endl;
  return 0;
}

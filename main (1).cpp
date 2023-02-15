/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

void merge(int* a, int l, int m, int r){
    int i, j, k, nl, nr;
    nl = m - l +1;
    nr = r-m;
    int lar[nl];
    int rar[nr];
    for(i=0; i<nl; i++){
        lar[i] = a[l+i];
    }
    for(j=0;j<nr;j++){
        rar[j]= a[m+1+j];
    }
    i =0, j=0, k=l;
    while(i<nl && j<nr){
        if(lar[i]<=rar[j]){
            a[k] = lar[i];
            i++;
        }
        else{
            a[k] = rar[j];
            j++;
        }
        k++;
    }
    while(i <nl){
        a[k] = lar[i];
        i++;
        k++;
    
    }
    while(j<nr){
        a[k] = rar[j];
        j++;
        k++;
    }
}
void mergeSort(int* a, int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int main(){
    int a[] = {5, 4, 1, 3, 2};
    mergeSort(a, 0, 4);
    for(int i=0; i<5; i++){
        cout<<a[i];
    }
    return 0;
}
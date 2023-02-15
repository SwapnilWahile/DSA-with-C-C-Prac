/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int partition(int* a, int s, int h){
    int pivot = a[s];
    int cnt = 0;
    for(int i=s+1; i<=h;i++){
        if(a[i]<=pivot){
            cnt++;
        }
    }
    int pivot_indx = s+cnt;
    swap(a[pivot_indx], a[s]);
    int i = s,j = h;
    while(i< pivot_indx && j >pivot_indx){
        while(a[i] <= pivot){
            i++;
        }
        while(a[j]>= pivot){
            j--;
        }
        if(i<pivot_indx && j>pivot_indx){
            swap(a[i++], a[j--]);
        }
    }
    return pivot_indx;
}
void quicksort(int* a, int s, int h){
    if(s>=h){
        return;
    }
    int p = partition(a, s, h);
    quicksort( a, s, p-1);
    quicksort( a, p+1, h);
}


int main()
{
    int a[] = {5, 1, 7, 3, 2, 6};
    quicksort(a, 0, 5);
    for(int i=0; i<6; i++) 
    {
        cout << a[i] << " ";
        
    }
    return 0;
}

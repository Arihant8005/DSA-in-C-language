// Given an array of N integers, find the largest element present in the array.

#include<stdio.h>
int Largest_element(int a[] , int size);
int main(){
    int a[] = {1 ,-2, 33, -999, 0};
    printf(" Largest element = %d",Largest_element(a,5));
}
int Largest_element(int a[] , int size)
{
    int max = a[0];
    for(int i = 0; i < size; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

// Time coomplexity = o(n)
// space complextiy = o(1)  because only variablr max is used whic is independent of size
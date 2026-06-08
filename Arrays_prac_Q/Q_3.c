// Given an array, determine whether it is sorted in non-decreasing order (ascending order with duplicates allowed).

#include<stdio.h>
int sorted(int a[] , int size);
int main(){
    int a[] = {1 , 2, 22, 222, -8};
    int size = sizeof(a)/sizeof(a[0]);
    if((sorted(a , size)))
        printf("Sorted");
    else
        printf("Not sorted");
}
int sorted(int a[] , int size)
{
    for(int i = 0; i < size - 1; i++){
        if(a[i] > a[i + 1]){
            return 0;
        }
    }
    return 1;
}
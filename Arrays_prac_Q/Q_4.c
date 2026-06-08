// Reverse an Array (Two-Pointer Technique)

#include<stdio.h>
void reverse(int a[] , int size);
int main(){
    int a[] = { 1, 22, -4 , 2, 99};
    int size = sizeof(a)/sizeof(a[0]);
    reverse(a , size);
    for(int i= 0; i < size; i++){
        printf("%d\t",a[i]);
    }

}
void reverse(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    while(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

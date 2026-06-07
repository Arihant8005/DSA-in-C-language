// Find the second largest element in an array

#include<stdio.h>
int second_lar(int a[], int size);
int main(){
    int a[] = {-23, 22, 0, -99, 65};
    int size = sizeof(a)/sizeof(a[0]);
    printf(" Second largest element = %d",second_lar(a,size));
}
int second_lar(int a[], int size)
{
    int max_1 = a[0];
    int max_2;
    for(int i = 0; i < size; i++){
        if(a[i] > max_1){
            max_2 = max_1;
            max_1 = a[i];
        }
    }
    return max_2;
}
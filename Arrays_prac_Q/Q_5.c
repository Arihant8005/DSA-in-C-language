//count frequency of elemnets in an array

#include<stdio.h>
void frequency(int a[], int size);
int main(){
    int a[] = {1,1, 2, 2,-55,-55,2, 9, 8, 0};
    int size = sizeof(a)/sizeof(a[0]);
    frequency(a, size);
}
void frequency(int a[] , int size)
{
    int i, count;
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(a[i] == a[j])
                count ++;
        }
        printf("%d appears %d times\n",a[i],count);
    }
}
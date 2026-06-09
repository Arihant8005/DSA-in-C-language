//Copy One Array into Another Array

#include<stdio.h>
void copy_array(int a[] ,int b[] ,int size);
int main(){
    int a[] = { 1, 2, 3, 4, 5, 99};
    int b[6];
    int size = sizeof(a)/sizeof(a[0]);
    copy_array(a,b,size);
    for(int i = 0; i < size; i++){
        printf("%d\n",b[i]);
    }

}
void copy_array(int a[], int b[],int size){
    for(int i = 0; i < size; i++){
        b[i] = a[i];
    }
}
#include<stdio.h>

//function for swapping 
void swap_element(int* A, int* B){
    int temp;
    temp =* A;
    *A = *B;
    *B=temp;
}
//function for sorting the array
void bubble_sort(int * ptr,int size){
    for (int i=0;i<=size-1;i++){
        for (int j=0;j<size-i-1;j++){
            if (*(ptr+j)>*(ptr+j+1)){
                swap_element(ptr+j,ptr+j+1);
            }
        }
    }
}
int main(){
    int arr[100];
    int size;
    int *ptr;
    ptr=&arr[0];
    printf("Enter the size of the array \n");
    scanf("%d",&size);
    printf("Enter the array \n");
    for (int i=0;i<size;i++){
        printf("Array[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    bubble_sort(ptr,size);
    printf("After sorting the array \n");
    for (int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
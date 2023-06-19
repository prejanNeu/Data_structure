#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//function for swapping 
void swap_element(int* A, int* B){
    *A = *A+*B;
    *B=*A-*B;
    *A=*A-*B;
}
//function for sorting the array
void bubble_sort(int * ptr,int size){
    clock_t start, end;
    start = clock();
    for (int i=0;i<=size-1;i++){
        for (int j=0;j<size-i-1;j++){
            if (*(ptr+j)>*(ptr+j+1)){
                swap_element(ptr+j,ptr+j+1);
            }
        }
    }
    end = clock();
    double duration = ((double)end - start)/CLOCKS_PER_SEC;
    printf("Time taken to execute in seconds : %f", duration);
}
int main(){
    
    int size;
    int *ptr;
    printf("Enter the size of the array \n");
    scanf("%d",&size);
    ptr = (int*)malloc(size * sizeof(int));
    printf("Enter the array \n");
    for (int i=0;i<size;i++){
        printf("Array[%d] : ",i);
        scanf("%d",&ptr[i]);
    }
    bubble_sort(ptr,size);
    printf("After sorting the array \n");
    for (int i=0;i<size;i++){
        printf("%d  ",ptr[i]);
    }
    
    return 0;
}
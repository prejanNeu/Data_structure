#include<stdio.h>
#include<stdlib.h>
void swapping(int* a, int* b){
    *a=*a + *b;
    *b=*a-*b;
    *a=*a-*b;
}
void selection_sort(int *ptr,int* size){
    for (int i=0;i< *size-1;i++){
        for (int j=i+1;j< *size;j++){
            if (*(ptr+j)< *(ptr+i)){
                swapping(ptr+j,ptr+i);
            }
        }
    }
}
int main(){
    int a=3,b=4;
    int *ptr;
    int size;
    printf("Enter size of the array\n");
    scanf("%d",&size );
    printf("Input the array\n");
    ptr=(int*)malloc(size*sizeof(int));
    // printf("%p",ptr);
    for (int i=0;i<size;i++){
        printf("Array[%d] : ",i);
        scanf("%d", &ptr[i]);
    }
    printf("Before sorting the array \n");
    for (int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
    //sorting function
    selection_sort(ptr,&size);
    printf("After sorting the array \n");
    for (int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
    
}
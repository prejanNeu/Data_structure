#include<stdio.h>
#include<stdlib.h>


void insertion_sort(int* ptr , int* size){

    int temp,j;

    for (int i=0;i< (*size) ; i++){

        temp=*(ptr+i);

        int j=i-1;

        while(j>=0&&*(ptr+j)>temp){
            *(ptr+j+1)=*(ptr+j);
            j--;
        }

        *(ptr+j+1)=temp;
    }
}

int main(){

    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int* ptr;
    ptr = (int*)malloc(size * sizeof(int));

    printf("Enter the array \n");
    
    for (int i=0; i<size; i++){
        printf("array [%d] :", i);
        scanf("%d", &ptr[i]);
    }

    printf("Before swapping the array \n");
    for ( int i=0;i<size;i++){
        printf("%d " ,ptr[i]);

    }

    insertion_sort(ptr,&size);

    printf("After sorting the array \n");

    for ( int i=0;i<size;i++){
        printf("%d " ,ptr[i]);

    }
    return 0;
}
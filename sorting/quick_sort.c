#include<stdio.h>
void swap(int* arr, int position1, int position2){
    int temp = arr[position1];
    arr[position1]=arr[position2];
    arr[position2]= temp;
}

void print_array(int arr[],int size){

    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int* arr, int low, int high){
    int i=low+1,j=high;
    int pivot = arr[low];
        while (i<=j){
            while(i<=high && arr[i]<=pivot){
                i++;
            }
            while(pivot<arr[j]){
                j--;
            }
            if (i<j){
                swap(arr,i,j);
            }
        }
        swap(arr,low,j);

        return j;
    
}

void quick_sort(int* arr, int low, int high){
    if (low <high){

        int pivot=partition(arr,low,high);

        quick_sort(arr, low, pivot-1);
        quick_sort(arr,pivot+1,high);
    }
   
}

int main(){

    int arr[] = {3,2,5,4,1,3,6,7,8,6,7,5,4,3,4,4};
    int size = sizeof(arr)/sizeof(int);

    printf("Before Sorting....\n");
    print_array(arr,size);

    int low = 0;
    int high = size-1;
    quick_sort(&arr[0],low, high);

    printf("After Sorting....\n");
    print_array(arr,size);

    return 0;
}
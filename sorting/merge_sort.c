#include<stdio.h>

void conquer(int* arr, int si, int mid, int ei ){
    int size=ei-si+1;
    int merge_array[size];
    
    int m1=si,m2=mid+1;
    int x=0;
    while(m1<=mid && m2<=ei){
        if (arr[m1]<=arr[m2]){
            merge_array[x]=arr[m1++];
            x++;
        }
        else{
            merge_array[x]=arr[m2++];
            x++;
        }
    }
    while(m1<=mid){
        merge_array[x]=arr[m1++];
        x++;
    }
    while(m2<=ei){
        merge_array[x]=arr[m2++];
        x++;
    }

    for (int i=0,j=si;i<size;i++,j++){
        arr[j]=merge_array[i];
    }
}
void divide(int* arr, int si, int ei){
    if (si>=ei){
        return ;
    }

    int mid = (si+ei)/2;
    divide(arr, si,mid);
    divide(arr,mid+1,ei);
    conquer(arr,si,mid,ei);
}

void print_array(int arr[],int size){

    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){

    int arr[]={6,3,9,5,2,8};
    int size=sizeof(arr)/sizeof(int);

    printf("Before Sorting....\n");
    print_array(arr,size);
    
    int si=0;
    int ei=size-1;
    divide(&arr[0],si,ei);
    printf("After Sorting....\n");
    print_array(arr,size);
    
    return 0;
}




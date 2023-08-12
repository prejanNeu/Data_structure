#include<stdio.h>

//print nomber from n to one 
void print_number(int n){
    if (n==0){
        return ;
    }
    else {
        printf("%d ",n);
        print_number(n-1);
    }
}

//print number from one to n
void printNumber(int n,int x){
    if (x>n){
        return ;
    }
    else {
        printf("%d ",x);
        printNumber(n,x+1);
    }
}
int main(){
    int x=1;
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    //from n to 1
    print_number(n);
    printf("\n\n");
    //from 1 to n
    printNumber(n,x);
    return 0;

}
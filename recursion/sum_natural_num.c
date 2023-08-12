#include<stdio.h>
#include<stdlib.h>

void sum_natural_num(int i, int n, int sum){
    if (i==n){
        sum+=i;
        printf("Sum of from %d is  %d   ",n,sum);
        return ;
    }

    sum+=i;
    sum_natural_num(i+1,n,sum);
}
int main(){
    int n;
    int sum=0;
    printf("Enter the number :");
    scanf("%d", &n);
    sum_natural_num(1,n,0);
    return 0;
}
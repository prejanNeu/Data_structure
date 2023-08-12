#include<stdio.h>
void fibonacci(int a, int b, int n){
    if (n==1){
        int c = a+b;
        printf("%d     ", c);
        return ;
    }
    int c = a+b;
    printf("%d, ", c);
    a=b;
    b=c;
    fibonacci(a,b,n-1);
}
int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d", &n);
    printf("0, 1, ");
    fibonacci(0,1,n-2);
    return 0;

}
//prnt x^n wth stack heiight log n

#include<stdio.h>
#include<stdlib.h>

int powerN(int x, int n){
    if (x==0){
        return 0;
    }
    if (n==0){
        return 1;
    }
    if (n%2==0){
        return  powerN(x,n/2)*powerN(x,n/2);
    }
    else {
    return powerN(x,n/2)*powerN(x,n/2)*x;
        
    }

}

int main(){
    int a,b;
    printf("Let us suppose we have a^b \n");
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    int power = powerN(a,b);
    printf(" %d to the power of %d is :: %d  ",a,b,power);
    return 0;
}
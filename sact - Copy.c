#include<stdio.h>

int fact(int n);
int main(){
    int n;
    printf("Enter numer n is ");
    scanf("%d", &n);

    printf("%d",fact(n));
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    int factnm1=fact(n-1);
    int fact=factnm1*n;
    return fact;
}
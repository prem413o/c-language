#include<stdio.h>
int square(int n);

int main(){
    int n;
    printf("enter number is ");
    scanf("%d", &n);

    printf("%d",square(n));
    return 0;
}
int square(int n){
    int square=n*n;
    return square;
}
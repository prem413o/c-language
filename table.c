#include<stdio.h>

int main(){

    int n;
    printf("Enter number is ");
    scanf("%d", &n);

    for(int i=1;i<=10;i++){

        printf("%d\t",n*i);
    }
    return 0;
}
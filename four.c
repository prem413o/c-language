#include<stdio.h>
int sum(int a,int b);

int main(){
    int a,b;
    printf("Enter number a and b is  ");
    scanf("%d %d", &a,&b);

    printf("sum of two number is %d",sum(a,b));

    return 0;
}
int sum(int a,int b){
    int sum=a+b;
    return sum;
}
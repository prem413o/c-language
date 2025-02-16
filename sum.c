#include<stdio.h>
int sum(int n);

int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d",sum(n));

    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumnm1=sum(n-1);
    int sum=sumnm1 + n;
    return sum;
}
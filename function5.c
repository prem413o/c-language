#include<stdio.h>

void table(int n);

int main(){
    int n;
    printf("Enter number n is ");
    scanf("%d", &n);

    table(n);
    return 0;

}
void table(int n){
    for(int i=0; i<=10;i++){
        printf("%d\n",n*i);
    }
}
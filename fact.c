#include<stdio.h>

int fact(int x);

int main(){
    int x;
    printf("Enter number x is ");
    scanf("%d", &x);

    printf("%d", fact(x));
    return 0;
}
int fact(int x){

    if(x==1 || x==0){
        return 1;    
    
}else {
    return x*fact(x-1);
}

}
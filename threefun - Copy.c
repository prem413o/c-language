#include<stdio.h>

void indian();
void french();

int main(){
    char citizen;
    printf("Enter the citizen belongs to french or indian is :  ");
    scanf("%c", &citizen);

    if(citizen=='i'){
        printf("indian\n");
        indian();
    }else{
        printf("french\n");
        french();
    }
    return 0;

}
void indian(){

    printf("Namaste");
}
void french(){
    printf("bonjour");
}
#include<string.h>
#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("odd_Number.txt","w");

    int m;
    printf("Enter number m : ");
    scanf("%d", &m);

    for(int i=1; i<=m;i++){
        printf("%d\n", i);
    }
    for(int i=1;i<=m;i++){
        if(i%2 !=0){
            fprintf(fptr,"%d\n",i);
        }
    }
    fclose(fptr);

    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr=fopen("oddnumber.txt","w");

    int n;
    printf("Enter number is ");
    scanf("%d", &n);

    for(int i=1; i<=n;i++){
        printf("%d\n", i);
       
        }
        for(int i=1; i<=n;i++){
             if(i%2 !=0){
            fprintf(fptr,"%d\n",i);
        }
    }
    
    fclose(fptr);

     return 0;
}
#include<stdio.h>

int countodd(int arr[],int n);

int main(){

    int arr[]={4,5,7,8,19,21,22};
   
  printf("the odd number is ");
  countodd(arr,7);
  printf("\n");
  
    return 0;
}

int countodd(int arr[],int n){

    int count=0;
    for(int i=0;i<n;i++){

        if(arr[i]%2!=0){
            printf("%d\t",arr[i]);
            
            count++;
        }
        
    }
    return count;
}
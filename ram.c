#include<stdio.h>

int countodd(int arr[], int n);

int main(){

    int arr[]={1,2,3,4,5};

   printf("Odd numbers: ");
   countodd(arr,5);
   printf("\n");
   printf("Count of odd numbers: %d", 3);
    

    return 0;

}
int countodd(int arr[], int n){

    int count=0;
    for(int i=0;i<n;i++){

        if(arr[i]%2 !=0){
            printf("%d\t\t",arr[i]);
            count++;

        }
    
    }
    return count;
}
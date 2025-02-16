#include<stdio.h>

void reverse(int arr[],int n);
void printArr(int arr[],int n);

int main(){
    int arr[]={1,2,3,4};

    reverse(arr,4);
    printArr(arr,4);

    return 0;

}

void printArr(int arr[],int n){
    
    for(int j=0;j<4;j++){
        printf("%d\t",arr[j]);
    }
}

void reverse(int arr[],int n){

    for(int i=0;i<n/2;i++){
        int first_value=arr[i];
        int second_value=arr[n-i-1];

        arr[i]=second_value;
        arr[n-i-1]=first_value;
    }

}
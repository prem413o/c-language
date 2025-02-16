#include<stdio.h>

int reverse(int arr[],int n);
int print(int arr[],int n);

int main(){
    int arr[]={7,4,1,3};
    reverse(arr,4);
    print(arr,4);

    return 0;


}
int print(int arr[],int n){
    for(int j=0;j<n;j++){
        printf("%d\t",arr[j]);
    }
}

int reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){

        int first_value=arr[i];
        int second_value=arr[n-i-1];
        arr[i]=second_value;
        arr[n-i-1]=first_value;

    }


}
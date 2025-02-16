#include<stdio.h>
#include<string.h>

int countvowel(char vowel[],int n);

int main(){
    char vowel="Premkumar";
    int count=vowel;
    countvowel(vowel,9);

    return 0;

}

int countvowel(char vowel[],int n){
    int count=0;

    for(int i=0;i<=n;i++){
        strlen(vowel);
        count++;
    }
    return count;
}

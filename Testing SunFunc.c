#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
Calculate(int y);
int main(){
    int x;
    int result;
    printf("Input Your number : ");
    scanf("%d",&x);
    result = Calculate(x);
}
void Calculate(int y){
    int x;
    if(x %2 ==0){
        printf("true");
    }
    else{
        printf("flase");
    }
}
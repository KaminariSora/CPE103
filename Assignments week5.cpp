#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (){
    int num[6] , keb,loob,H1,tan =1,count = 1 ;
    int expersion ;
    system("cls");
    do{
      printf("input number%d = ",tan);
      scanf("%d",&num[tan]);
      tan = tan +1 ;
    }while(tan<=5);//do while input num
    tan =1 ;
    while(!(num[1]>num[2]>num[3]>num[4]>num[5])){
    for(loob = 0 ; loob <=4 ;++loob ){
      H1 = loob+1;
    if(num[loob]< num[H1]){
      keb = num[loob];
      num[loob] = num[H1];
      num[H1] = keb;
      loob = loob +1 ;
    } // end of if 2
    } //end of for
    loob = 0;
    } //end of while 1
    while(tan <=5){
      printf("\n%d\n",num[tan]);
      tan = tan +1;
    }
}
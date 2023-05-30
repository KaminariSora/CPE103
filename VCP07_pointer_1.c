#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int u=3,v,*pu,*pv ;
    pu=&u ;
    v=*pu ;
    pv=&v ;
    printf("Values u is %d \t\tValues v is %d\n",u,v);
    printf("Address u is %X \tAddress v is %X\n",&u,&v);
    printf("Values pu is %X \tValues pv is %X\n",pu,pv);
    printf("Show *pu is %d \t\tShow 8pv is %d\n",*pu,*pv);
    system("pause");
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int SubFP( int *vpt1 , int *vpt2) ;
int 
main()
{
    int riv , ivar1 = 7 , ivar2 = 3 ;
    riv = SubFP(&ivar1,&ivar2);
    printf("\n value of rfv = %d",riv);
    system("pause");
}
int SubFP(int *vpt1 , int *vpt2)
{
    int sir ;
    sir = (*vpt1) * (*vpt2) ;
    return(sir) ;
}
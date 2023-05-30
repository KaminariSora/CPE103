#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char SubCh_1(void) ;
char SubCh_2(void) ;
int main()
{
    char sr , ch ;
    printf("\n Enter Character (1 or 2) :") ;
    ch = getche();
    if (ch =='1')
    {
        sr =SubCh_1();
        printf("\n Are you (%c)appy ?",sr) ;
    }
    else if(ch == '2')
    {
        sr = SubCh_2();
        printf("\n Are you (%c)ored ?",sr) ;
    }
    system("pause");
}
    char SubCh_1(void)
    {
        char st = 'h' ;
        return(st);
    }
    char SubCh_2(void)
    {
        char k = 'b' ;
        return (k);
    }
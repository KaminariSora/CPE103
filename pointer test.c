#include<stdio.h>
int main(){
    /*int number = 500, *add;
    add = &number;
    printf("number = %d\n",number);
    printf("address number = %x\n",&number);
    printf("*np = %d\n",*add);
    printf("address *np = %x\n",add);
    printf("address add = %x\n",&add);
    return 0;*/
    int i,x[5]={3,4,5,6,7};
    for(i=0;i<=4;++i)
    {
        printf("i = %d // x[i](x[%d])= %d // *(x+i) =%d // &x[i](x[%d]) = %x //\n ",i,i,x[i],*(x+i),i,&x[i]);
        //printf("(x+i) = %d\n",(x+i));
    }
}
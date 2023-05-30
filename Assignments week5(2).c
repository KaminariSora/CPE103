#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int in,out ;
    char ps[10],nps[10],nm[10],nnm[10] ;
    while(out==0)
    {
        printf("Hello welcome to testing ID system");
        printf("\nPlease choose your path");
        printf("\n1.Log in");
        printf("\n2.Set new ID&Password");
        printf("\nYour answer :");
        scanf("%d",&in);
        if(in==2)
        {
            printf("Set new ID :");
            scanf("%s",&nm);
            printf("New password :");
            scanf("%s",ps);
            printf("ID&Password changed complete\n");
        }
        else if(in==1)
        {
            printf("Login ID :");
            scanf("%s",&nnm);
            printf("Password :");
            scanf("%s",&nps);
            if(strcmp(ps,nps),(nm,nnm)==0)
            {
                printf("Login Complete");
            }
            out++ ;
        }
    }
}
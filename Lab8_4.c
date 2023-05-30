#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    FILE *fpt ;
    char msg[] = "This is Message to test write string block to file." ;
    if((fpt = fopen("FILE_2.txt","w")) == NULL)
    {
        printf("Cannot open output file \n");
        exit(1);
    }
    fwrite(msg,strlen(msg)+1,1,fpt); //write some data to the file 
    printf("\n Open/Create into block file ready \n");
    fclose(fpt);
    system("pause");
}
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    /*char c[1000],c1[1000],c2[1000],c3[1000];
    //strcpy(c1,"atiqonfire\n");
    //strcpy(c2,"123onfire\n");
    scanf("%s",c1);
    strcat(c1,"\n");
    scanf("%s",c2);
    FILE *fptr;
    fptr=fopen("program.txt","w");
    fputs(c1,fptr);
    fputs(c2,fptr);
    fclose(fptr);
    if ((fptr = fopen("program.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }
    // reads text until newline
    do
    {


    fgets(c,100, fptr);


    printf("Data from the file:\n%s", c);
    }while(!feof(fptr));
    fclose(fptr);*/
    int num;
    FILE *log;
    log=fopen("integer.txt","a");
    putw(10,log);
    putw(100,log);
    fclose(log);
    log=fopen("integer.txt","r");
    while((num=getw(log))!=EOF)
    {
        printf("%d\n",num);
    }

    return 0;
}

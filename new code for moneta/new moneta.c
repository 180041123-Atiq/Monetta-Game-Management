#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"monettagame.h"
//#include"stopwatch3.h"
#include<dos.h>
//#include<time.h>
#include<windows.h>

struct admlogin{
char fname[100];
char lname[100];
char username[20];
char password[20];
};

struct login{
//char fname[100];
//char lname[100];
char username[20];
char password[20];
//int time_moneta;
int count_moneta;
};

signin()
{
    FILE *log;
    log = fopen("login12.txt","w");
    struct admlogin l;
    printf("Enter the first name: ");
    scanf("%s",l.fname);
    printf("Enter last name :");
    scanf("%s",l.lname);
    printf("Enter user name :");
    scanf("%s",l.username);
    printf("Enter Password: ");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
printf("\n Now login with User ID and Password");
printf("\n Press any key to continue....");
getch();
system("CLS");
login();


}

void login()
{
int choice;
    char username[20],password[20];
    FILE *log;
    log=fopen("login12.txt","r");
    struct admlogin l;
    printf("USER ID : ");
    scanf("%s",&username);
    printf("PASSWORD :");
    scanf("%s",&password);
    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            printf("\nlogin successful");
            printf("\nEnter the choice:\n");
       printf("\n1.Input player \n");
       printf("\n2.change Password \n");
       printf("\n press any key to exit");
       printf("\nEnter your choice :");
       scanf("%d",&choice);
       if(choice==1)
       {
         player_signin();
       }
       else if(choice==2)
       {
           signin();
       }
       else {exit(1);}
        }
        else {
            printf("Please enter the correct name and password");

        }
    }
    fclose(log);


}

void player_signin()
{
    int x;
    char c[100];
    FILE *log,*log1,*log2;
    log=fopen("playid.txt","a");
    log1=fopen("playpwd.txt","a");
    log2=fopen("counting.txt","a");

    struct login l;
    printf("How many players do you want to input?\n");
    scanf("%d",&x);
    printf("Give the user ids and passwords and amount of moneta respectively,without space.\n");
    for(int i=0;i<x;i++)
    {
        printf("Give user ID:\n");
        scanf("%s",l.username);
        strcat(l.username,"\n");
        fputs(l.username,log);
        printf("Give passwords:\n");
        scanf("%s",l.password);
        strcat(l.password,"\n");
        fputs(l.password,log1);
        printf("Give the amount of moneta:\n");
        scanf("%d",l.count_moneta);
        putw(l.count_moneta,log2);
        system("cls");
    }
    player_login();
}

player_login()
{
    int f=0,c=0,d,num,e=0;
    char ch[1000];
    struct login l;
    FILE *log,*log1,*log2;
    log=fopen("playid.txt","r");
    log1=fopen("playpwd.txt","r");
    log2=fopen("counting.txt","r");
    printf("NOW LOGIN ONE PLAYER AT A TIME\n");
    while(1)
    {
        printf("Give user id:\n");
    scanf("%s",ch);
    do
    {
        fgets(l.username,10,log);
        if(!feof(log))
        {
           if(strcmp(l.username,ch)==0)f=1;
        }
    }while(!feof(log));
    if(f==1)break;
    else printf("WRONG USER ID.PLEASE TRY AGAIN.\n");
}
while(1)
{
    printf("Give password:\n");
    scanf("%s",ch);
    do
    {
        c++;
        fgets(l.password,10,log1);
        if(!feof(log1))
        {
            if(strcmp(l.password,ch)==0){f=1;d=c;}
        }
    }while(!feof(log1));
    if(f==1)break;
    else printf("WRONG PASSWORD.PLEASE TRY AGAIN.\n");
}
while(!feof(log2))
{

    if(d==e){num=getw(log);}
    e++;
}

}

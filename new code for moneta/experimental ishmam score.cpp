#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *log=fopen("score1.txt","r");
    char ch[100],ch1[100];
    int x;
    while(!feof(log))
    {
        fgets(ch,80,log);
        fgets(ch1,80,log);
        printf("%s %s\n",ch,ch1);
    }
    fclose(log);
}

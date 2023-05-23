#include<graphics.h>
#include<dos.h>

int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"");
    //system("color 1A");
    settextstyle(9,HORIZ_DIR,8);
    outtextxy(50,50,"MONETA");

getch();
    closegraph();
    initgraph(&gd,&gm,"");
    //system("color 1A");
    settextstyle(9,HORIZ_DIR,8);
    outtextxy(50,50,"press a key to continue");

getch();
    closegraph();

    return 0;
}

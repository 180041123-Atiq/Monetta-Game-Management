#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>

	boy(int x,int y)
	{

/////        x=200,y=100

 /*	circle(185,95,7);         //eyes
	circle(215,95,7);

	arc(200,100,210,330,20);	//mouth
	line(200,100,200,116);         //nose
					*/
	line(x,y+58,x+50,y+58);		//gun
	outtextxy(x+30,y+45,"Gun Point");

	circle(x-15,y-5,7);
	circle(x+15,y-5,7);
	arc(x,y,210,330,20);
	line(x,y,x,y+16);

	setlinestyle(0,10,3);
	circle(x,y,30);
	line(x,y+30,x,y+130);

	line(x,y+60,x+30,y+30);
	line(x,y+60,x-30,y+30);

	line(x,y+130,x-30,y+160);
	line(x,y+130,x+30,y+160);

		     //200,100

	  rectangle(620,10,630,130);
	  rectangle(620,170,630,290);
	  rectangle(620,330,630,450);

	  rectangle(580,70,590,210);
	  rectangle(580,250,590,390);


	  outtextxy(530,30,"Target 1");
	  outtextxy(500,130,"Target 2");
	  outtextxy(530,230,"Target 3");
	  outtextxy(500,340,"Target 4");
	  outtextxy(530,410,"Target 5");


	}



	boy1(int x,int y)
	{

	circle(x-15,y-5,7);
	circle(x+15,y-5,7);
	arc(x,y,210,330,20);
	line(x,y,x,y+16);

	line(x,y+58,x+50,y+58);		//gun
	outtextxy(x+30,y+45,"Gun Point");



   /*	circle(185,95,7);         //eyes
	circle(215,95,7);

	arc(200,100,210,330,20);	//mouth
	line(200,100,200,116);         //nose

					*/

	circle(x,y,30);
	line(x,y+30,x,y+130);

	line(x,y+60,x+30,y+90);
	line(x,y+60,x-30,y+90);

	line(x,y+130,x-30,y+160);
	line(x,y+130,x+30,y+160);

	rectangle(620,10,630,130);
	  rectangle(620,170,630,290);
	  rectangle(620,330,630,450);

	  rectangle(580,70,590,210);
	  rectangle(580,250,590,390);



	  outtextxy(530,30,"Target 1");
	  outtextxy(500,130,"Target 2");
	  outtextxy(530,230,"Target 3");
	  outtextxy(500,340,"Target 4");
	  outtextxy(530,410,"Target 5");




	}




	main()
	{


	  int d;
	  int a,b;
	  char ch;
	  system("cls");
	  int gdriver=DETECT,gmode;
	  initgraph(&gdriver,&gmode,"\tc\bgi");
	  setlinestyle(0,10,3);


	  outtextxy(530,30,"Target 1");
	  outtextxy(500,130,"Target 2");
	  outtextxy(530,230,"Target 3");
	  outtextxy(500,340,"Target 4");
	  outtextxy(530,410,"Target 5");


	line(200,158,250,158);		//gun

	outtextxy(230,145,"Gun Point");







	circle(185,95,7);         //eyes
	circle(215,95,7);

	arc(200,100,210,330,20);	//mouth
	line(200,100,200,116);         //nose




	  circle(200,100,30);
	  line(200,130,200,230);

	  line(200,160,230,130);
	  line(200,160,170,130);

	  line(200,230,170,260);
	  line(200,230,230,260);




	  a=200,b=100;


	  rectangle(620,10,630,130);
	  rectangle(620,170,630,290);
	  rectangle(620,330,630,450);

	  rectangle(580,70,590,210);
	  rectangle(580,250,590,390);




	  while(1)
	  {
	    ch=getch();
	    int d=ch;
 //	    rectangle(620,100,630,200);

	       if(d==77)
	       {
	       cleardevice();
	       a=a+20;
	       boy1(a,b);

	       delay(200);
	       cleardevice();

	       boy(a,b);
	       }

	       if(d==75)
	       {
	       cleardevice();
	       a=a-20;
	       boy1(a,b);

	       delay(200);
	       cleardevice();

	       boy(a,b);
	       }

	       if(d==72)
	       {
	       cleardevice();
	       b=b-20;
	       boy1(a,b);

	       delay(200);
	       cleardevice();

	       boy(a,b);
	       }

	       if(d==80)
	       {
	       cleardevice();
	       b=b+20;
	       boy1(a,b);

	       delay(200);
	       cleardevice();

	       boy(a,b);
	       }


//////////////////////////////////////////////////////////////////
///shooting starts
//////////////////////////////////////////////////////////////////




	       if(d==32)
	       {


						//x=200  y=100
		int x=a;
		int y=b;
//		printf("%d %d",x,y);



//////////////////////////////////////////////////////////////////////////
		if((y>-50)&&(y<5))
		{
			for(int i=0;i<=27;i++)
			{
			rectangle(x,y+58,x+22,y+65 );
			x=x+15;
		    //	delay(0);
			sound(900);
			boy(a,b);
			nosound();
			}
		cleardevice();
		boy(a,b);
		sound(900);
		delay(200);
		sound(1600);
		delay(200);
		nosound();
		outtextxy(110,400,"Target 1 shooted  !!!!!");
     //		outtextxy(230,145,"Gun Point");
		boy(a,b);
		}
//////////////////////////////////////////////////////////////////////////
		if((y>5)&&(y<150))
		{
			for(int i=0;i<=24;i++)
			{
			rectangle(x,y+58,x+22,y+65 );
			x=x+15;
		  //	delay(10);
			sound(900);
			boy(a,b);
			nosound();
			}
		cleardevice();
		boy(a,b);
		sound(900);
		delay(200);
		sound(1600);
		delay(200);
		nosound();
     //		outtextxy(230,145,"Gun Point");
		 outtextxy(110,400,"Target 2 shooted  !!!!!");

		boy(a,b);
		}
//////////////////////////////////////////////////////////////////////////
		if((y>150)&&(y<190))
		{
			for(int i=0;i<=27;i++)
			{
			rectangle(x,y+58,x+22,y+65 );
			x=x+15;
		    //	delay(10);
			sound(900);
			boy(a,b);
			nosound();
			}

		cleardevice();
		boy(a,b);
		sound(900);
		delay(200);
		sound(1600);
		delay(200);
		nosound();
		outtextxy(110,400,"Target 3 shooted  !!!!!");
       //		outtextxy(230,145,"Gun Point");
		boy(a,b);
		}
/////////////////////////////////////////////////////////////////////////
		if((y>190)&&(y<310))
		{
		       for(int i=0;i<=24;i++)
			{
			rectangle(x,y+58,x+22,y+65 );
			x=x+15;
		  //	delay(10);
			sound(900);
			boy(a,b);
			nosound();
			}
		cleardevice();
		boy(a,b);
		sound(900);
		delay(200);
		sound(1600);
		delay(200);
		nosound();
		outtextxy(110,150,"Target 4 shooted  !!!!!");
	 //	outtextxy(230,145,"Gun Point");
		boy(a,b);
		}
//////////////////////////////////////////////////////////////////////////
/
		if((y>310)&&(y<390))
		{
			for(int i=0;i<=27;i++)
			{
			rectangle(x,y+58,x+22,y+65 );
			x=x+15;
		  //	delay(10);
			sound(900);
			boy(a,b);
			nosound();
			}
		cleardevice();
		boy(a,b);
		sound(900);
		delay(200);
		sound(1600);
		delay(200);
		nosound();
		outtextxy(110,200,"Target 5 shooted  !!!!!");
	   //	outtextxy(230,145,"Gun Point");
		boy(a,b);
		}
///////////////////////////////////////////////////



	       }







	   if(d==27)
	   break;
	  }


	}




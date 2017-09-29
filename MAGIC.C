#include<conio.h>
#include<graphics.h>
#include"magic2.c"
//#include<rsl.c>
void main(void)
{

    int gd=DETECT,gm,k=50,i,g,l,z=0,r=0,p1=16,ret=0,sum=0;
    initgraph(&gd,&gm,"..\\bgi");
  //  setbkcolor(WHITE);

    setfillstyle(SOLID_FILL,WHITE);
    circle(30+170+20,12,2);
    floodfill(30,170,WHITE);

     setcolor(BLACK);
     circle(30+170+30+20,12,2);

     setfillstyle(SOLID_FILL,WHITE);
    circle(30+170+20,12,2);
    floodfill(30,170,WHITE);

    setcolor(BLACK);
     circle(30+170+30+30+20,12,2);

    setcolor(BLACK);
     circle(30+170+30+60+20,12,2);

    setcolor(BLACK);
     circle(30+170+30+60+30+20,12,2);

    setcolor(BLACK);
     circle(30+170+30+60+30+20+30,12,2);


    setcolor(BLUE);
    rectangle(190,440,270,470);
      rectangle(190+150,440,270+150,470);
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);

    circle(30+170,120-70,20);
    floodfill(32+170,121-70,BLUE);

   // setcolor(WHITE);
  //  settextstyle(1,0,2);
   // outtextxy(32,121,"1");
    setfillstyle(SOLID_FILL,BLUE);
    circle(30+70+170,120-70,20);
    floodfill(101+170,121-70,BLUE);
     setfillstyle(SOLID_FILL,BLUE);
    circle(101+70+170,120-70,20);
    floodfill(101+70+170,121-70,BLUE);
     setfillstyle(SOLID_FILL,BLUE);
     circle(101+70+70+170,120-70,20);
     floodfill(101+70+70+170,121-70,BLUE);
    for(i=1;i<8;i++)
    {
      setfillstyle(SOLID_FILL,BLUE);
    circle(30+170,120+k-70,20);
    floodfill(32+170,121+k-70,BLUE);

   // setcolor(WHITE);
  //  settextstyle(1,0,2);
   // outtextxy(32,121,"1");
    setfillstyle(SOLID_FILL,BLUE);
    circle(30+70+170,120+k-70,20);
    floodfill(101+170,121+k-70,BLUE);
     setfillstyle(SOLID_FILL,BLUE);
    circle(101+70+170,120+k-70,20);
    floodfill(101+70+170,121+k-70,BLUE);
     setfillstyle(SOLID_FILL,BLUE);
     circle(101+70+70+170,120+k-70,20);
     floodfill(101+70+70+170,121+k-70,BLUE);
    k=k+50;

   }
    setcolor(WHITE);
    outtextxy(101+70+70-7+170,100,"23");
    outtextxy(241+170-70-7,100,"22");
     outtextxy(241+170-70-70-7,100,"21");
     outtextxy(241+170-70-70-70-7,100,"20");
     outtextxy(241+170-70-7,100-50,"18");
      outtextxy(241+170-70-70-7,100-50,"17");
      outtextxy(241+170-70-70-7-70,100-50,"16");
     outtextxy(101+70+70-7+170,100-50,"19");
     outtextxy(101+70+70-7+170,100+50,"27");
      outtextxy(241+170-70-7,100+50,"26");
      outtextxy(241+170-70-7-70,100+50,"25");
      outtextxy(241+170-70-7-70-70,100+50,"24");
      outtextxy(241+170-70-7-70-70,100+50+50,"28");
      outtextxy(241+170-70-7-70,100+50+50,"29");
       outtextxy(241+170-70-7-70+70,100+50+50,"30");
	outtextxy(241+170-70-7-70+70+70,100+50+50,"31");
       outtextxy(241+170-70-7-70+70+70,100+50+50+50,"51");
       outtextxy(241+170-70-7-70+70+70-70,100+50+50+50,"50");
       outtextxy(241+170-70-7-70+70-70,100+50+50+50,"49");
       outtextxy(241+170-70-7-70+70-70-70,100+50+50+50,"48");
       outtextxy(241+170-70-7-70+70+70,100+50+50+50+50,"55");
       outtextxy(241+170-70-7-70+70+70-70,100+50+50+50+50,"54");
       outtextxy(241+170-70-7-70+70+70-70-70,100+50+50+50+50,"53");
       outtextxy(241+170-70-7-70+70+70-70-70-70,100+50+50+50+50,"52");
       outtextxy(241+170-70-7-70+70+70-70-70-70,100+50+50+50+50+50,"56");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70,100+50+50+50+50+50,"57");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70+70,100+50+50+50+50+50,"58");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70+70+70,100+50+50+50+50+50,"59");
       outtextxy(241+170-70-7-70+70+70-70-70-70,100+50+50+50+50+50+50,"60");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70,100+50+50+50+50+50+50,"*");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70+70,100+50+50+50+50+50+50,"*");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70+70+70,100+50+50+50+50+50+50,"*");

      setcolor(BLACK);
      settextstyle(8,0,3);
      outtextxy(207,440,"YES");
      settextstyle(1,0,1);
    outtextxy(365,445,"NO");


     while(1)
     {
	 g=getch();
	// printf("%d",g);
	 switch(g)
	 {
	   case 00:
	   {
	       l=getch();
	       switch(l)
	       {
		 case 77:
		 {
		    setcolor(BLUE);
		    rectangle(190,440,270,470);
		    setcolor(RED);
		    rectangle(190+150,440,270+150,470);
		    z=1;
		   r=0;
		 break;
		 }
		 case 75:
		 {
		    setcolor(RED);
		    rectangle(190,440,270,470);
		    setcolor(BLUE);
		    rectangle(190+150,440,270+150,470);
		   z=1;
		   r=1;
		   break;
		 }

	      }
	      break;
	 }
	 case 27:exit(0);break;
	 case 13:
	 {
	 clrscr();
	 if(z==1&&r==1)
	 {
	 // sum=sum+p1;
	  page2(p1);break;
	 }
	  else
	 {
	    // result(sum);
	    page2(0);break;
	 }
      }
  }
}

getch();
}

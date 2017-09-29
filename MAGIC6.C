#include<conio.h>
#include<graphics.h>
#include"rsl.c"
void page6(int e)
{
    int gd=DETECT,gm,k=50,i,g,l,z=0,r=0,p6=4;
    initgraph(&gd,&gm,"..\\bgi");
  //  setbkcolor(WHITE);

    setfillstyle(SOLID_FILL,WHITE);
    circle(30+170+20+30+30+30+30+30,12,2);
    floodfill(30,170,WHITE);

     setcolor(BLACK);
     circle(30+170+20,12,2);

     setfillstyle(SOLID_FILL,WHITE);
    circle(30+170+20+30+30+30+30+30,12,2);
    floodfill(30,170,WHITE);

    setcolor(BLACK);
     circle(30+170+30+30+20,12,2);

    setcolor(BLACK);
     circle(30+170+30+60+20,12,2);

    setcolor(BLACK);
     circle(30+170+30+60+30+20,12,2);

    setcolor(BLACK);
     circle(30+170+60+30+20+30,12,2);

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
    outtextxy(101+70+70-7+170,100,"15");
    outtextxy(241+170-70-7,100,"14");
     outtextxy(241+170-70-70-7,100,"13");
     outtextxy(241+170-70-70-70-7,100,"12");
     outtextxy(241+170-70-7,100-50,"6");
      outtextxy(241+170-70-70-7,100-50,"5");
      outtextxy(241+170-70-70-7-70,100-50,"4");
     outtextxy(101+70+70-7+170,100-50,"7");
     outtextxy(101+70+70-7+170,100+50,"23");
      outtextxy(241+170-70-7,100+50,"22");
      outtextxy(241+170-70-7-70,100+50,"21");
      outtextxy(241+170-70-7-70-70,100+50,"20");
      outtextxy(241+170-70-7-70-70,100+50+50,"28");
      outtextxy(241+170-70-7-70,100+50+50,"29");
       outtextxy(241+170-70-7-70+70,100+50+50,"30");
	outtextxy(241+170-70-7-70+70+70,100+50+50,"31");
       outtextxy(241+170-70-7-70+70+70,100+50+50+50,"39");
       outtextxy(241+170-70-7-70+70+70-70,100+50+50+50,"38");
       outtextxy(241+170-70-7-70+70-70,100+50+50+50,"37");
       outtextxy(241+170-70-7-70+70-70-70,100+50+50+50,"36");
       outtextxy(241+170-70-7-70+70+70,100+50+50+50+50,"47");
       outtextxy(241+170-70-7-70+70+70-70,100+50+50+50+50,"46");
       outtextxy(241+170-70-7-70+70+70-70-70,100+50+50+50+50,"45");
       outtextxy(241+170-70-7-70+70+70-70-70-70,100+50+50+50+50,"44");
       outtextxy(241+170-70-7-70+70+70-70-70-70,100+50+50+50+50+50,"52");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70,100+50+50+50+50+50,"53");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70+70,100+50+50+50+50+50,"54");
       outtextxy(241+170-70-7-70+70+70-70-70-70+70+70+70,100+50+50+50+50+50,"55");
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
	 if(z==1&&r==1)
	 {
	 // e=e+p6;
	  result(e+p6);break;
	 }

	  else
	 {
	    e=e+0;
	    result(e);break;
	 }
    }
	     }
  }
}
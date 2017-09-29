#include<graphics.h>
#include"as.c"
//void main()

void result(int h)
{
//int h=23;
char q[100],ch;
int t,i=0;
int rev=0;
clrscr();
//char ch=h-'0';
//char m[3];
//int h=5;
closegraph();

while(h>0)
{
   t=h%10;
   rev=rev*10+t;
   h=h/10;
}
//print("%d",rev);

while(rev>0)
{
   t=rev%10;
  // ch=t-'0';
   if(t==1)
   {
     q[i]= '1';
    }
    if(t==2)
   {
     q[i]= '2';
    }
    if(t==3)
   {
     q[i]= '3';
    }
    if(t==4)
   {
     q[i]= '4';
    }
    if(t==5)
   {
     q[i]= '5';
    }
     if(t==6)
   {
     q[i]= '6';
    }
    if(t==7)
   {
     q[i]= '7';
    }
    if(t==8)
   {
     q[i]= '8';
    }
    if(t==9)
   {
     q[i]= '9';
    }

   // printf("%c\n",2);
   i++;
   rev=rev/10;
}
     q[i]='\0';
    // printf("%s",q);
    // getch();
     display(q);

  }
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<process.h>

#define KeyUp 72
#define KeyDown 80
#define KeyRight 77
#define KeyLeft 75
#define KeyEsc 27

 void playarea(){
  line(50,50,600,50);
  line(50,50,50,450);
  line(50,450,600,450);
  line(600,450,600,50);
  line(70,70,120,70);
  line(120,70,120,75);
  line(120,75,70,75);
  line(70,75,70,70);
  line(380,275,280,275);
  line(380,275,380,225);
  line(280,275,280,225);
  line(280,225,310,225);
  line(380,225,350,225);
  line(380,275,280,275);
  line(380,275,380,225);
  line(280,275,280,225);
  line(280,225,310,225);
  line(380,225,350,225);
 }

void main(){
  int gm=DETECT,gr;
  initgraph(&gm,&gr,"c:\\turboc3\\bgi" );
  playarea();
  getch();
  closegraph();
}
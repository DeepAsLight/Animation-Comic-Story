#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int x1=170,m,ggd=DETECT,ggm;
initgraph(&ggd,&ggm,"..\\bgi");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(170,180,"LOADING,PLEASE WAIT...");
for(m=0;m<300;++m)
{
delay(30);
line(x1,200,x1,220);
x1++;
}
int j,k,t,q,x,y;
int i0,j0,x0,y0,xasp,yasp,ang;
int gd = DETECT, gm,i;
initgraph(&gd, &gm, "..\\bgi");

//flag begin
cleardevice();
setbkcolor(BLACK);
line(100,50,100,400);
line(108,50,108,400);
arc(104,50,0,180,3);
line(100,400,108,400);
floodfill(104,55,15);
for(i0=0;i0<2;i0++)
{
line(104,53-i0,160,53-i0);
line(160+i0,53,160+i0,65);
line(160,65+i0,120,53+i0);
}
ellipse(160,69,0,360,2,4);
line(160,72,160,400);
setfillstyle(1,4);
fillellipse(180,385,21,10);
x0=180;
y0=385;
getch();
setcolor(0);
fillellipse(180,385,21,10);
for(i0=1;i0<300;i0++)
{
setcolor(15);
setfillstyle(1,4);
line(160,72,160,400);
fillellipse(x0,y0-i0,21,10);
delay(20);
setcolor(0);
setfillstyle(1,0);
line(160,72,160,400);
fillellipse(x0,y0-i0,21,10);
}
setcolor(15);
setfillstyle(1,4);
line(160,72,160,400);
fillellipse(x0,y0-i0,21,10);
getch();
setfillstyle(1,0);
setcolor(0);
fillellipse(x0,y0-i0,32,10);
setcolor(15);
line(160,72,160,400);
delay(10);
getaspectratio(&xasp,&yasp);
setaspectratio(xasp/6,yasp);
arc(210,75,180,10,50);
arc(210,105,180,10,50);
arc(210,135,180,10,50);
arc(210,165,180,10,50);
line(260,75,260,165);
setfillstyle(1,15);
floodfill(212,126,15);
setfillstyle(1,RED);
floodfill(212,95,15);
setfillstyle(1,GREEN);
floodfill(212,156,15);
setcolor(RED);
arc(210,75,180,10,50);
arc(210,105,180,10,50);
line(260,75,260,105);
line(160,75,160,105);
setcolor(GREEN);
arc(210,135,180,10,50);
arc(210,165,180,10,50);
line(260,135,260,165);
line(160,135,160,165);
setcolor(BLUE);
setaspectratio(xasp,yasp);
for(i0=0;i0<2;i0++)
{
circle(210,128,10+i0);
}
x0=210;
y0=118;
for(i0=0;i0<380;i0=i0+10)
{
ang=(i0*10)%360;
x0=210+((float)10*cos((float)ang*(3.14/180)));
y0=128+((float)10*sin((float)ang*(3.14/180)));
line(210,128,x0,y0);
}
getch();
cleardevice();
//flag end
//------------------------------//introduction//-------------------------/
delay(1000);
setbkcolor(RED);
delay(1000);
setbkcolor(GREEN);
line(0,249,638,249);
line(0,340,638,340);
delay(1000);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(1,250,"COMPUTER GRAPHICS");
delay(2000);
cleardevice();
setbkcolor(YELLOW);
line(0,249,637,249);
line(0,340,637,340);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(200,250,"MINIONS");
delay(2000);
//--------------------------------end------------------------------------//
//--------------------------------story----------------------------------//
cleardevice();
setbkcolor(BROWN);
setcolor(CYAN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(250,20,"Minions");
line(248,64,380,64);
line(248,67,380,67);
delay(500);
setcolor(YELLOW);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(110,80,"This is a comic story of three minions");
delay(2000);
setcolor(LIGHTGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(60,130,"Scene 1");
delay(500);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(60,150,"Two minions are sharing knowledge.");
delay(2000);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(60,200,"Scene 2");
delay(500);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(60,220,"The Boss minion is happy with minions");
delay(2000);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(60,270,"Scene 3");
delay(500);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(60,290,"Minions celebrating together.");
delay(4000);
//-----------------------------------
setcolor(2);
rectangle(0,0,getmaxx(),getmaxy());
cleardevice();
setcolor(2);
i=0;
for(t=0;t<getmaxx();t+=120)
{
line(t,250,t+60,170);
line(t+60,170,t+120,250);
}
line(0,400,getmaxx(),350);
setfillstyle(11,CYAN);
floodfill(2,420,2);
setfillstyle(4,LIGHTGREEN);
floodfill(1,300,2);
i=0;
while(i!=150)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(k,j,30,30);
setfillstyle(SOLID_FILL,LIGHTRED);
fillellipse(170+i,235-i,30,30);
j=235-i;
k=170+i;
i++;
setcolor(2);
for(t=0;t<getmaxx();t+=120)
{
line(t,250,t+60,170);
line(t+60,170,t+120,250);
}
setfillstyle(1,GREEN);
floodfill(202,200,GREEN);
delay(25);
}
for(i=36;i<80;i++)
for(j=0;j<=360;j+=20)
{
x=319+i*cos(((float)j*3.14)/180);
y=86+i*sin(((float)j*3.14)/180);
putpixel(x,y,LIGHTRED);
delay(1);
}
delay(2000);
//----------------------------------------
//---------------------------//CLOUDS-1//---------------------------------//
cleardevice();
setbkcolor(LIGHTBLUE);
setcolor(DARKGRAY);                  //grass
setfillstyle(SOLID_FILL,GREEN);
line(1,400,1,478);
line(1,478,638,478);
line(1,400,20,450);
line(20,450,40,380);
line(40,380,80,460);
line(80,460,100,400);
line(100,400,140,450);
line(140,450,160,390);
line(160,390,200,455);
line(200,455,250,400);
line(250,400,270,460);
line(270,460,310,400);
line(310,400,370,450);
line(370,450,410,390);
line(410,390,450,460);
line(450,460,500,400);
line(500,400,520,460);
line(520,460,590,400);
line(590,400,600,455);
line(600,455,638,400);
line(638,400,638,478);
floodfill(2,477,DARKGRAY);
setcolor(DARKGRAY);                   //circle;
setfillstyle(SOLID_FILL,YELLOW);
circle(590,40,40);
floodfill(590,40,DARKGRAY);
setcolor(DARKGRAY);                   //cloud 1
setfillstyle(SOLID_FILL,WHITE);
arc(60,90,40,175,50);
arc(128,80,30,140,40);
arc(175,80,5,140,25);
arc(65,75,190,320,55);
arc(145,75,220,360,55);
floodfill(61,75,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(110,80,2,5);
floodfill(111,79,DARKGRAY);
fillellipse(150,80,2,5);
floodfill(151,79,DARKGRAY);
setcolor(DARKGRAY);                   //cloud 2
setfillstyle(SOLID_FILL,WHITE);
arc(400,100,40,175,50);
arc(468,90,30,140,40);
arc(515,90,5,140,25);
arc(405,85,190,320,55);
arc(485,85,220,360,55);
floodfill(401,85,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(400,80,2,5);
floodfill(401,79,DARKGRAY);
fillellipse(440,80,2 ,5);
floodfill(441,79,DARKGRAY);
//---------------------------------//moving lips//----------------------//
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);               //mouth  1
floodfill(421,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
for(i=0;i<20;i++)
{
setfillstyle(SOLID_FILL,LIGHTBLUE);     //birds
bar(98+i,147,113+i,179);
arc(100+i,157,270,50,10);
arc(100+i,170,290,50,5);
delay(50);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(78+i,147,93+i,179);
arc(80+i,157,270,50,10);
arc(80+i,170,290,50,5);
delay(50);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(58+i,147,73+i,179);
arc(60+i,157,270,50,10);
arc(60+i,170,290,50,5);
delay(50);
}
//---------------------------------//moving lips//----------------------//
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(15,200,"Hey Dave....");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(10,200,270,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	              //mouth  1
floodfill(421,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(365,200,"Ya Stuart.....");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(330,200,600,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(15,200,"How are you ?");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(10,200,270,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	              //mouth  1
floodfill(421,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);                    //mouth 2
floodfill(421,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(365,200,"I am fine.");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(330,200,600,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(15,200,"Who are they?");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(10,200,270,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	              //mouth  1
floodfill(421,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(365,200,"MINIONS are here!");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(330,200,628,300);
//---------------------------//MINI-1//---------------------------------//
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(1,220,640,479);
//body mini
setfillstyle(SOLID_FILL,YELLOW);
arc(100,300,0,180,31);
line(69,300,69,365);
line(131,300,131,365);
arc(100,361,170,10,31);
floodfill(70,299,DARKGRAY);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(85,340,113,340);        // -
line(85,342,85,353);         // |
line(113,342,113,353);       // |
line(85,353,69,353);         // |
line(113,353,131,353);       // |
line(85,340,69,330);         // \
line(85,343,69,333);         // \
line(113,340,131,330);       // /
line(113,343,131,333);       // /
//pocket
line(92,348,104,348);
arc(98,349,180,359,7);
arc(69,353,280,359,10);
arc(130,353,180,269,10);
floodfill(86,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(85,298,69,298);
line(85,301,69,301);
arc(92,300,190,170,7);
floodfill(92,300,DARKGRAY);
line(115,298,131,298);
line(115,301,131,301);
arc(107,300,10,360,7);
floodfill(107,300,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(92,300,5);
floodfill(92,300,DARKGRAY);
circle(107,300,5);
floodfill(107,300,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(92,300,2);
floodfill(92,300,DARKGRAY);
circle(107,300,2);
floodfill(107,300,DARKGRAY);
//mouth
line(92,315,104,315);
arc(98,315,180,360,7);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(69,320,50,360);                 //left
line(69,330,57,360);
line(50,360,57,360);
floodfill(51,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(53,363,130,30,6);
floodfill(53,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(131,320,157,360);               //right
line(131,330,150,360);
line(157,360,150,360);
floodfill(152,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(153,363,130,30,5);
floodfill(153,363,DARKGRAY);
//leg  minion 1
setfillstyle(SOLID_FILL,BLUE);
rectangle(85,389,99,400);
floodfill(86,390,DARKGRAY);
rectangle(104,389,117,400);
floodfill(105,393,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,15);
fillellipse(88,403,10,5);
floodfill(88,403,DARKGRAY);
fillellipse(108,403,10,5);
floodfill(108,403,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(150,280,7,7);
floodfill(150,280,DARKGRAY);
delay(500);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
delay(500);
//mouth
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(92,315,104,315);
arc(98,315,180,360,7);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
}
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(165,235,"Hello");
outtextxy(165,250,"My name is Bob");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(200,360,"Bob has been newly emplyed.");
outtextxy(210,380,"He works smart");
delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,600,470);
//--------------------------------MINI-2--------------------------------//
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(1,220,640,479);
//minion 2
//body
setfillstyle(SOLID_FILL,YELLOW);
arc(500,280,0,180,31);
line(469,280,469,365);
line(531,280,531,365);
arc(500,361,170,10,31);
floodfill(501,361,DARKGRAY);
//mouth
line(492,315,504,315);
arc(498,315,180,360,7);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(485,340,513,340);         // -
line(485,342,485,353);         // |
line(513,342,513,353);         // |
line(485,353,469,353);         // |
line(513,353,531,353);         // |
line(485,340,469,330);         // \
line(485,343,469,333);         // \
line(513,340,531,330);         // /
line(513,343,531,333);         // /
//pocket
line(492,348,504,348);
arc(498,349,180,359,7);
arc(469,353,280,359,10);
arc(530,353,180,269,10);
floodfill(486,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(485,288,469,288);
line(485,291,469,291);
arc(492,290,190,170,7);
floodfill(492,290,DARKGRAY);
line(515,288,531,288);
line(515,291,531,291);
arc(507,290,10,360,7);
floodfill(507,290,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(492,290,5);
floodfill(492,290,DARKGRAY);
circle(507,290,5);
floodfill(507,290,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(492,290,2);
floodfill(492,290,DARKGRAY);
circle(507,290,2);
floodfill(507,290,DARKGRAY);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(469,315,450,360);              //left
line(469,325,457,360);
line(450,360,457,360);
floodfill(451,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(453,363,130,30,6);
floodfill(453,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(531,315,557,360);              //right
line(531,325,550,360);
line(550,360,557,360);
floodfill(555,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(553,363,133,33,6);
floodfill(553,363,DARKGRAY);
//legs
setfillstyle(SOLID_FILL,BLUE);
rectangle(485,389,499,400);
floodfill(486,399,DARKGRAY);
rectangle(504,389,517,400);
floodfill(505,399,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,WHITE);
fillellipse(488,403,10,5);
floodfill(488,403,DARKGRAY);
fillellipse(508,403,10,5);
floodfill(508,403,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(455,270,7,7);
floodfill(450,270,DARKGRAY);
delay(500);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
delay(500);
//minion 2 conver
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(490,315,506,315);
arc(498,315,180,360,7);
floodfill(495,315,DARKGRAY);
delay(500);
}
//mini 2 lang
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(365,235,"Hi");
outtextxy(365,245,"My name is");
outtextxy(365,255," Kevin.");
delay(2000);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(235,360,"He is old employee.");
outtextxy(235,380,"He is friend of Bob.");
delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,440,470);
//---------------------------//MINI-3//--------------------------------//
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(1,220,640,479);
setcolor(DARKGRAY);           //Bad Minion
setfillstyle(SOLID_FILL,MAGENTA);
line(460,280,445,270);     //1  Hair
line(445,270,460,270);     //2   ||
line(460,270,430,230);     //3   ||
line(430,230,470,255);     //4   ||
line(470,255,465,205);     //5   ||
line(465,205,485,250);     //6   ||
line(485,250,510,210);     //7   ||
line(510,210,515,250);     //8   ||
line(515,250,530,225);     //9   ||
line(530,225,525,260);     //10  ||
line(525,260,550,245);     //11  ||
line(550,245,530,275);     //12 Hair
line(530,275,520,380);     //13 Side
line(460,280,470,380);     //14 Side
line(468,360,522,360);     //15 Mouth
floodfill(471,359,DARKGRAY);
setfillstyle(SOLID_FILL,CYAN);
rectangle(479,290,462,295);
floodfill(463,291,DARKGRAY);
rectangle(528,290,510,295);
floodfill(511,291,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
line(480,330,510,330);     //20 Mouth
line(470,360,480,330);     //21 Mouth
line(520,360,510,330);     //22 Mouth
floodfill(490,345,DARKGRAY);
setfillstyle(SOLID_FILL,MAGENTA);
line(520,370,550,400);     //32 Hands
line(520,375,550,405);     //33  ||
line(550,398,550,408);     //34  ||
line(520,370,520,375);
floodfill(549,401,DARKGRAY);
line(470,370,440,400);     //35  ||
line(470,375,440,405);     //36  ||
line(440,398,440,408);     //37 Hands
line(470,370,470,375);
floodfill(441,402,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(550,404,270,90,5);
floodfill(551,404,DARKGRAY);
arc(440,404,90,270,5);
floodfill(439,404,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTRED);
line(480,330,485,337);     //38 Teeth
line(485,337,490,330);     //39  ||
line(490,330,495,337);     //40  ||
line(495,337,500,330);     //41  ||
line(500,330,505,337);     //42  ||
line(505,337,510,330);     //43  ||
line(470,360,475,353);     //44  ||
line(475,353,480,360);     //45  ||
line(480,360,485,353);     //46  ||
line(485,353,490,360);     //47  ||
line(490,360,495,353);     //48  ||
line(495,353,500,360);     //49  ||
line(500,360,505,353);     //50  ||
line(505,353,510,360);     //51  ||
line(510,360,515,353);     //52  ||
line(515,353,520,360);     //53 Teeth
floodfill(480,359,DARKGRAY);
//legs
setfillstyle(SOLID_FILL,BLUE);
rectangle(486,404,493,415);
floodfill(487,405,DARKGRAY);
rectangle(500,404,507,415);
floodfill(501,405,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,WHITE);
fillellipse(487,418,9,5);
floodfill(487,418,DARKGRAY);
fillellipse(502,418,9,5);
floodfill(503,418,DARKGRAY);
setfillstyle(SOLID_FILL,MAGENTA);
arc(495,380,180,360,25);   // Body
floodfill(495,380,DARKGRAY);
setfillstyle(SOLID_FILL,BLUE);
line(470,360,480,370);     //23 Dress
line(520,360,510,370);     //24  ||
line(480,370,510,370);     //25  ||
line(470,370,480,380);     //26  ||
line(480,380,480,390);     //27  ||
line(480,390,475,395);     //28  ||
line(520,370,510,380);     //29  ||
line(510,380,510,390);     //30  ||
line(510,390,515,395);     //31 Dress
floodfill(475,374,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
circle(495,385,5);         // Body
floodfill(495,385,DARKGRAY);
setfillstyle(SOLID_FILL,CYAN);
circle(502,292.5,8);       // Eyes
floodfill(502,292.5,DARKGRAY);
circle(486,292.5,8);       //  ||
floodfill(486,292.5,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(502,292.5,3);       //  ||
floodfill(502,292.5,DARKGRAY);
circle(486,292.5,3);       // Eyes
floodfill(486,292.2,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(370,250,50,30);
floodfill(370,250,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(435,270,7,7);
delay(500);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(370,250,50,30);
floodfill(370,250,DARKGRAY);
delay(500);
//mini 3 lang
for(i=0; i<2; i++)
{
setfillstyle(SOLID_FILL,WHITE);
line(468,360,522,360);     //15 Mouth
line(480,330,510,330);     //20 Mouth
line(470,360,480,330);     //21 Mouth
line(520,360,510,330);     //22 Mouth
floodfill(490,345,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTRED);
line(480,330,485,337);     //38 Teeth
line(485,337,490,330);     //39  ||
line(490,330,495,337);     //40  ||
line(495,337,500,330);     //41  ||
line(500,330,505,337);     //42  ||
line(505,337,510,330);     //43  ||
line(470,360,475,353);     //44  ||
line(475,353,480,360);     //45  ||
line(480,360,485,353);     //46  ||
line(485,353,490,360);     //47  ||
line(490,360,495,353);     //48  ||
line(495,353,500,360);     //49  ||
line(500,360,505,353);     //50  ||
line(505,353,510,360);     //51  ||
line(510,360,515,353);     //52  ||
line(515,353,520,360);     //53 Teeth
floodfill(480,359,DARKGRAY);
delay(1000);
setfillstyle(SOLID_FILL,MAGENTA);
bar(470,330,520,360);
setfillstyle(SOLID_FILL,WHITE);
line(468,360,522,360);     //15 Mouth
line(475,345,515,345);     //20 Mouth
line(470,360,475,345);     //21 Mouth
line(520,360,515,345);     //22 Mouth
floodfill(485,355,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTRED);
line(475,345,480,354);     //38 Teeth
line(480,354,485,345);     //39  ||
line(485,345,490,354);     //40  ||
line(490,354,495,345);     //41  ||
line(495,345,500,354);     //42  ||
line(500,354,505,345);     //43  ||
line(505,345,510,354);     //   Extra
line(510,354,515,345);     //   Extra
line(470,360,475,353);     //44 Lower Teeth
line(475,353,480,360);     //45  ||
line(480,360,485,353);     //46  ||
line(485,353,490,360);     //47  ||
line(490,360,495,353);     //48  ||
line(495,353,500,360);     //49  ||
line(500,360,505,353);     //50  ||
line(505,353,510,360);     //51  ||
line(510,360,515,353);     //52  ||
line(515,353,520,360);     //53 Teeth
floodfill(490,359,DARKGRAY);
delay(1000);
setfillstyle(SOLID_FILL,MAGENTA);
bar(470,330,520,360);
setfillstyle(SOLID_FILL,WHITE);
line(468,360,522,360);     //15 Mouth
line(480,330,510,330);     //20 Mouth
line(470,360,480,330);     //21 Mouth
line(520,360,510,330);     //22 Mouth
floodfill(490,345,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTRED);
line(480,330,485,337);     //38 Teeth
line(485,337,490,330);     //39  ||
line(490,330,495,337);     //40  ||
line(495,337,500,330);     //41  ||
line(500,330,505,337);     //42  ||
line(505,337,510,330);     //43  ||
line(470,360,475,353);     //44  ||
line(475,353,480,360);     //45  ||
line(480,360,485,353);     //46  ||
line(485,353,490,360);     //47  ||
line(490,360,495,353);     //48  ||
line(495,353,500,360);     //49  ||
line(500,360,505,353);     //50  ||
line(505,353,510,360);     //51  ||
line(510,360,515,353);     //52  ||
line(515,353,520,360);     //53 Teeth
floodfill(480,354,DARKGRAY);
delay(1000);
}
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(340,235,"Hello");
outtextxy(350,245,"I am Casey.");
delay(2000);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(235,360,"He is BOSS");
outtextxy(235,380,"He cares for");
outtextxy(235,400,"his employees");

delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(370,250,50,30);
floodfill(370,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,430,470);
//---------------------------//scene-1//---------------------------------//
cleardevice();
setbkcolor(BROWN);
setcolor(LIGHTCYAN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,7);
outtextxy(170,220,"SCENE-1");
delay(2000);
//---------------------------//scene-1-start//----------------------------//
cleardevice();
setbkcolor(LIGHTBLUE);
setcolor(DARKGRAY);                   //circle;
setfillstyle(SOLID_FILL,YELLOW);
circle(590,40,40);
floodfill(590,40,DARKGRAY);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(60,90,40,175,50);                  //cloud 1
arc(128,80,30,140,40);
arc(175,80,5,140,25);
arc(65,75,190,320,55);
arc(145,75,220,360,55);
floodfill(61,75,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
bar(105,74,115,86);
delay(100);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(110,80,2,5);
floodfill(111,79,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
bar(145,74,155,86);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(150,80,2,5);
floodfill(151,79,DARKGRAY);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(400,100,40,175,50);                 //cloud 2
arc(468,90,30,140,40);
arc(515,90,5,140,25);
arc(405,85,190,320,55);
arc(485,85,220,360,55);
floodfill(401,85,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);          //eyes
fillellipse(400,80,2,5);
floodfill(401,79,DARKGRAY);
fillellipse(440,80,2,5);
floodfill(441,79,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
delay(100);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	        //mouth  1
floodfill(421,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
//minion 1
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
arc(100,300,0,180,31);
line(69,300,69,365);
line(131,300,131,365);
arc(100,361,170,10,31);
floodfill(70,299,DARKGRAY);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(85,340,113,340);        // -
line(85,342,85,353);         // |
line(113,342,113,353);       // |
line(85,353,69,353);         // |
line(113,353,131,353);       // |
line(85,340,69,330);         // \
line(85,343,69,333);         // \
line(113,340,131,330);       // /
line(113,343,131,333);       // /
//pocket
line(92,348,104,348);
arc(98,349,180,359,7);
arc(69,353,280,359,10);
arc(130,353,180,269,10);
floodfill(86,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(85,298,69,298);
line(85,301,69,301);
arc(92,300,190,170,7);
floodfill(92,300,DARKGRAY);
line(115,298,131,298);
line(115,301,131,301);
arc(107,300,10,360,7);
floodfill(107,300,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(92,300,5);
floodfill(92,300,DARKGRAY);
circle(107,300,5);
floodfill(107,300,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(92,300,2);
floodfill(92,300,DARKGRAY);
circle(107,300,2);
floodfill(107,300,DARKGRAY);
//mouth
line(92,315,104,315);
arc(98,315,180,360,7);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(69,320,50,360);                 //left
line(69,330,57,360);
line(50,360,57,360);
floodfill(51,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(53,363,130,30,6);
floodfill(53,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(131,320,157,360);               //right
line(131,330,150,360);
line(157,360,150,360);
floodfill(152,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(153,363,130,30,5);
floodfill(153,363,DARKGRAY);
//minion 2
//body
setfillstyle(SOLID_FILL,YELLOW);
arc(500,280,0,180,31);
line(469,280,469,365);
line(531,280,531,365);
arc(500,361,170,10,31);
floodfill(501,361,DARKGRAY);
//mouth
line(492,315,504,315);
arc(498,315,180,360,7);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(485,340,513,340);         // -
line(485,342,485,353);         // |
line(513,342,513,353);         // |
line(485,353,469,353);         // |
line(513,353,531,353);         // |
line(485,340,469,330);         // \
line(485,343,469,333);         // \
line(513,340,531,330);         // /
line(513,343,531,333);         // /
//pocket
line(492,348,504,348);
arc(498,349,180,359,7);
arc(469,353,280,359,10);
arc(530,353,180,269,10);
floodfill(486,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(485,288,469,288);
line(485,291,469,291);
arc(492,290,190,170,7);
floodfill(492,290,DARKGRAY);
line(515,288,531,288);
line(515,291,531,291);
arc(507,290,10,360,7);
floodfill(507,290,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(492,290,5);
floodfill(492,290,DARKGRAY);
circle(507,290,5);
floodfill(507,290,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(492,290,2);
floodfill(492,290,DARKGRAY);
circle(507,290,2);
floodfill(507,290,DARKGRAY);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(469,315,450,360);              //left
line(469,325,457,360);
line(450,360,457,360);
floodfill(451,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(453,363,130,30,6);
floodfill(453,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(531,315,557,360);              //right
line(531,325,550,360);
line(550,360,557,360);
floodfill(555,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(553,363,133,33,6);
floodfill(553,363,DARKGRAY);
//legs
setfillstyle(SOLID_FILL,BLUE);
rectangle(485,389,499,400);
floodfill(486,399,DARKGRAY);
rectangle(504,389,517,400);
floodfill(505,399,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,15);
fillellipse(488,403,10,5);
floodfill(488,403,DARKGRAY);
fillellipse(508,403,10,5);
floodfill(508,403,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(150,280,7,7);
floodfill(150,280,DARKGRAY);
delay(500);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
delay(500);
//minion1 conversation
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(92,315,104,315);
arc(98,315,180,360,7);
floodfill(95,315,DARKGRAY);
}
setfillstyle(SOLID_FILL,WHITE);
fillellipse(150,280,7,7);
floodfill(150,280,DARKGRAY);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(165,235,"HI KEVIN..");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(455,270,7,7);
delay(500);
floodfill(450,270,DARKGRAY);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
delay(500);
//minion 2 conver
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(490,315,506,315);
arc(498,315,180,360,7);
floodfill(495,315,DARKGRAY);
delay(500);
}
//mini 2 language
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(365,240,"HI BOB.");
delay(2000);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
//minion 2 conver
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(490,315,506,315);
arc(498,315,180,360,7);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
}
//mini 2 lang
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(358,235,"Your legs?");
outtextxy(358,245,"What happened?");
delay(2000);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(235,360,"Did you meet ");
outtextxy(235,380,"with an accident?");
delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,440,470);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
//minion1 conversation
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(92,315,104,315);
arc(98,315,180,360,7);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
}
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(160,235,"Ohh.....");
outtextxy(162,245,"Its here!!!");
outtextxy(164,254,"No, I haven't");
delay(3000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(235,360,"I need your help!!!");
outtextxy(235,380,"For my project");
outtextxy(235,400,"I need to know ");
outtextxy(235,420,"about India");
delay(3000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,440,470);
//leg  minion 1
setfillstyle(SOLID_FILL,BLUE);
rectangle(85,389,99,400);
floodfill(86,390,DARKGRAY);
rectangle(104,389,117,400);
floodfill(105,393,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,15);
fillellipse(88,403,10,5);
floodfill(88,403,DARKGRAY);
fillellipse(108,403,10,5);
floodfill(108,403,DARKGRAY);
//minion 2 conver
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(490,315,506,315);
arc(498,315,180,360,7);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
}
//mini 2 lang
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(380,240,"Don't worry");
delay(2000);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(235,370,"But why did you ");
outtextxy(235,390,"hide your legs?");
delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,440,470);
//minion1 conversation
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(92,315,104,315);
arc(98,315,180,360,7);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
}
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(158,235,"Because");
outtextxy(158,245,"I haven't done");
outtextxy(158,254,"my project yet");
delay(3000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(235,360,"I wanted to espace");
outtextxy(230,380,"from casey");
delay(3000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,440,470);
//minion 2 conver
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(490,315,506,315);
arc(498,315,180,360,7);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
}
//mini 2 lang
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(365,240,"Dont worry!!!");
delay(2000);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(235,370,"I will help u");
delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,440,470);
//--------------ABOUT INDIA------------//
cleardevice();
setbkcolor(YELLOW);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(280,20,"INDIA");
line(246,60,378,60);
line(246,63,378,63);
delay(500);
outtextxy(3,100,"India,officially the Republic of India is a country in South-Asia.");
outtextxy(3,140,"It is the seventh-largest country by area,the second-most");
outtextxy(3,180,"populous country and the most populous democracy in the");
outtextxy(3,220,"world.");
outtextxy(3,260,"It is bounded by the Indian Ocean on the south,the Arabian");
outtextxy(3,300,"Sea on the southwest,and the Bay of Bengal on the southeast.");
delay(20000);
//waving flag
cleardevice();
setbkcolor(BLACK);
line(100,50,100,400);
line(108,50,108,400);
arc(104,50,0,180,3);
line(100,400,108,400);
floodfill(104,55,15);
for(i0=0;i0<2;i0++)
{
line(104,53-i0,160,53-i0);
line(160+i0,53,160+i0,65);
line(160,65+i0,120,53+i0);
}
ellipse(160,69,0,360,2,4);
line(160,72,160,400);
setfillstyle(1,4);
fillellipse(180,385,21,10);
x0=180;
y0=385;
getch();
setcolor(0);
fillellipse(180,385,21,10);
for(i0=1;i0<300;i0++)
{
setcolor(15);
setfillstyle(1,4);
line(160,72,160,400);
fillellipse(x0,y0-i0,21,10);
delay(20);
setcolor(0);
setfillstyle(1,0);
line(160,72,160,400);
fillellipse(x0,y0-i0,21,10);
}
setcolor(15);
setfillstyle(1,4);
line(160,72,160,400);
fillellipse(x0,y0-i0,21,10);
getch();
setfillstyle(1,0);
setcolor(0);
fillellipse(x0,y0-i0,32,10);
setcolor(15);
line(160,72,160,400);
delay(10);
getaspectratio(&xasp,&yasp);
setaspectratio(xasp/6,yasp);
arc(210,75,180,10,50);
arc(210,105,180,10,50);
arc(210,135,180,10,50);
arc(210,165,180,10,50);
line(260,75,260,165);
setfillstyle(1,15);
floodfill(212,126,15);
setfillstyle(1,RED);
floodfill(212,95,15);
setfillstyle(1,GREEN);
floodfill(212,156,15);
setcolor(RED);
arc(210,75,180,10,50);
arc(210,105,180,10,50);
line(260,75,260,105);
line(160,75,160,105);
setcolor(GREEN);
arc(210,135,180,10,50);
arc(210,165,180,10,50);
line(260,135,260,165);
line(160,135,160,165);
setcolor(BLUE);
setaspectratio(xasp,yasp);
for(i0=0;i0<2;i0++)
{
circle(210,128,10+i0);
}
x0=210;
y0=118;
for(i0=0;i0<380;i0=i0+10)
{
ang=(i0*10)%360;
x0=210+((float)10*cos((float)ang*(3.14/180)));
y0=128+((float)10*sin((float)ang*(3.14/180)));
line(210,128,x0,y0);
}
delay(2000);
cleardevice();
//draw the top rectangle and color it
setcolor(RED);
rectangle(100,100,450,150);
setfillstyle(SOLID_FILL,RED);
floodfill(101,101,RED);
//Text regarding the saffron
setcolor(WHITE);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(30,280,"SAFFRON-indicating the strength and courage of the country.");
delay(2000);
cleardevice();
//draw the middle rectangle and color it
setcolor(WHITE);
rectangle(100,150,450,200);
setfillstyle(SOLID_FILL,WHITE);
floodfill(101,151,WHITE);
//Text regarding the white
setcolor(WHITE);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(30,280,"WHITE-indicating peace and truth. ");
delay(2000);
cleardevice();
//draw the bottom rectangle and color it
setcolor(GREEN);
rectangle(100,200,450,250);
setfillstyle(SOLID_FILL,GREEN);
floodfill(101,201,GREEN);
//Text regarding the green
setcolor(WHITE);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(0,280,"GREEN-The last band is green in colour shows the fertility");
outtextxy(0,320,"       and auspiciousness of the land. ");
delay(2000);
//ABOUT FREEDOM FIGHTERS
cleardevice();
setbkcolor(GREEN);
setcolor(WHITE);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(190,20,"Freedom Fighters of India");
line(180,60,450,60);
line(180,63,450,63);
delay(500);
outtextxy(3,100,"Today as we freely move around in our country without");
outtextxy(3,140,"anyone questioning or imposing any kinds of restrictions on us");
outtextxy(3,180,"we feel satisfied and contended.");
outtextxy(3,220,"But this satisfaction is due to the efforts taken by our");
outtextxy(3,260,"freedom fighters to free our country from the British rule.");
outtextxy(3,300,"One individual may die for an idea, but that idea will, after");
outtextxy(3,340,"his death, incarnate itself in a thousand lives.That is how");
outtextxy(3,380,"the wheel of evolution moves on and the ideas and dreams of");
outtextxy(3,420,"one nation are bequeathed to the next.");
delay(20000);
//end

//--------------finish-----------------------------//
//---------------------try----//
cleardevice();
setbkcolor(LIGHTBLUE);
setcolor(DARKGRAY);                   //circle;
setfillstyle(SOLID_FILL,YELLOW);
circle(590,40,40);
floodfill(590,40,DARKGRAY);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(60,90,40,175,50);                  //cloud 1
arc(128,80,30,140,40);
arc(175,80,5,140,25);
arc(65,75,190,320,55);
arc(145,75,220,360,55);
floodfill(61,75,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
bar(105,74,115,86);
delay(100);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(110,80,2,5);
floodfill(111,79,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
bar(145,74,155,86);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(150,80,2,5);
floodfill(151,79,DARKGRAY);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(400,100,40,175,50);                 //cloud 2
arc(468,90,30,140,40);
arc(515,90,5,140,25);
arc(405,85,190,320,55);
arc(485,85,220,360,55);
floodfill(401,85,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);          //eyes
fillellipse(400,80,2,5);
floodfill(401,79,DARKGRAY);
fillellipse(440,80,2,5);
floodfill(441,79,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
delay(100);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	        //mouth  1
floodfill(421,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
//minion 1
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
arc(100,300,0,180,31);
line(69,300,69,365);
line(131,300,131,365);
arc(100,361,170,10,31);
floodfill(70,299,DARKGRAY);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(85,340,113,340);        // -
line(85,342,85,353);         // |
line(113,342,113,353);       // |
line(85,353,69,353);         // |
line(113,353,131,353);       // |
line(85,340,69,330);         // \
line(85,343,69,333);         // \
line(113,340,131,330);       // /
line(113,343,131,333);       // /
//pocket
line(92,348,104,348);
arc(98,349,180,359,7);
arc(69,353,280,359,10);
arc(130,353,180,269,10);
floodfill(86,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(85,298,69,298);
line(85,301,69,301);
arc(92,300,190,170,7);
floodfill(92,300,DARKGRAY);
line(115,298,131,298);
line(115,301,131,301);
arc(107,300,10,360,7);
floodfill(107,300,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(92,300,5);
floodfill(92,300,DARKGRAY);
circle(107,300,5);
floodfill(107,300,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(92,300,2);
floodfill(92,300,DARKGRAY);
circle(107,300,2);
floodfill(107,300,DARKGRAY);
//mouth
line(92,315,104,315);
arc(98,315,180,360,7);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(69,320,50,360);                 //left
line(69,330,57,360);
line(50,360,57,360);
floodfill(51,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(53,363,130,30,6);
floodfill(53,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(131,320,157,360);               //right
line(131,330,150,360);
line(157,360,150,360);
floodfill(152,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(153,363,130,30,5);
floodfill(153,363,DARKGRAY);
//minion 2
//body
setfillstyle(SOLID_FILL,YELLOW);
arc(500,280,0,180,31);
line(469,280,469,365);
line(531,280,531,365);
arc(500,361,170,10,31);
floodfill(501,361,DARKGRAY);
//mouth
line(492,315,504,315);
arc(498,315,180,360,7);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(485,340,513,340);         // -
line(485,342,485,353);         // |
line(513,342,513,353);         // |
line(485,353,469,353);         // |
line(513,353,531,353);         // |
line(485,340,469,330);         // \
line(485,343,469,333);         // \
line(513,340,531,330);         // /
line(513,343,531,333);         // /
//pocket
line(492,348,504,348);
arc(498,349,180,359,7);
arc(469,353,280,359,10);
arc(530,353,180,269,10);
floodfill(486,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(485,288,469,288);
line(485,291,469,291);
arc(492,290,190,170,7);
floodfill(492,290,DARKGRAY);
line(515,288,531,288);
line(515,291,531,291);
arc(507,290,10,360,7);
floodfill(507,290,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(492,290,5);
floodfill(492,290,DARKGRAY);
circle(507,290,5);
floodfill(507,290,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(492,290,2);
floodfill(492,290,DARKGRAY);
circle(507,290,2);
floodfill(507,290,DARKGRAY);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(469,315,450,360);              //left
line(469,325,457,360);
line(450,360,457,360);
floodfill(451,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(453,363,130,30,6);
floodfill(453,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(531,315,557,360);              //right
line(531,325,550,360);
line(550,360,557,360);
floodfill(555,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(553,363,133,33,6);
floodfill(553,363,DARKGRAY);
//legs
setfillstyle(SOLID_FILL,BLUE);
rectangle(485,389,499,400);
floodfill(486,399,DARKGRAY);
rectangle(504,389,517,400);
floodfill(505,399,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,15);
fillellipse(488,403,10,5);
floodfill(488,403,DARKGRAY);
fillellipse(508,403,10,5);
floodfill(508,403,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(150,280,7,7);
floodfill(150,280,DARKGRAY);
delay(500);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
delay(500);
//minion1 conversation
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(92,315,104,315);
arc(98,315,180,360,7);
floodfill(95,315,DARKGRAY);
}
setfillstyle(SOLID_FILL,WHITE);
fillellipse(150,280,7,7);
floodfill(150,280,DARKGRAY);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(165,235,"HI KEVIN..");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(455,270,7,7);
delay(500);
floodfill(450,270,DARKGRAY);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
delay(500);
//minion 2 conver
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(490,315,506,315);
arc(498,315,180,360,7);
floodfill(495,315,DARKGRAY);
delay(500);
}

//-----------------------end try------------//
//minion1 conversation
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(92,315,104,315);
arc(98,315,180,360,7);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
}
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(160,235,"I have");
outtextxy(162,245,"unterstood");
outtextxy(164,254,"now");
delay(3000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(200,360,"Thank you ");
outtextxy(200,380,"Kevin");
delay(3000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(200,250,50,30);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,440,470);
//----------------------------//boom//------------------------------//
cleardevice();
setbkcolor(BLACK);
setcolor(YELLOW);    	      //Boom Cloud
setfillstyle(SOLID_FILL,RED);
line(110,40,230,160);         //1
line(230,160,290,80);         //2
line(290,80,305,170);         //3
line(305,170,375,130);        //4
line(375,130,370,170);        //5
line(370,170,425,160);        //6
line(425,160,440,200);        //7
line(440,200,580,140);        //8
line(580,140,455,260);        //9
line(455,260,600,360);        //10
line(600,360,460,340);        //11
line(460,340,515,410);        //12
line(515,410,455,385);        //13
line(455,385,480,475);        //14
line(480,475,380,380);        //15
line(380,380,340,450);        //16
line(340,450,310,370);        //17
line(310,370,260,470);        //18
line(260,470,220,410);        //19
line(220,410,130,470);        //20
line(130,470,180,350);        //21
line(180,350,25,365);         //22
line(25,365,170,300);         //23
line(170,300,80,270);         //24
line(80,270,130,245);         //25
line(130,245,70,170);         //26
line(70,170,180,200);         //27
line(180,200,110,40);         //28
floodfill(300,250,YELLOW);
setcolor(YELLOW);                //Boom Text
settextstyle(10,HORIZ_DIR,7);
outtextxy(190,200,"PARTY");
delay(2000);
//---------------------------//scene-1-end//-----------------------------//
//---------------------------//scene-2//------------------------------//
cleardevice();
setbkcolor(BROWN);
setcolor(LIGHTCYAN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,7);
outtextxy(170,220,"SCENE-2");
delay(2000);
//---------------------------//scene-2-start//----------------------------//
cleardevice();
setcolor(DARKGRAY);
setbkcolor(LIGHTBLUE);
setfillstyle(SOLID_FILL,YELLOW);    //circle;
circle(590,40,40);
floodfill(590,40,DARKGRAY);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(60,90,40,175,50);                  //cloud 1
arc(128,80,30,140,40);
arc(175,80,5,140,25);
arc(65,75,190,320,55);
arc(145,75,220,360,55);
floodfill(61,75,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
bar(105,74,115,86);
delay(100);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(110,80,2,5);
floodfill(111,79,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(150,80,2,5);
floodfill(151,79,DARKGRAY);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(400,100,40,175,50);                 //cloud 2
arc(468,90,30,140,40);
arc(515,90,5,140,25);
arc(405,85,190,320,55);
arc(485,85,220,360,55);
floodfill(401,85,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(400,80,2,5);
floodfill(401,79,DARKGRAY);
fillellipse(440,80,2,5);
floodfill(441,79,DARKGRAY);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	        //mouth  1
floodfill(421,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
//minion 1
setbkcolor(LIGHTBLUE);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
arc(100,300,0,180,31);
line(69,300,69,365);
line(131,300,131,365);
arc(100,361,170,10,31);
floodfill(70,299,DARKGRAY);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(85,340,113,340);        // -
line(85,342,85,353);         // |
line(113,342,113,353);       // |
line(85,353,69,353);         // |
line(113,353,131,353);       // |
line(85,340,69,330);         // \
line(85,343,69,333);         // \
line(113,340,131,330);       // /
line(113,343,131,333);       // /
//pocket
line(92,348,104,348);
arc(98,349,180,359,7);
arc(69,353,280,359,10);
arc(130,353,180,269,10);
floodfill(86,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(85,298,69,298);
line(85,301,69,301);
arc(92,300,190,170,7);
floodfill(92,300,DARKGRAY);
line(115,298,131,298);
line(115,301,131,301);
arc(107,300,10,360,7);
floodfill(107,300,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(92,300,5);
floodfill(92,300,DARKGRAY);
circle(107,300,5);
floodfill(107,300,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(92,300,2);
floodfill(92,300,DARKGRAY);
circle(107,300,2);
floodfill(107,300,DARKGRAY);
//mouth
line(92,315,104,315);
arc(98,315,180,360,7);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(69,320,50,360);                 //left
line(69,330,57,360);
line(50,360,57,360);
floodfill(51,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(53,363,130,30,6);
floodfill(53,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(131,320,157,360);               //right
line(131,330,150,360);
line(157,360,150,360);
floodfill(152,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(153,363,130,30,5);
floodfill(153,363,DARKGRAY);
//leg  minion 1
setfillstyle(SOLID_FILL,BLUE);
rectangle(85,389,99,400);
floodfill(86,390,DARKGRAY);
rectangle(104,389,117,400);
floodfill(105,393,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,15);
fillellipse(88,403,10,5);
floodfill(88,403,DARKGRAY);
fillellipse(108,403,10,5);
floodfill(108,403,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(150,280,7,7);
floodfill(150,280,DARKGRAY);
delay(500);
fillellipse(200,250,60,30);
floodfill(200,250,DARKGRAY);
delay(1000);
setcolor(DARKGRAY);           //Bad Minion
setfillstyle(SOLID_FILL,MAGENTA);
line(460,280,445,270);     //1  Hair
line(445,270,460,270);     //2   ||
line(460,270,430,230);     //3   ||
line(430,230,470,255);     //4   ||
line(470,255,465,205);     //5   ||
line(465,205,485,250);     //6   ||
line(485,250,510,210);     //7   ||
line(510,210,515,250);     //8   ||
line(515,250,530,225);     //9   ||
line(530,225,525,260);     //10  ||
line(525,260,550,245);     //11  ||
line(550,245,530,275);     //12 Hair
line(530,275,520,380);     //13 Side
line(460,280,470,380);     //14 Side
line(468,360,522,360);     //15 Mouth
floodfill(471,359,DARKGRAY);
setfillstyle(SOLID_FILL,CYAN);
rectangle(479,290,462,295);
floodfill(463,291,DARKGRAY);
rectangle(528,290,510,295);
floodfill(511,291,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
line(480,330,510,330);     //20 Mouth
line(470,360,480,330);     //21 Mouth
line(520,360,510,330);     //22 Mouth
floodfill(490,345,DARKGRAY);
setfillstyle(SOLID_FILL,MAGENTA);
line(520,370,550,400);     //32 Hands
line(520,375,550,405);     //33  ||
line(550,398,550,408);     //34  ||
line(520,370,520,375);
floodfill(549,401,DARKGRAY);
line(470,370,440,400);     //35  ||
line(470,375,440,405);     //36  ||
line(440,398,440,408);     //37 Hands
line(470,370,470,375);
floodfill(441,402,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(550,404,270,90,5);
floodfill(551,404,DARKGRAY);
arc(440,404,90,270,5);
floodfill(439,404,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTRED);
line(480,330,485,337);     //38 Teeth
line(485,337,490,330);     //39  ||
line(490,330,495,337);     //40  ||
line(495,337,500,330);     //41  ||
line(500,330,505,337);     //42  ||
line(505,337,510,330);     //43  ||
line(470,360,475,353);     //44  ||
line(475,353,480,360);     //45  ||
line(480,360,485,353);     //46  ||
line(485,353,490,360);     //47  ||
line(490,360,495,353);     //48  ||
line(495,353,500,360);     //49  ||
line(500,360,505,353);     //50  ||
line(505,353,510,360);     //51  ||
line(510,360,515,353);     //52  ||
line(515,353,520,360);     //53 Teeth
floodfill(480,359,DARKGRAY);
//legs
setfillstyle(SOLID_FILL,BLUE);
rectangle(486,404,493,415);
floodfill(487,405,DARKGRAY);
rectangle(500,404,507,415);
floodfill(501,405,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,WHITE);
fillellipse(487,418,9,5);
floodfill(487,418,DARKGRAY);
fillellipse(502,418,9,5);
floodfill(503,418,DARKGRAY);
setfillstyle(SOLID_FILL,MAGENTA);
arc(495,380,180,360,25);   // Body
floodfill(495,380,DARKGRAY);
setfillstyle(SOLID_FILL,BLUE);
line(470,360,480,370);     //23 Dress
line(520,360,510,370);     //24  ||
line(480,370,510,370);     //25  ||
line(470,370,480,380);     //26  ||
line(480,380,480,390);     //27  ||
line(480,390,475,395);     //28  ||
line(520,370,510,380);     //29  ||
line(510,380,510,390);     //30  ||
line(510,390,515,395);     //31 Dress
floodfill(471,362,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
circle(495,385,5);         // Body
floodfill(495,385,DARKGRAY);
setfillstyle(SOLID_FILL,CYAN);
circle(502,292.5,8);       // Eyes
floodfill(502,292.5,DARKGRAY);
circle(486,292.5,8);       //  ||
floodfill(486,292.5,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(502,292.5,3);       //  ||
floodfill(502,292.5,DARKGRAY);
circle(486,292.5,3);       // Eyes
floodfill(486,292.2,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(435,270,7,7);
delay(500);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(370,250,50,30);
floodfill(370,250,DARKGRAY);
delay(1000);
//mouth
for(i=0;i<3;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(92,315,104,315);
arc(98,315,180,360,7);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
}
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(170,350,300,470);
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(150,235,"Sir ,I have ");
outtextxy(150,247,"completed my");
outtextxy(165,260,"project");
delay(3000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(170,350,"Kelvin helped ");
outtextxy(170,380,"me finishing");
outtextxy(170,410,"my project");
delay(3000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(200,250,60,30);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(170,350,400,470);
delay(1000);
//mini 3 lang
for(i=0; i<2; i++)
{
setfillstyle(SOLID_FILL,WHITE);
line(468,360,522,360);     //15 Mouth
line(480,330,510,330);     //20 Mouth
line(470,360,480,330);     //21 Mouth
line(520,360,510,330);     //22 Mouth
floodfill(490,345,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTRED);
line(480,330,485,337);     //38 Teeth
line(485,337,490,330);     //39  ||
line(490,330,495,337);     //40  ||
line(495,337,500,330);     //41  ||
line(500,330,505,337);     //42  ||
line(505,337,510,330);     //43  ||
line(470,360,475,353);     //44  ||
line(475,353,480,360);     //45  ||
line(480,360,485,353);     //46  ||
line(485,353,490,360);     //47  ||
line(490,360,495,353);     //48  ||
line(495,353,500,360);     //49  ||
line(500,360,505,353);     //50  ||
line(505,353,510,360);     //51  ||
line(510,360,515,353);     //52  ||
line(515,353,520,360);     //53 Teeth
floodfill(480,359,DARKGRAY);
delay(1000);
setfillstyle(SOLID_FILL,MAGENTA);
bar(470,330,520,360);
setfillstyle(SOLID_FILL,WHITE);
line(468,360,522,360);     //15 Mouth
line(475,345,515,345);     //20 Mouth
line(470,360,475,345);     //21 Mouth
line(520,360,515,345);     //22 Mouth
floodfill(485,355,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTRED);
line(475,345,480,354);     //38 Teeth
line(480,354,485,345);     //39  ||
line(485,345,490,354);     //40  ||
line(490,354,495,345);     //41  ||
line(495,345,500,354);     //42  ||
line(500,354,505,345);     //43  ||
line(505,345,510,354);     //   Extra
line(510,354,515,345);     //   Extra
line(470,360,475,353);     //44 Lower Teeth
line(475,353,480,360);     //45  ||
line(480,360,485,353);     //46  ||
line(485,353,490,360);     //47  ||
line(490,360,495,353);     //48  ||
line(495,353,500,360);     //49  ||
line(500,360,505,353);     //50  ||
line(505,353,510,360);     //51  ||
line(510,360,515,353);     //52  ||
line(515,353,520,360);     //53 Teeth
floodfill(490,359,DARKGRAY);
delay(1000);
setfillstyle(SOLID_FILL,MAGENTA);
bar(470,330,520,360);
setfillstyle(SOLID_FILL,WHITE);
line(468,360,522,360);     //15 Mouth
line(480,330,510,330);     //20 Mouth
line(470,360,480,330);     //21 Mouth
line(520,360,510,330);     //22 Mouth
floodfill(490,345,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTRED);
line(480,330,485,337);     //38 Teeth
line(485,337,490,330);     //39  ||
line(490,330,495,337);     //40  ||
line(495,337,500,330);     //41  ||
line(500,330,505,337);     //42  ||
line(505,337,510,330);     //43  ||
line(470,360,475,353);     //44  ||
line(475,353,480,360);     //45  ||
line(480,360,485,353);     //46  ||
line(485,353,490,360);     //47  ||
line(490,360,495,353);     //48  ||
line(495,353,500,360);     //49  ||
line(500,360,505,353);     //50  ||
line(505,353,510,360);     //51  ||
line(510,360,515,353);     //52  ||
line(515,353,520,360);     //53 Teeth
floodfill(480,354,DARKGRAY);
delay(1000);
}

settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(340,235,"Thats early");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(170,350,400,470);
setcolor(RED);
settextstyle(SMALL_FONT,HORIZ_DIR,2);
outtextxy(340,235,"Great job");
delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(370,250,50,30);
floodfill(370,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(170,350,400,470);

for(i=0; i<2; i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(92,315,104,315);
arc(98,315,180,360,7);
floodfill(95,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(90,312,107,325);
setfillstyle(SOLID_FILL,YELLOW);
line(94,315,102,315);
arc(98,315,180,360,4);
floodfill(95,315,DARKGRAY);
delay(500);
}
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
settextstyle(SMALL_FONT,HORIZ_DIR,5);
outtextxy(165,235,"Thank u,Sir");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,399,470);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(200,360,"Can we party !!");
delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(200,250,60,30);
floodfill(200,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(170,350,400,470);
delay(1000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(1,220,300,420);
delay(1000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(300,200,620,428);
delay(500);
//running mini
for(i=0;i<170;i++)
{
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(320-i,200,460-i,440);   //Bad Minion Run1
setfillstyle(SOLID_FILL,MAGENTA);
line(350-i,280,330-i,270);     //1  Hair
line(330-i,270,350.5-i,270);   //2   ||
line(350.5-i,270,350-i,230);   //3   ||
line(350-i,230,370-i,255);     //4   ||
line(370-i,255,370.5-i,205);   //5   ||
line(370.5-i,205,390-i,250);   //6   ||
line(390-i,250,405-i,210);     //7   ||
line(405-i,210,400-i,250);     //8   ||
line(400-i,250,420-i,240);     //9   ||
line(420-i,240,410-i,270);     //10  ||
line(410-i,270,420-i,270);     //11  ||
line(420-i,270,410-i,280);     //12 Hair
line(350-i,280,350-i,380);     //13 Side
line(410-i,280,410-i,380);     //14 Side
line(350-i,360,410-i,360);     //15 Mouth
floodfill(352-i,331,DARKGRAY);

setfillstyle(SOLID_FILL,CYAN);
rectangle(370-i,300,410-i,304); // Glass
floodfill(371-i,301,DARKGRAY);

setfillstyle(SOLID_FILL,WHITE);
line(350-i,330,360-i,330);     // Mouth
line(360-i,330,380-i,360);     //  ||
line(380-i,360,350-i,360);     // Mouth
floodfill(351-i,331,DARKGRAY);
fillellipse(327-i,403,3,5);  // Hands
floodfill(327-i,403,DARKGRAY);

setfillstyle(SOLID_FILL,MAGENTA);
line(380-i,370,330-i,400);     // Hands
line(380-i,375,330-i,405);     //  ||
line(380-i,370,380-i,375);     //  ||
line(330-i,400,330-i,405);     // Hands
floodfill(335-i,399,DARKGRAY);

setfillstyle(SOLID_FILL,LIGHTRED);
line(350-i,330,355-i,337);     // Teeth
line(355-i,337,360-i,330);     //  ||
line(350-i,360,355-i,353);     //  ||
line(355-i,353,360-i,360);     //  ||
line(360-i,360,365-i,353);     //  ||
line(365-i,353,370-i,360);     //  ||
line(370-i,360,375-i,353);     //  ||
line(375-i,353,380-i,360);     // Teeth
floodfill(370-i,350,DARKGRAY);

setfillstyle(SOLID_FILL,BLUE);
rectangle(390-i,410,370-i,420);   // Legs
floodfill(375-i,415,DARKGRAY);

setfillstyle(SOLID_FILL,WHITE);
fillellipse(380-i,425,13,5);    // Shoes
floodfill(380-i,425,DARKGRAY);

setfillstyle(SOLID_FILL,MAGENTA);
arc(380-i,380,180,360,30.5);   // Body
floodfill(379-i,383,DARKGRAY);

setfillstyle(SOLID_FILL,BLUE);
line(360-i,370,400-i,365);     // Dress
line(360-i,370,360-i,382);     //  ||
line(360-i,388,360-i,395);     //  ||
line(360-i,395,400-i,395);     //  ||
line(400-i,395,400-i,365);     // Dress
floodfill(401-i,397,DARKGRAY);

setfillstyle(SOLID_FILL,CYAN);
circle(360-i,302.5,9);       // Eyes
floodfill(355-i,300.5,DARKGRAY);

setfillstyle(SOLID_FILL,BLACK);
circle(360-i,302.5,4);       // Eyes
floodfill(360-i,300.5,DARKGRAY);
delay(70);
}
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(50,200,290,440);
setcolor(DARKGRAY);           //Bad Minion2
setfillstyle(SOLID_FILL,MAGENTA);
line(60,280,45,270);       //1  Hair
line(45,270,60,270);       //2   ||
line(60,270,30,230);       //3   ||
line(30,230,70,255);       //4   ||
line(70,255,65,205);       //5   ||
line(65,205,85,250);       //6   ||
line(85,250,110,210);      //7   ||
line(110,210,115,250);     //8   ||
line(115,250,130,225);     //9   ||
line(130,225,125,260);     //10  ||
line(125,260,150,245);     //11  ||
line(150,245,130,275);     //12 Hair
line(130,275,120,380);     //13 Side
line(60,280,70,380);       //14 Side
line(68,360,122,360);      //15 Mouth
floodfill(71,359,DARKGRAY);

setfillstyle(SOLID_FILL,CYAN);
rectangle(79,290,62,295);     //17  ||
floodfill(63,291,DARKGRAY);
rectangle(128,290,110,295);//19 Glass
floodfill(111,291,DARKGRAY);

setfillstyle(SOLID_FILL,WHITE);
line(80,330,110,330);      //20 Mouth
line(70,360,80,330);       //21 Mouth
line(120,360,110,330);     //22 Mouth
floodfill(90,345,DARKGRAY);

setfillstyle(SOLID_FILL,MAGENTA);
line(120,370,150,400);     //32 Hands
line(120,375,150,405);     //33  ||
line(150,398,150,408);     //34  ||
line(120,370,120,375);
floodfill(149,401,DARKGRAY);
line(70,370,40,400);      //35  ||
line(70,375,40,405);      //36  ||
line(40,398,40,408);      //37 Hands
line(70,370,70,375);
floodfill(41,402,DARKGRAY);

setfillstyle(SOLID_FILL,WHITE);
arc(150,404,270,90,5);
floodfill(151,404,DARKGRAY);
arc(40,404,90,270,5);
floodfill(39,404,DARKGRAY);

setfillstyle(SOLID_FILL,LIGHTRED);
line(80,330,85,337);       //38 Teeth
line(85,337,90,330);       //39  ||
line(90,330,95,337);       //40  ||
line(95,337,100,330);      //41  ||
line(100,330,105,337);     //42  ||
line(105,337,110,330);     //43  ||
line(70,360,75,353);       //44  ||
line(75,353,80,360);       //45  ||
line(80,360,85,353);       //46  ||
line(85,353,90,360);       //47  ||
line(90,360,95,353);       //48  ||
line(95,353,100,360);      //49  ||
line(100,360,105,353);     //50  ||
line(105,353,110,360);     //51  ||
line(110,360,115,353);     //52  ||
line(115,353,120,360);     //53 Teeth
floodfill(80,359,DARKGRAY);

setfillstyle(SOLID_FILL,BLUE);
rectangle(86,404,93,415); // Legs
floodfill(87,405,DARKGRAY);
rectangle(100,404,107,415);
floodfill(101,405,DARKGRAY);

setfillstyle(SOLID_FILL,WHITE);
fillellipse(87,418,9,5);  // Shoes
floodfill(87,418,DARKGRAY);
fillellipse(102,418,9,5);
floodfill(102,418,DARKGRAY);

setfillstyle(SOLID_FILL,MAGENTA);
arc(95,380,180,360,25);   // Body
floodfill(95,380,DARKGRAY);

setfillstyle(SOLID_FILL,BLUE);
line(70,360,80,370);     //23 Dress
line(120,360,110,370);   //24  ||
line(80,370,110,370);    //25  ||
line(70,370,80,380);     //26  ||
line(80,380,80,390);     //27  ||
line(80,390,75,395);     //28  ||
line(120,370,110,380);   //29  ||
line(110,380,110,390);   //30  ||
line(110,390,115,395);   //31 Dress
floodfill(75,374,DARKGRAY);

setfillstyle(SOLID_FILL,YELLOW);
circle(95,385,5);         // Body
floodfill(95,385,DARKGRAY);

setfillstyle(SOLID_FILL,CYAN);
circle(102,292.5,8);       // Eyes
floodfill(102,292.5,DARKGRAY);
circle(86,292.5,8);       //  ||
floodfill(86,292.5,DARKGRAY);

setfillstyle(SOLID_FILL,BLACK);
circle(102,292.5,3);       //  ||
floodfill(102,292.5,DARKGRAY);
circle(86,292.5,3);       // Eyes
floodfill(86,292.2,DARKGRAY);

setfillstyle(SOLID_FILL,WHITE);
fillellipse(220,250,50,30);
floodfill(220,250,DARKGRAY);

setfillstyle(SOLID_FILL,WHITE);
fillellipse(150,270,7,7);
delay(500);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(220,250,50,30);
floodfill(220,250,DARKGRAY);
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(180,235,"Wait for Me!!!");
delay(2000);


//---------------------------//scene-2-end//----------------------------//
//---------------------------//scene-3//--------------------------------//
cleardevice();
setbkcolor(BROWN);
setcolor(LIGHTCYAN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,7);
outtextxy(170,220,"SCENE-3");
delay(2000);
//---------------------------//scene-3-start//-------------------------//
//----------------------Party--------------//
cleardevice();
setbkcolor(BLACK);
setcolor(YELLOW);    	      //Boom Cloud
setfillstyle(SOLID_FILL,GREEN);
line(110,40,230,160);         //1
line(230,160,290,80);         //2
line(290,80,305,170);         //3
line(305,170,375,130);        //4
line(375,130,370,170);        //5
line(370,170,425,160);        //6
line(425,160,440,200);        //7
line(440,200,580,140);        //8
line(580,140,455,260);        //9
line(455,260,600,360);        //10
line(600,360,460,340);        //11
line(460,340,515,410);        //12
line(515,410,455,385);        //13
line(455,385,480,475);        //14
line(480,475,380,380);        //15
line(380,380,340,450);        //16
line(340,450,310,370);        //17
line(310,370,260,470);        //18
line(260,470,220,410);        //19
line(220,410,130,470);        //20
line(130,470,180,350);        //21
line(180,350,25,365);         //22
line(25,365,170,300);         //23
line(170,300,80,270);         //24
line(80,270,130,245);         //25
line(130,245,70,170);         //26
line(70,170,180,200);         //27
line(180,200,110,40);         //28
floodfill(300,250,YELLOW);
setcolor(YELLOW);                //Boom Text
settextstyle(10,HORIZ_DIR,6);
outtextxy(190,200,"PARTY");
delay(2000);
//----------------------party boom---------//

cleardevice();
setbkcolor(BLACK);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(60,90,40,175,50);                  //cloud 1
arc(128,80,30,140,40);
arc(175,80,5,140,25);
arc(65,75,190,320,55);
arc(145,75,220,360,55);
floodfill(61,75,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(110,80,2,5);
floodfill(111,79,DARKGRAY);
fillellipse(150,80,2,5);
floodfill(151,79,DARKGRAY);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
arc(400,100,40,175,50);                 //cloud 2
arc(468,90,30,140,40);
arc(515,90,5,140,25);
arc(405,85,190,320,55);
arc(485,85,220,360,55);
floodfill(401,85,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(400,80,2,5);
floodfill(401,79,DARKGRAY);
fillellipse(440,80,2,5);
floodfill(441,79,DARKGRAY);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	         //mouth  1
floodfill(421,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);         //circle
circle(590,40,40);
floodfill(590,40,DARKGRAY);
//snow man
setfillstyle(SOLID_FILL,WHITE);
circle(570,248,35);
floodfill(570,248,DARKGRAY);
circle(570,332,50);
floodfill(570,332,DARKGRAY);
arc(570,410,127,410,70);
floodfill(570,410,DARKGRAY);
circle(555,238,7);
floodfill(555,238,DARKGRAY);       //eyes
circle(580,238,7);
floodfill(580,238,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
line(570,250,530,260);              //nose
line(530,260,570,260);
line(570,250,570,260);
floodfill(565,257,DARKGRAY);
arc(570,260,200,340,12);           //arc mouth
setfillstyle(SOLID_FILL,BLUE);
circle(570,300,4);
floodfill(570,300,DARKGRAY);
circle(570,320,4);
floodfill(570,320,DARKGRAY);
circle(570,340,4);
floodfill(570,340,DARKGRAY);
circle(570,360,4);
floodfill(570,360,DARKGRAY);
 //xmas
setfillstyle(SOLID_FILL,BROWN);
rectangle(50,390,85,480);         //stem
floodfill(52,391,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTGREEN);
line(1,390,50,390);
line(1,390,50,345);
line(50,345,1,345);
line(1,345,50,300);
line(50,300,1,300);
line(1,300,80,230);         //left
line(140,390,10,390);
line(140,390,100,345);
line(100,345,140,345);
line(140,345,130,345);
line (130,345,150,345);
line(150,345,100,300);
line(100,300,145,300);
line(145,300,80,230);       //right
floodfill(70,290,DARKGRAY);
//body mini
setfillstyle(SOLID_FILL,YELLOW);
arc(250,300,0,180,31);
line(219,300,219,365);
line(281,300,281,365);
arc(250,361,170,10,31);
//arc(85,270,10,90,12);
floodfill(250,299,DARKGRAY);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(235,340,263,340);        // -
line(235,342,235,353);         // |
line(263,342,263,353);       // |
line(235,353,219,353);         // |
line(263,353,281,353);       // |
line(235,340,219,330);         // \
line(235,343,219,333);         // \
line(263,340,281,330);       // /
line(263,343,281,333);       // /
//pocket
line(242,348,254,348);
arc(248,349,180,359,7);
arc(219,353,280,359,10);
arc(280,353,180,269,10);
floodfill(262,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(235,298,219,298);
line(235,301,219,301);
arc(242,300,190,170,7);
floodfill(242,300,DARKGRAY);
line(263,298,281,298);
line(263,301,281,301);
arc(257,300,10,360,7);
floodfill(257,300,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(242,300,5);
floodfill(242,300,DARKGRAY);
circle(257,300,5);
floodfill(257,300,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(242,300,2);
floodfill(242,300,DARKGRAY);
circle(257,300,2);
floodfill(257,300,DARKGRAY);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(219,320,200,360);                 //left
line(219,330,207,360);
line(200,360,207,360);
floodfill(201,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(203,363,130,30,6);
floodfill(203,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(281,320,307,360);               //right
line(281,330,300,360);
line(307,360,300,360);
floodfill(302,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(303,363,130,30,5);
floodfill(303,363,DARKGRAY);
//leg  minion 1
setfillstyle(SOLID_FILL,BLUE);
rectangle(235,389,249,400);
floodfill(236,390,DARKGRAY);
rectangle(254,389,267,400);
floodfill(255,393,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,15);
fillellipse(238,403,10,5);
floodfill(238,403,DARKGRAY);
fillellipse(258,403,10,5);
floodfill(258,403,DARKGRAY);
//mouth
for(i=0; i<2; i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(240,312,257,325);
setfillstyle(SOLID_FILL,YELLOW);
line(244,315,252,315);
arc(248,315,180,360,4);
floodfill(248,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(240,312,257,325);
setfillstyle(SOLID_FILL,YELLOW);
line(242,315,254,315);
arc(248,315,180,360,7);
floodfill(248,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(240,312,257,325);
setfillstyle(SOLID_FILL,YELLOW);
line(244,315,252,315);
arc(248,315,180,360,4);
floodfill(245,315,DARKGRAY);
delay(500);
}
setfillstyle(SOLID_FILL,YELLOW);
bar(100,5,500,40);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(150,10,"CONGRATS");
delay(2000);
//minion 2
//body
setfillstyle(SOLID_FILL,YELLOW);
arc(400,280,0,180,31);
line(369,280,369,365);
line(431,280,431,365);
arc(400,361,170,10,31);
floodfill(401,361,DARKGRAY);
//mouth
line(392,315,404,315);
arc(398,315,180,360,7);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(385,340,413,340);         // -
line(385,342,385,353);         // |
line(413,342,413,353);         // |
line(385,353,369,353);         // |
line(413,353,431,353);         // |
line(385,340,369,330);         // \
line(385,343,369,333);         // \
line(413,340,431,330);         // /
line(413,343,431,333);         // /
//pocket
line(392,348,404,348);
arc(398,349,180,359,7);
arc(369,353,280,359,10);
arc(430,353,180,269,10);
floodfill(386,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(385,288,369,288);
line(385,291,369,291);
arc(392,290,190,170,7);
floodfill(392,290,DARKGRAY);
line(415,288,431,288);
line(415,291,431,291);
arc(407,290,10,360,7);
floodfill(407,290,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(392,290,5);
floodfill(392,290,DARKGRAY);
circle(407,290,5);
floodfill(407,290,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(392,290,2);
floodfill(392,290,DARKGRAY);
circle(407,290,2);
floodfill(407,290,DARKGRAY);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(369,315,350,360);              //left
line(369,325,357,360);
line(350,360,357,360);
floodfill(351,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(353,363,130,30,6);
floodfill(353,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(431,315,457,360);              //right
line(431,325,450,360);
line(450,360,457,360);
floodfill(455,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(453,363,133,33,6);
floodfill(453,363,DARKGRAY);
//legs
setfillstyle(SOLID_FILL,BLUE);
rectangle(385,389,399,400);
floodfill(386,399,DARKGRAY);
rectangle(404,389,417,400);
floodfill(405,399,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,WHITE);
fillellipse(388,403,10,5);
floodfill(388,403,DARKGRAY);
fillellipse(408,403,10,5);
floodfill(408,403,DARKGRAY);
//minion 2 conver
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(389,312,407,325);
setfillstyle(SOLID_FILL,YELLOW);
line(392,315,404,315);
arc(398,315,180,360,4);
floodfill(395,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(389,312,407,325);
setfillstyle(SOLID_FILL,YELLOW);
line(390,315,406,315);
arc(398,315,180,360,7);
floodfill(395,315,DARKGRAY);
delay(500);
}
//mini 2 lang
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(250,10,"....PARTY....");
delay(1000);
int rx,ry,n,x2=50;
while(!kbhit())
{
for(i=0;i<500;i++);
{
setcolor(WHITE);
rx=rand()%600;
ry=rand()%400;
line(rx,ry,rx+1,ry-1);
}
delay(1000);
x2=(x2+10)%639;
}
//-----------------------------//scene-3-end//---------------------------//
//----------------------------//end//------------------------------------//
cleardevice();
setbkcolor(BROWN);
setcolor(LIGHTCYAN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
outtextxy(100,200,"THE END");
delay(2000);
cleardevice();
setbkcolor(BROWN);
setcolor(LIGHTGREEN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
outtextxy(120,50,"SEA COLLEGE ENGINEERING");
delay(1000);
setcolor(LIGHTGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(230,85,"COMPUTER SCIENCE");
delay(1000);
setcolor(LIGHTCYAN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
outtextxy(250,125,"PROJECT");
delay(1000);
setcolor(LIGHTGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(210,160,"COMPUTER GRAPHICS");
delay(1000);
setcolor(BLUE);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
outtextxy(240,215,"STUDENT");
delay(1000);
setcolor(LIGHTGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(240,260,"DEEPA KUMARI");
outtextxy(240,280,"1SP15CS026");

delay(5000);

exit(0);
//----------------------------//end//------------------------------------//
getch();
closegraph();
}

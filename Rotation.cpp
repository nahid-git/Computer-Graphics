#include<bits/stdc++.h>
#include<graphics.h>
#define PI 3.14
float angle, temp;

void triAngle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    setcolor(RED);
    line(320+x1,240-y1,320+x2,240-y2);
    setcolor(BLUE);
    line(320+x2,240-y2,320+x3,240-y3);
    setcolor(GREEN);
    line(320+x3,240-y3,320+x1,240-y1);
}
void rotateTriAngle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int a1,b1,a2,b2,a3,b3,p,q;
    printf("Enter rotate angle: \n");
    scanf("%f", &angle);
    temp=angle;
    angle=angle*(PI/180);
    printf("Enter pivot point: \n");
    scanf("%d%d", &p,&q);

    a1=p+(x1-p)*cos(angle)-(y1-q)*sin(angle);
    b1=q+(x1-p)*sin(angle)+(y1-q)*cos(angle);
    a2=p+(x2-p)*cos(angle)-(y2-q)*sin(angle);
    b2=q+(x2-p)*sin(angle)+(y2-q)*cos(angle);
    a3=p+(x3-p)*cos(angle)-(y3-q)*sin(angle);
    b3=q+(x3-p)*sin(angle)+(y3-q)*cos(angle);
    triAngle(a1,b1,a2,b2,a3,b3);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(0,240,640,240);
    line(320,0,320,480);

    int x1,y1,x2,y2,x3,y3;
    char c[100]="";
    printf("Enter first coordinate of Triangle: \n");
    scanf("%d%d", &x1,&y1);
    printf("Enter second coordinate of Triangle: \n");
    scanf("%d%d", &x2,&y2);
    printf("Enter third coordinate of Triangle: \n");
    scanf("%d%d", &x3,&y3);
    triAngle(x1,y1,x2,y2,x3,y3);
    rotateTriAngle(x1,y1,x2,y2,x3,y3);

    sprintf(c,"Rotate Triangle By %.0f Degree",temp);
    setcolor(GREEN);
    outtextxy(350,10,c);
    getch();
    closegraph();
}

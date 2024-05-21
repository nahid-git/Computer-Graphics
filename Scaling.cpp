#include<bits/stdc++.h>
#include<graphics.h>

void triAngle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    setcolor(RED);
    line(320+x1,240-y1,320+x2,240-y2);
    setcolor(GREEN);
    line(320+x2,240-y2,320+x3,240-y3);
    setcolor(BLUE);
    line(320+x3,240-y3,320+x1,240-y1);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(0,240,640,240);
    line(320,0,320,480);

    int x1,y1,x2,y2,x3,y3, sx,sy, a1,b1,a2,b2,a3,b3, p,q;
    char c[100]="";
    printf("Enter first coordinate of triangle: \n");
    scanf("%d%d",&x1,&y1);
    printf("Enter second coordinate of triangle: \n");
    scanf("%d%d",&x2,&y2);
    printf("Enter third coordinate of triangle: \n");
    scanf("%d%d",&x3,&y3);
    triAngle(x1,y1,x2,y2,x3,y3);
    printf("Enter scaling factor: \n");
    scanf("%d%d", &sx,&sy);
    sprintf(c,"Scaled By: %d %d", sx,sy);
    setcolor(GREEN);
    outtextxy(350,10,c);

    p=(x1+x2+x3)/3;
    q=(y1+y2+y3)/3;
    a1=p+(x1-p)*sx;
    b1=q+(y1-q)*sy;
    a2=p+(x2-p)*sx;
    b2=q+(y2-q)*sy;
    a3=p+(x3-p)*sx;
    b3=q+(y3-q)*sy;
    triAngle(a1,b1,a2,b2,a3,b3);

    getch();
    closegraph();
}

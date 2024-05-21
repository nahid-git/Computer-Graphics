#include<bits/stdc++.h>
#include<graphics.h>

void triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    line(320+x1,240-y1,320+x2,240-y2);
    line(320+x2,240-y2,320+x3,240-y3);
    line(320+x3,240-y3,320+x1,240-y1);
}

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");
    line(0,240,640,240);
    line(320,0,320,480);

    int x1,y1,x2,y2,x3,y3,tx,ty;
    char c[100]="";
    printf("Enter first coordinate: \n");
    scanf("%d%d", &x1,&y1);
    printf("Enter second coordinate: \n");
    scanf("%d%d", &x2,&y2);
    printf("Enter third coordinate: \n");
    scanf("%d%d", &x3,&y3);
    triangle(x1,y1,x2,y2,x3,y3);

    printf("Enter translation vector: \n");
    scanf("%d%d", &tx,&ty);
    sprintf(c,"Translated By: %d %d ",tx,ty);
    setcolor(GREEN);
    outtextxy(350,10,c);
    x1=x1+tx;
    y1=y1+ty;
    x2=x2+tx;
    y2=y2+ty;
    x3=x3+tx;
    y3=y3+ty;
    setcolor(RED);
    triangle(x1,y1,x2,y2,x3,y3);

    getch();
    closegraph();
}

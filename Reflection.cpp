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
    int x1,y1,x2,y2,x3,y3;
    char ch;
    printf("Enter Reflected Axis: \n");
    scanf("%c",&ch);
    //printf("%c",ch);
    char c[100]="";
    printf("Enter first coordinate of triangle: \n");
    scanf("%d%d", &x1,&y1);
    printf("Enter second coordinate of triangle: \n");
    scanf("%d%d", &x2,&y2);
    printf("Enter third coordinate of triangle: \n");
    scanf("%d%d", &x3,&y3);
    triAngle(x1,y1,x2,y2,x3,y3);
    sprintf(c,"Reflect By %c axis", ch);
    setcolor(GREEN);
    outtextxy(350,10,c);
    if(ch=='x' || ch=='X'){
        y1=-y1, y2=-y2, y3=-y3;
        triAngle(x1,y1,x2,y2,x3,y3);
    }
    else if(ch=='y' || ch=='Y'){
        x1=-x1, x2=-x2, x3=-x3;
        triAngle(x1,y1,x2,y2,x3,y3);
    }
    //z=xy plane
    else if(ch=='z' || ch=='Z'){
        x1=-x1, x2=-x2, x3=-x3;
        y1=-y1, y2=-y2, y3=-y3;
        triAngle(x1,y1,x2,y2,x3,y3);
    }
    //line y=x
    else{
        std::swap(x1,y1), std::swap(x2,y2), std::swap(x3,y3);
        triAngle(x1,y1,x2,y2,x3,y3);
    }
    getch();
    closegraph();

}

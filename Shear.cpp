#include<bits/stdc++.h>
#include<graphics.h>

void rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    line(320+x1,240-y1,320+x2,240-y2);
    line(320+x2,240-y2,320+x3,240-y3);
    line(320+x3,240-y3,320+x4,240-y4);
    line(320+x4,240-y4,320+x1,240-y1);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(0,240,640,240);
    line(320,0,320,480);

    int x1,y1,x2,y2,x3,y3,x4,y4, shx,shy, a1,b1,a2,b2,a3,b3,a4,b4;
    char ch, c[100]="";
    printf("Enter direction of shear: \n");
    scanf("%c",&ch);
    //printf("%c",ch);
    printf("Enter first coordinate: \n");
    scanf("%d%d", &x1,&y1);
    printf("Enter second coordinate: \n");
    scanf("%d%d", &x2,&y2);
    printf("Enter third coordinate: \n");
    scanf("%d%d", &x3,&y3);
    printf("Enter fourth coordinate: \n");
    scanf("%d%d", &x4,&y4);
    rectangle(x1, y1, x2, y2, x3, y3, x4, y4);

    if(ch=='x' || ch=='X'){
        printf("Enter shear parameter shx: \n");
        scanf("%d", &shx);
        a1=x1+shx*y1;
        a2=x2+shx*y2;
        a3=x3+shx*y3;
        a4=x4+shx*y4;
        b1=y1, b2=y2, b3=y3, b4=y4;
        rectangle(a1, b1, a2, b2, a3, b3, a4, b4);
    }
    else if(ch=='y' || ch=='Y'){
        printf("Enter shear parameter shy: \n");
        scanf("%d", &shy);
        b1=shy*x1+y1;
        b2=shy*x2+y2;
        b3=shy*x3+y3;
        b4=shy*x4+y4;
        a1=x1, a2=x2, a3=x3, a4=x4;
        rectangle(a1, b1, a2, b2, a3, b3, a4, b4);
    }

    sprintf(c,"%c-Direction Shear",ch);
    setcolor(GREEN);
    outtextxy(20,20,c);
    getch();
    closegraph();
}

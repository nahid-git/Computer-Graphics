#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>

// Function to draw the house
void drawHouse()
{
    line(100, 100, 150, 50);
    line(150, 50, 200, 100);
    line(150, 50, 350, 50);
    line(350, 50, 400, 100);

    rectangle(100, 100, 200, 200);
    rectangle(200, 100, 400, 200);
    rectangle(130, 130, 170, 200);
    rectangle(250, 120, 350, 180);

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(131, 131, WHITE);
    floodfill(201, 101, WHITE);

    setfillstyle(SOLID_FILL, RED);
    floodfill(101, 101, WHITE);
    floodfill(150, 52, WHITE);
    floodfill(163, 55, WHITE);
    floodfill(251, 121, WHITE);
}


int main()
{
    int gd=DETECT,gm;
    char a[] = "";
    initgraph(&gd,&gm, a);



    // Create a buffer for double buffering
    setactivepage(0);
    setvisualpage(1);

    // Draw the house off-screen
    drawHouse();

    for (int i = 0; i < 600; i++)
    {
        // Switch between drawing pages
        setactivepage(1 - getactivepage());
        setvisualpage(1 - getactivepage());

        // Clear the viewport instead of the entire screen
        clearviewport();

        // Redraw the house before drawing the circles
        drawHouse();

        line(50 + i, 405, 100 + i, 405);
        line(75 + i, 375, 125 + i, 375);
        line(50 + i, 405, 75 + i, 375);
        line(100 + i, 405, 100 + i, 345);
        line(150 + i, 405, 100 + i, 345);
        line(75 + i, 345, 75 + i, 370);
        line(70 + i, 370, 80 + i, 370);
        line(80 + i, 345, 100 + i, 345);

        circle(150 + i, 405, 30);
        circle(50 + i, 405, 30);

        delay(5);


    }

    getch();
    closegraph();
}

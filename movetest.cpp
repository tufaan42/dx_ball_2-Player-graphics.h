#include <graphics.h>
#include <dos.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    bool dbflag= false,closeflag=true;
    initwindow(500,500,"My Game",0, 0, dbflag, closeflag);
    char key='\0';
    int x1=100,y1=200,x2=300,y2=400;
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
        rectangle(x2,1,y2,19);
        rectangle(x1,479,y1,499);
    while(1){
            if(kbhit()){
                    key=getch();
            }
            if(key=='b')
       {
            x2=x2+10;
            y2=y2+10;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);
       }
       if(key=='m')
       {
            x2=x2-10;
            y2=y2-10;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);
       }
        delay(5);
        if(key=='d')
       {
            x1=x1+10;
            y1=y1+10;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);
       }
       if(key=='a')
       {
            x1=x1-10;
            y1=y1-10;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);
       }
        delay(5);
        key=getch();
        cleardevice();
            }
    getch();
    //closegraph();
   return 0;
}


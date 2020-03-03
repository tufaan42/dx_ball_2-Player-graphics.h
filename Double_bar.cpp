#include<bits/stdc++.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int d1();
int d2();
int main()
{
    cout<<d1();
    delay(2000);
    cout<<endl<<d2();
    char key='\0';
    int x1=100,y1=200,x2=300,y2=400;
     bool dbflag= false,closeflag=true;
    initwindow(500,500,"My Game",0, 0, dbflag, closeflag);
    rectangle(x2,1,y2,19);
        rectangle(x1,479,y1,499);
float i,j,z,p,q,x,y,c,check1,check2;
int magic=1;
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    //setfillstyle(SOLID_FILL, getmaxcolor());
    //floodfill(300,300,RED);
    //for(int i=100;i<501;i=i+100){
            x=250;
            y=250;
            check1=10;
            check2=10;
            for(magic=1;1;magic++){

                    if(magic>8) magic=1;
                    j=0;
                    i=0;
                if(x==250 && y==250){
                check1=10;
                check2=10;
                p=x;
                q=y;
                for(z=0;z<499;z++){
                        i=z*2*2;
                        j=z*1*2;
                        x=p+i;
                        y=q+j;
                        for(i=10;i>=0;i=i-0.5)
                        circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                        //setfillstyle(SOLID_FILL, YELLOW);
                        //floodfill(x,y,YELLOW);
                    delay(10);
                    if((x>=x1 && x<=y1-20 && y+10>479) || x>489|| y>489 ) break;
                    cleardevice();
                }
                }

                if(magic==1/* && check1<490 && check2<=10 && check2-y<0*/){
                check1=x;
                check2=y;
                p=x;
                q=y;
                for(z=0;z<499;z++){
                        if(kbhit()){
                    key=getch();
                    }
            if(key=='m')
       {
            x2=x2+30;
            y2=y2+30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }
       if(key=='b')
       {
            x2=x2-30;
            y2=y2-30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }

        if(key=='d')
       {
            x1=x1+30;
            y1=y1+30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }
       if(key=='a')
       {
            x1=x1-30;
            y1=y1-30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }

                        i=z*2*2;
                        j=z*1*2;
                        x=p-i;
                        y=q+j;
                        for(i=10;i>=0;i=i-0.5)
                        circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                        //setfillstyle(SOLID_FILL, YELLOW);
                        //floodfill(x,y,YELLOW);
                    delay(10);
                    if((x>=x1 && x<=y1-20 && y+10>479) || x<11|| y>489 ) break;
                    cleardevice();
                }
                }
                if(magic==5 /*&& ((check1>489 && check2>10) && (check2-y)<0)*/){
                check1=x;
                check2=y;
                p=x;
                q=y;
                for(z=0;z<499;z++){
                        if(kbhit()){
                    key=getch();
                    }
            if(key=='m')
       {
            x2=x2+30;
            y2=y2+30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }
       if(key=='b')
       {
            x2=x2-30;
            y2=y2-30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }

        if(key=='d')
       {
            x1=x1+30;
            y1=y1+30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }
       if(key=='a')
       {
            x1=x1-30;
            y1=y1-30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }

                        i=z*2*2;
                        j=z*1*2;
                        x=p-i;
                        y=q-j;
                        for(i=10;i>=0;i=i-0.5)
                    circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                    //floodfill(x-2,y-2,YELLOW);
                    delay(10);
                if((x>=x2 && x<=y2+20 && y-10<19) || x<11|| y<11 ) break;
                    cleardevice();
                }
                }

                if(magic==3 /*&& (check1>10 && check2>=490)*/){
                check1=x;
                check2=y;
                p=x;
                q=y;
                for(z=0;z<499;z++){
                        if(kbhit()){
                    key=getch();
                    }
            if(key=='m')
       {
            x2=x2+30;
            y2=y2+30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }
       if(key=='b')
       {
            x2=x2-30;
            y2=y2-30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }

        if(key=='d')
       {
            x1=x1+30;
            y1=y1+30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }
       if(key=='a')
       {
            x1=x1-30;
            y1=y1-30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }

                        i=z*4;
                        j=z*4;
                        x=p+i;
                        y=q-j;
                        for(i=10;i>=0;i=i-0.5)
                    circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                    //floodfill(x-2,y-2,RED);
                    delay(10);
                    if((x>=x2 && x<=y2+20 && y-10<19) || x>489|| y<11 ) break;
                    cleardevice();
                }
                }
                if(magic==4 && (check1<=10 && check2 <490 )&& check2-y>0){
                check1=x;
                check2=y;
                p=x;
                q=y;
                    for(z=0;z<499;z++){
                            if(kbhit()){
                    key=getch();
                    }
            if(key=='m')
       {
            x2=x2+30;
            y2=y2+30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }
       if(key=='b')
       {
            x2=x2-30;
            y2=y2-30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }

        if(key=='d')
       {
            x1=x1+30;
            y1=y1+30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }
       if(key=='a')
       {
            x1=x1-30;
            y1=y1-30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }

                        i=z*4;
                        j=z*4;
                        x=p+i;
                        y=q+j;
                        for(i=10;i>=0;i=i-0.5)
                    circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                    //floodfill(x-2,y-2,BLUE);
                    delay(10);
                if((x>=x1 && x<=y1-20 && y+10>479) || x>489|| y>489 ) break;
                    cleardevice();
                }
                }
                if(magic==7 /*&& (check1>10 && check2<=10)*/){
                check1=x;
                check2=y;
                p=x;
                q=y;
                for(z=0;z<499;z++){
                        if(kbhit()){
                    key=getch();
                    }
            if(key=='m')
       {
            x2=x2+30;
            y2=y2+30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }
       if(key=='b')
       {
            x2=x2-30;
            y2=y2-30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }

        if(key=='d')
       {
            x1=x1+30;
            y1=y1+30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }
       if(key=='a')
       {
            x1=x1-30;
            y1=y1-30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }

                        i=z*4;
                        j=z*4;
                        x=p-i;
                        y=q+j;
                        for(i=10;i>=0;i=i-0.5)
                        circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                        //setfillstyle(SOLID_FILL, YELLOW);
                        //floodfill(x,y,YELLOW);
                    delay(10);
                    if((x>=x1 && x<=y1-20 && y+10>479) || x<11|| y>489 ) break;
                    cleardevice();
                }
                }
                if(magic==2 /*&& (check1>=490 && check2>10)|| check2-y<0*/){
                check1=x;
                check2=y;
                p=x;
                q=y;
                for(z=0;z<499;z++){
                        if(kbhit()){
                    key=getch();
                    }
            if(key=='m')
       {
            x2=x2+30;
            y2=y2+30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }
       if(key=='b')
       {
            x2=x2-30;
            y2=y2-30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }

        if(key=='d')
       {
            x1=x1+30;
            y1=y1+30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }
       if(key=='a')
       {
            x1=x1-30;
            y1=y1-30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }

                        i=z*4;
                        j=z*4;
                        x=p-i;
                        y=q-j;
                        for(i=10;i>=0;i=i-0.5)
                    circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                    //floodfill(x-2,y-2,YELLOW);
                    delay(10);
                if((x>=x2 && x<=y2+20 && y-10<19) || x<11 || y<11 ) break;
                    cleardevice();
                }
                }
                if(magic==6 /*&& check1<490 && check2>=490*/){
                check1=x;
                check2=y;
                p=x;
                q=y;
                for(z=0;z<499;z++){
                        if(kbhit()){
                    key=getch();
                    }
            if(key=='m')
       {
            x2=x2+30;
            y2=y2+30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }
       if(key=='b')
       {
            x2=x2-30;
            y2=y2-30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }

        if(key=='d')
       {
            x1=x1+30;
            y1=y1+30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }
       if(key=='a')
       {
            x1=x1-30;
            y1=y1-30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }

                        i=z*2*2;
                        j=z*1*2;
                        x=p-i;
                        y=q+j;
                        for(i=10;i>=0;i=i-0.5)
                    circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                    //floodfill(x-2,y-2,RED);
                    delay(10);
                    if((x>=x1 && x<=y1-20 && y+10>479) || x<11|| y>489 ) break;
                    cleardevice();
                }
                }
                if(magic==8/*(check1<=10) && (check2-y)<0*/){
                check1=x;
                check2=y;//10
                p=x;
                q=y;
                    for(z=0;z<499;z++){
                            if(kbhit()){
                    key=getch();
                    }
            if(key=='m')
       {
            x2=x2+30;
            y2=y2+30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }
       if(key=='b')
       {
            x2=x2-30;
            y2=y2-30;
             rectangle(x2,1,y2,19);
             rectangle(x1,479,y1,499);key='\0';
       }

        if(key=='d')
       {
            x1=x1+30;
            y1=y1+30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }
       if(key=='a')
       {
            x1=x1-30;
            y1=y1-30;
             rectangle(x1,479,y1,499);
             rectangle(x2,1,y2,19);key='\0';
       }

                        i=z*3*2;
                        j=z*1*2;
                        x=p+i;
                        y=q+j;
                        for(i=10;i>=0;i=i-0.5)
                    circle(x,y,i);rectangle(x1,479,y1,499);rectangle(x2,1,y2,19);
                    //floodfill(x-2,y-2,BLUE);
                    delay(10);
                if((x>=x1 && x<=y1-20 && y+10>479) || (x>489|| y>489) ) break;
                    cleardevice();
                }
                }

            }
    cout<<"which letter is player one X or O  ?"<<endl;
    getch();
    return 0;
}
/*int d1(){
    int p,i;
    srand(time(0));
    for(i=1;i<6;i++){
        p=(1+rand())%4;
    }
    if(p==0) return 1;
    return p;
}
int d2(){
    int p,i;
    srand(time(0));
    for(int i;i<6;i++){
        p=(1+rand())%4;
    }
    if(p==0) return 1;
    return p;
}*/


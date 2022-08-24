#include<stdio.h>
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include<OpenGL/glu.h>
#include <GLUT/glut.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdlib.h>

#include<math.h>


void display();

void hindlegbigtad();

void lastpage();

void sectext();

void thirdtext();

void fourthtext();

void fifthtext();

void sixthtext();

void seventhtext();

void firstpagetext();

void secondpagetext();

int count=0;

float throatpmp=6,inct=0.5;

void key(unsigned char k,int x,int y);

void embcluster();

void bigtad();

void frog(int n);

void justeggs();

void swamp();

void embrot();

void roundemb();

void justembclust();

void embtail();

void firstpage();

void egg();

void arrow();

void throat();

void embryo(float n);

void plant();

void ground();

void stones();

void bubbles();

void tadlegbig();

void bigtadclust();// moving bigger tadpoles

void tadlegs(float legspd); //tadpoles with hind legs

void tadlegclust(); //cluster of tadpoles with hind legs

float i=0;

float mvx=3.8,mvy=-7;

float stntrans=0,stntrans1=0; //to move background

void spin()

{

    glutPostRedisplay();

}

int main(int argc,char *argv[])

{



    glutInit(&argc,argv);

    glutCreateWindow("new");

    glutDisplayFunc(display);

    glutIdleFunc(spin);

    glutKeyboardFunc(key);



    glutMainLoop();



}

void display()

{



//float a=0;

 glEnable(GL_BLEND);

glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);



    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glClearColor(1,1,1,1);

   // glColor3f(1,0,0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glOrtho(-10,10,-10,10,-10,10);

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    // BUG

    glTranslatef(20,20,0);

    embtail();

    glTranslatef(-20,-20,0);

    if(count==0)

    {

        firstpage();

        firstpagetext();





    }



   else if(count==1)

    {

        sectext();

        glClearColor(0.4,0.4,1,0);

        bubbles();

        ground();

        stones();

        justeggs();

        justembclust();

        plant();

    }

   else if(count==2)

    {

        thirdtext();

        glClearColor(0.4,0.4,1,0);

        ground();

        stones();

        embrot();

        plant();

    }



    else if(count==3)



{

    fourthtext();

    glClearColor(0.4,0.4,1,0);

    ground();

     mvx=mvx+0.005;

    mvy=mvy+0.002;

    if(mvx<=10&&mvy<=10)

    {

            stones();

            justeggs();

            plant();

            glPushMatrix();

            glTranslatef(mvx,mvy,0);

            glRotatef(-45,0,0,1);

            embcluster();

            glTranslatef(-mvx,-mvy,0);

            glPopMatrix();





    }



if(mvx>10)

{





    glPushMatrix();

    glTranslatef(10,-4.52,0);

    glRotatef(-45,0,0,1);

    embcluster();

    glTranslatef(-6,-6,0);

    glPopMatrix();

    stntrans=stntrans-0.006;

    glPushMatrix();

    glTranslatef(stntrans,0,0);

   // bubbles();



    stones();

    glTranslatef(-stntrans,0,0);

    if(stntrans<-9)

        stntrans=20;

    glPopMatrix();

    stntrans1-=0.006;

    glTranslatef(stntrans1,0,0);

    plant();

    glTranslatef(-stntrans1,0,0);

    if(stntrans1<-20)

        stntrans1=5;

}



}

else if(count==4)

{

    glClearColor(0.4,0.4,1,0);

    glTranslatef(-20,-20,0);

    bigtad();

    glTranslatef(20,20,0);

    ground();

    //glPushMatrix();

    glTranslatef(6.2,3.7,0);

    bigtadclust();

    glTranslatef(-6.2,-3.7,0);

   //glPopMatrix();

    stntrans=stntrans-0.006;

    glPushMatrix();

    glTranslatef(stntrans,0,0);

   // bubbles();



    stones();

    glTranslatef(-stntrans,0,0);

    if(stntrans<-9)

        stntrans=20;

    glPopMatrix();

    stntrans1-=0.006;

    glTranslatef(stntrans1,0,0);

    plant();

    glTranslatef(-stntrans1,0,0);

    if(stntrans1<-20)

        stntrans1=5;

}

else if(count==5)

{

    fifthtext();

    glClearColor(0.4,0.4,1,0);

    ground();

    glTranslatef(20,20,0);

    tadlegs(4);

    glTranslatef(-20,-20,0);

    glTranslatef(6.2,3.7,0);

    tadlegclust();

    glTranslatef(-6.2,-3.7,0);

   //glPopMatrix();

    stntrans=stntrans-0.006;

    glPushMatrix();

    glTranslatef(stntrans,0,0);

   // bubbles();



    stones();

    glTranslatef(-stntrans,0,0);

    if(stntrans<-9)

        stntrans=20;

    glPopMatrix();

    stntrans1-=0.006;

    glTranslatef(stntrans1,0,0);

    plant();

    glTranslatef(-stntrans1,0,0);

    if(stntrans1<-20)

        stntrans1=5;

}

else if(count==6)

{

    sixthtext();

    glClearColor(0.4,0.4,1,0);

    ground();

    glPushMatrix();

    glTranslatef(0,-4.5,0);

    glScalef(0.7,0.8,0);

    tadlegbig();

    glTranslatef(0,4.5,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(1.7,-6,0);

    glScalef(0.6,0.7,0);

    tadlegbig();

    glTranslatef(-1.7,6,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-2,-6.5,0);

    glScalef(0.5,0.6,0);

    tadlegbig();

    glTranslatef(-2,6.5,0);

    glPopMatrix();

     stntrans=stntrans-0.006;

    glPushMatrix();

    glTranslatef(stntrans,0,0);

   // bubbles();



    stones();

    glTranslatef(-stntrans,0,0);

    if(stntrans<-9)

        stntrans=20;

    glPopMatrix();

    stntrans1-=0.006;

    glTranslatef(stntrans1,0,0);

    plant();

    glTranslatef(-stntrans1,0,0);

    if(stntrans1<-20)

        stntrans1=5;



}

else if(count==7)

{

    seventhtext();

    swamp();

}

else if(count==8)

    lastpage();

else

    exit(0);

    glFlush();





}

void justembclust()

{

    glPushMatrix();

    glTranslatef(-7.9,-8.8,0);

    roundemb();

    glTranslatef(7.9,8.8,0);

    glPopMatrix();







    glPushMatrix();

    glTranslatef(-5.7,-8.3,0);

    roundemb();

    glTranslatef(5.7,8.3,0);

    glPopMatrix();





    glPushMatrix();

    glTranslatef(-7.3,-8.3,0);

    roundemb();

    glTranslatef(7.3,8.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-7.3,-7.3,0);

    roundemb();

    glTranslatef(7,7.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.5,-8.2,0);

    roundemb();

    glTranslatef(6.5,8.2,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-9,0);

    roundemb();

    glTranslatef(6.8,9,0);

    glPopMatrix();





}

void ground()

{

    glColor3f(0.5,0.3,0);

    glBegin(GL_POLYGON);

    glVertex2f(-15,-9);

    glVertex2f(15,-9);

    glVertex2f(15,-15);

    glVertex2f(-15,-15);

    glEnd();

}

void embrot()

{



    glPushMatrix();

    glTranslatef(5,-7,0);

    stones();

    glTranslatef(-5,7,0);

    glPopMatrix();





    glPushMatrix();

    glTranslatef(-7.9,-8.8,0);

    egg();

    embryo(3.6);

    glTranslatef(7.9,8.8,0);

    glPopMatrix();







    glPushMatrix();

    glTranslatef(-5.7,-8.3,0);

    egg();

    embryo(2.9);

    glTranslatef(5.7,8.3,0);

    glPopMatrix();





    glPushMatrix();

    glTranslatef(-7.3,-8.3,0);

    egg();

    embryo(4.1);

    glTranslatef(7.3,8.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-7.3,-7.3,0);

    egg();

    embryo(3.3);

    glTranslatef(7,7.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.5,-8.2,0);

    egg();

    embryo(3);

    glTranslatef(6.5,8.2,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-9,0);

    egg();

    embryo(3.6);

    glTranslatef(6.8,9,0);

    glPopMatrix();

}

void justeggs()

{

    glPushMatrix();

    glTranslatef(-7.9,-8.8,0);

    egg();

    glTranslatef(7.9,8.8,0);

    glPopMatrix();







    glPushMatrix();

    glTranslatef(-5.7,-8.3,0);

    egg();

    glTranslatef(5.7,8.3,0);

    glPopMatrix();





    glPushMatrix();

    glTranslatef(-7.3,-8.3,0);

    egg();

    glTranslatef(7.3,8.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-7.3,-7.3,0);

    egg();

    glTranslatef(7,7.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.5,-8.2,0);

    egg();

    glTranslatef(6.5,8.2,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-9,0);

    egg();

    glTranslatef(6.8,9,0);

    glPopMatrix();

}

void stones()

{

    float j;

    glColor3f(0.2,0.1,0.1);



    glBegin(GL_POLYGON);

    for(j=0;j<=360;j++)

        glVertex2f(cos(j*3.142/180)*0.5-9,sin(j*3.142/180)*0.3-9);

        glEnd();

    glColor3f(0,0,0);

    glBegin(GL_LINE_LOOP);

        for(j=0;j<=360;j++)

        glVertex2f(cos(j*3.142/180)*0.5-9,sin(j*3.142/180)*0.3-9);

    glEnd();



    glColor3f(0.2,0.1,0.1);

    glBegin(GL_POLYGON);

    for(j=0;j<=360;j++)

        glVertex2f(cos(j)*0.4-8.7,sin(j)*0.2-9.2);

    glEnd();

    glColor3f(0,0,0);

    glBegin(GL_LINE_LOOP);

        for(j=0;j<=360;j++)

        glVertex2f(cos(j*3.142/180)*0.4-8.7,sin(j*3.142/180)*0.2-9.2);

    glEnd();



    glColor3f(0.2,0.1,0.1);

    glBegin(GL_POLYGON);

    for(j=0;j<=360;j++)

        glVertex2f(cos(j*3.142/180)*0.4-8.3,sin(j*3.142/180)*0.2-8.9);

    glEnd();

    glColor3f(0,0,0);

    glBegin(GL_LINE_LOOP);

        for(j=0;j<=360;j++)

    glVertex2f(cos(j*3.142/180)*0.4-8.3,sin(j*3.142/180)*0.2-8.9);

    glEnd();

}

void plant()

{

//    float k;

    glColor3f(0,0.3,0);

    glPushMatrix();

    glBegin(GL_POLYGON);

    glVertex2f(9,-9);

    glVertex2f(8.65,-7.6);

    glVertex2f(8.6,-7.5);

    glColor3f(0,1,0);

    glVertex2f(8.8,-9);

    glEnd();

    glColor3f(0,0.3,0);

    glBegin(GL_POLYGON);

    glVertex2f(8.9,-9);

    glVertex2f(9.12,-6);

    glVertex2f(9.2,-5.8);

    glColor3f(0,1,0);

    glVertex2f(9.15,-6);

    glVertex2f(9,-9);

    glEnd();

    glPopMatrix();

}

float a=0;

void embryo(float n)

{

    float l;



   glTranslatef(-0.1,-0.1,0);

   a=a+0.07;

   glRotatef(-a*0.8*n,0,0,1);





//body

    glColor3f(0,0,0);

    glBegin(GL_POLYGON);

    for(l=0;l<=359;l++)

    glVertex2f(cos(l*3.142/180)*0.26+0.1,sin(l*3.142/180)*0.26+0.1);

    glEnd();

//eye



    glColor3f(1,1,1);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

    glVertex2f(cos(l*3.142/180)*0.05+0.2,sin(l*3.142/180)*0.05+0.2);

    glEnd();

    glColor3f(0,0,0);

    glPointSize(2);

    glBegin(GL_POINTS);

    glVertex2f(0.21,0.21);

    glEnd();

//tail

    glColor3f(0,0,0);

    glBegin(GL_POLYGON);

    glVertex2f(0.08,-0.4);

    glVertex2f(0.08,-0.15);

    glVertex2f(-0.1,-0.02);

    glEnd();

    glTranslatef(0.1,0.1,0);



}

int tailrot=10;

void embtail()

{

    float l;

     glColor3f(0,0,0);

    glBegin(GL_POLYGON);

    for(l=0;l<=359;l++)

    glVertex2f(cos(l*3.142/180)*0.26+0.1,sin(l*3.142/180)*0.26+0.1);

    glEnd();

//eye



    glColor3f(1,1,1);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

    glVertex2f(cos(l*3.142/180)*0.05+0.2,sin(l*3.142/180)*0.05+0.2);

    glEnd();

    glColor3f(0,0,0);

    glPointSize(2);

    glBegin(GL_POINTS);

    glVertex2f(0.21,0.21);

    glEnd();

//tail

    glColor3f(0,0,0);

    glPushMatrix();



    if(tailrot==10)

    {

        tailrot=-10;

    }

    else

        tailrot=10;

    glRotatef(tailrot,0,0,1);

    glBegin(GL_POLYGON);

    glVertex2f(0.08,-0.4);

    glVertex2f(0.08,-0.15);

    glVertex2f(-0.1,-0.02);

    glEnd();

   // glTranslatef(-0.08,0.4,0);

    glPopMatrix();

    glTranslatef(0.1,0.1,0);

}

void egg()

{

     float l;

    glColor4f(0.9,0.9,0.9,0.5);

    glBegin(GL_POLYGON);



    for(l=0;l<=360;l++)

    glVertex2f(cos(l*3.142/180)*0.45-0.1,sin(l*3.142/180)*0.65-0.1);

    glEnd();

}

void roundemb()

{

    float l;

    glColor3f(0,0,0);

    glBegin(GL_POLYGON);



    for(l=0;l<=360;l++)

    glVertex2f(cos(l*3.142/180)*0.25-0.1,sin(l*3.142/180)*0.45-0.1);

    glEnd();



}



void embcluster()

{



    glPushMatrix();

    glTranslatef(-7.9,-8.8,0);

    embtail();

    glTranslatef(7.9,8.8,0);

    glPopMatrix();







    glPushMatrix();

    glTranslatef(-5.7,-8.3,0);

    embtail();

    glTranslatef(5.7,8.3,0);

    glPopMatrix();





    glPushMatrix();

    glTranslatef(-7.3,-8.3,0);

    embtail();

    glTranslatef(7.3,8.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-7.3,-7.3,0);

    embtail();

    glTranslatef(7,7.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.5,-8.2,0);

    embtail();

    glTranslatef(6.5,8.2,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-9,0);

    embtail();

    glTranslatef(6.8,9,0);

    glPopMatrix();

}

float bubmvx=5,bubmv=0; //to move bubbles

void bubbles()

{   float l;

    glColor3f(1,1,1);

    bubmv=bubmv+0.01;

    if(bubmv>15)

       {

           bubmv=-7;

           bubmvx=rand()%10;

       }

    glPushMatrix();

    glTranslatef(bubmvx,bubmv,0);

    glBegin(GL_LINE_LOOP);

    for(l=0;l<=360;l++)

    glVertex2f(cos(l*3.142/180)*0.28-3,sin(l*3.142/180)*0.38-8.5);

    glEnd();

    glBegin(GL_LINE_LOOP);

    for(l=0;l<=360;l++)

    glVertex2f(cos(l*3.142/180)*0.2-3.6,sin(l*3.142/180)*0.3-8);

    glEnd();

     glBegin(GL_LINE_LOOP);

    for(l=0;l<=360;l++)

    glVertex2f(cos(l*3.142/180)*0.13-3.1,sin(l*3.142/180)*0.2-7.6);

    glEnd();

    glTranslatef(-bubmvx,-bubmv,0);

    glPopMatrix();

}

void key(unsigned char k,int x,int y)

{



    if(k=='n')

        count++;

    else if(k=='q')

            exit(0);

    else if(k=='r')

        count=1;

}

int tswing=6;

void bigtad()

{

    float l;

    glColor3f(0,0.1,0);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.4,sin(l*3.142/180)*0.35);

    glEnd();

    // Tail

    glPushMatrix();

    if(tswing==6)

        tswing=-6;

    else

        tswing=6;

    glRotatef(tswing,0,0,1);

    glBegin(GL_POLYGON);

    glVertex2f(-0.2,0.15);

    glVertex2f(-0.8,0.1);

    glVertex2f(-1.2,0);

    glVertex2f(-0.8,-0.1);

    glVertex2f(-0.2,-0.15);

    glEnd();



    glPopMatrix();

    glPushMatrix();

    glTranslatef(0.3,0.1,0);



//Eye

    glColor3f(1,1,1);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.06,sin(l*3.142/180)*0.06);

    glEnd();

    glTranslatef(-0.3,-0.1,0);

    glPopMatrix();

    glPushMatrix();

    glPointSize(3);

    glColor3f(0,0,0);

    glBegin(GL_POINTS);

    glVertex2f(0.32,0.1);

    glEnd();



    glPopMatrix();





}

void bigtadclust()

{

  glPushMatrix();

 // glTranslatef(-8.2,-8.8,0);

    glTranslatef(20,20,0);

    bigtad();

    glTranslatef(8.2,8.8,0);

    glPopMatrix();







    glPushMatrix();

    glTranslatef(-5.3,-8.5,0);

    bigtad();

    glTranslatef(5.3,8.5,0);

    glPopMatrix();





    glPushMatrix();

    glTranslatef(-7.8,-8,0);

    bigtad();

    glTranslatef(7.8,8,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-7.3,-7.3,0);

    bigtad();

    glTranslatef(7,7.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.5,-8.2,0);

    bigtad();

    glTranslatef(6.5,8.2,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-9.2,0);

    bigtad();

    glTranslatef(6.8,9.2,0);

    glPopMatrix();

}

int tswing2=6;

float legrot=0,inc=0.5;

void tadlegs(float legspd)

{

    float l,newlegrot;

    glPushMatrix();

    glColor3f(0,0.4,0);

    glScalef(1.5,1.5,1.5);

    //body

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.4,sin(l*3.142/180)*0.35);

    glEnd();

    //leg

    if(legrot==0)

        inc=-inc;

    if(legrot==-90)

        inc=-inc;

    legrot+=inc*0.5;

    newlegrot=legrot*legspd;

    glPushMatrix();

    glTranslatef(0,-0.1,0);

    glRotatef(newlegrot,0,0,1);







        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.07-0.2,sin(l*3.142/180)*0.07-0.1);

        glEnd();

        glBegin(GL_POLYGON);

        glVertex2f(-0.28,-0.1);

        glVertex2f(-0.25,-0.15);

        glVertex2f(-0.247,-0.3);

        glVertex2f(-0.242,-0.4);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.2,-0.45);

        glVertex2f(-0.155,-0.4);

        glVertex2f(-0.15,-0.3);

        glVertex2f(-0.14,-0.15);

        glVertex2f(-0.14,-0.1);

        glEnd();

    //feet

        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.28,-0.56);

        glVertex2f(-0.19,-0.45);





        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.19,-0.56);

        glVertex2f(-0.17,-0.45);



        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.1,-0.56);

        glVertex2f(-0.16,-0.4);



        glEnd();

    glPopMatrix();

    if(tswing2==6)

        tswing2=-6;

    else

        tswing2=6;

    glPushMatrix();

    glRotatef(tswing2,0,0,1);

    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

    glVertex3f(-0.2,0.2,-1);

    glVertex3f(-0.4,0.15,-1);

    glVertex3f(-0.8,0.1,-1);

    glVertex3f(-0.4,0.02,-1);

    glVertex3f(-0.2,0,-1);

    glEnd();

    glPopMatrix();



   glColor3f(1,1,1);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.06+0.25,sin(l*3.142/180)*0.09+0.12);

    glEnd();

    glTranslatef(-0.3,-0.1,0);

    glPopMatrix();

    glPushMatrix();

    glPointSize(3);

    glColor3f(0,0,0);

    glPointSize(6);

    glBegin(GL_POINTS);

    glVertex2f(0.4,0.148);

    glEnd();



    glEnd();

    glPopMatrix();

}

void tadlegclust()

{

     glPushMatrix();

    glTranslatef(-8.4,-9.2,0);

    tadlegs(0.3);

    glTranslatef(8.4,9.2,0);

    glPopMatrix();







    glPushMatrix();

    glTranslatef(-5.3,-8.5,0);

    tadlegs(0.6);

    glTranslatef(5.3,8.5,0);

    glPopMatrix();





    glPushMatrix();

    glTranslatef(-7.8,-8,0);

    tadlegs(0.9);

    glTranslatef(7.8,8,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-6.7,0);

    tadlegs(0.7);

    glTranslatef(6.8,6.7,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.5,-8.2,0);

    tadlegs(0.5);

    glTranslatef(6.5,8.2,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-9.2,0);

    glTranslatef(20,20,0);

    tadlegs(0.7);

    glTranslatef(6.8,9.2,0);

    glPopMatrix();

}

float legrot1=0,inc1=0.5;

void tadlegbig()

{

     float l;/*newlegrot,legspd;*/

//body

    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

    glVertex2f(-1.6,0);

    glVertex2f(-1.55,0.1);

    glVertex2f(-1.5,0.25);

    glVertex2f(-1.4,0.4);

    glVertex2f(-1.3,0.45);

    glVertex2f(-1.2,0.5);

    glVertex2f(-1.1,0.54);

    glVertex2f(-1,0.6);

    glVertex2f(-0.9,0.65);

    glVertex2f(-0.7,0.75);

    glVertex2f(-0.6,0.77);

    glVertex2f(-0.5,0.79);

    glVertex2f(-0.4,0.8);

    glVertex2f(-0.3,0.79);

    glVertex2f(-0.2,0.77);

    glVertex2f(-0.1,0.75);

    glVertex2f(0,0.72);

    glVertex2f(0.1,0.7);

    glVertex2f(0.2,0.68);

    glVertex2f(0.3,0.65);

    glVertex2f(0.4,0.62);

    glVertex2f(0.5,0.6);

    glVertex2f(0.6,0.56);

    glVertex2f(0.7,0.5);

    glVertex2f(0.8,0.42);

    glVertex2f(0.9,0.35);

    glVertex2f(1,0.29);

    glVertex2f(1.1,0.2);

    glVertex2f(1.2,0.15);

    glVertex2f(1.3,0.03);

    glVertex2f(1.33,0);

    glVertex2f(1.32,-0.06);

    glVertex2f(1.3,-0.1);

    glVertex2f(1.2,-0.2);

    glVertex2f(1.1,-0.23);

    glVertex2f(1,-0.28);

    glVertex2f(0.9,-0.3);

    glVertex2f(0.8,-0.36);

    glVertex2f(0.7,-0.4);

    glVertex2f(0.6,-0.46);

    glVertex2f(0.5,-0.5);

    glVertex2f(0.4,-0.53);

    glVertex2f(0.3,-0.58);

    glVertex2f(0.2,-0.6);

    glVertex2f(0.1,-0.64);

    glVertex2f(0,-0.67);

    glVertex2f(-0.1,-0.7);

    glVertex2f(-0.2,-0.73);

    glVertex2f(-0.3,-0.73);

    glVertex2f(-0.4,-0.69);

    glVertex2f(-0.5,-0.65);

    glVertex2f(-0.6,-0.63);

    glVertex2f(-0.7,-0.6);

    glVertex2f(-0.8,-0.58);

    glVertex2f(-0.9,-0.55);

    glVertex2f(-1,-0.52);

    glVertex2f(-1.1,-0.45);

    glVertex2f(-1.2,-0.39);

    glVertex2f(-1.4,-0.33);

    glVertex2f(-1.6,-0.28);

    glEnd();

    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.9-0.7,sin(l*3.142/180)*0.5-0.38);

    glEnd();

//eye bump

    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.3+0.67,sin(l*3.142/180)*0.3+0.33);

    glEnd();

//eye

    glColor3f(1,1,1);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.2+0.68,sin(l*3.142/180)*0.2+0.31);

    glEnd();

    glColor3f(0,0,0);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.15+0.7,sin(l*3.142/180)*0.15+0.31);

    glEnd();

//front leg

    glPushMatrix();

    glTranslatef(0.5,-0.1,0);

    glScalef(1.5,1.5,0);

     if(legrot1==40)

        inc1=-inc1;

    if(legrot1==-10)

        inc1=-inc1;

    legrot1+=inc1*0.5;

    glPushMatrix();

    glTranslatef(0,-0.05,0);

    glRotatef(legrot1,0,0,1);







        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.07-0.2,sin(l*3.142/180)*0.07-0.1);

        glEnd();

        glBegin(GL_POLYGON);

        glVertex2f(-0.28,-0.1);

        glVertex2f(-0.25,-0.15);

        glVertex2f(-0.247,-0.3);

        glVertex2f(-0.242,-0.4);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.2,-0.45);

        glVertex2f(-0.155,-0.4);

        glVertex2f(-0.15,-0.3);

        glVertex2f(-0.14,-0.15);

        glVertex2f(-0.14,-0.1);

        glEnd();

    //feet

        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.28,-0.56);

        glVertex2f(-0.19,-0.45);





        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.19,-0.56);

        glVertex2f(-0.17,-0.45);



        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.1,-0.56);

        glVertex2f(-0.16,-0.4);



        glEnd();

    glTranslatef(-0.5,0.1,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(0,0.25,0);

    glRotatef(legrot1*0.1,0,0,1);

    hindlegbigtad();

    glTranslatef(0,-0.25,0);

    glPopMatrix();

}

float tswing3=6,inc3=0.5;

void hindlegbigtad()

{

    float l;

     glColor3f(0,0.45,0);

    glBegin(GL_POLYGON);

    glVertex2f(-1.15,-0.2);

    glVertex2f(-1.05,-0.25);

    glVertex2f(-0.75,-0.3);

    glVertex2f(-0.65,-0.4);

    glVertex2f(-0.62,-0.7);

    glVertex2f(-0.65,-0.7);

    glVertex2f(-0.75,-0.7);

    glVertex2f(-0.85,-0.65);

    glVertex2f(-1.15,-0.65);

    glEnd();

            glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.2-1.15,sin(l*3.142/180)*0.2-0.42);

        glEnd();



//hind leg shin

    glBegin(GL_POLYGON);

    glVertex2f(-0.63,-0.7);

    glVertex2f(-0.8,-0.9);

    glVertex2f(-1,-1.2);

    glVertex2f(-1.1,-1.3);

    glVertex2f(-1.2,-1.35);

    glVertex2f(-1.2,-1.1);

    glVertex2f(-1.1,-0.94);

    glVertex2f(-1,-0.85);

    glVertex2f(-0.8,-0.6);

    glVertex2f(-0.63,-0.5);

    glEnd();

    //hind leg foot



    glPushMatrix();

    glTranslatef(-1.05,-0.97,0);

    glRotatef(45,0,0,1);

    glScalef(1.2,1.2,0);

    glBegin(GL_POLYGON);

        glVertex2f(-0.28,-0.1);

        glVertex2f(-0.25,-0.15);

        glVertex2f(-0.247,-0.3);

        glVertex2f(-0.242,-0.4);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.2,-0.45);

        glVertex2f(-0.155,-0.4);

        glVertex2f(-0.15,-0.3);

        glVertex2f(-0.14,-0.15);

        glVertex2f(-0.14,-0.1);

        glEnd();

    //feet

        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.28,-0.56);

        glVertex2f(-0.19,-0.45);





        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.19,-0.56);

        glVertex2f(-0.17,-0.45);



        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.1,-0.56);

        glVertex2f(-0.16,-0.4);



        glEnd();

        glPopMatrix();

        //tail

        glColor3f(0,0.4,0);

        if(tswing3==15)

        inc3=-inc3;

    if(tswing3==5)

        inc3=-inc3;

    tswing3+=inc3*0.5;

    glPushMatrix();

    glTranslatef(0,0.2,0);

    glRotatef(tswing3,0,0,1);

        glBegin(GL_POLYGON);

        glVertex2f(-1.3,0.2);

        glVertex2f(-1.7,0.05);

        glVertex2f(-1.35,-0.25);

        glEnd();

        glPopMatrix();



}

void swamp()

{

    float l;

    glClearColor(0.8,0.7,0.99,0);

//plant with seed

    glPushMatrix();

    glTranslatef(-15,11,0);

    glScalef(0.9,2.2,0);

     glBegin(GL_POLYGON);

    glVertex2f(8.9,-9);

    glVertex2f(9.12,-6);

    glVertex2f(9.2,-5.8);

    glColor3f(0,1,0);

    glVertex2f(9.15,-6);

    glVertex2f(9,-9);

    glEnd();

    glColor3f(0,0.3,0);

    glBegin(GL_POLYGON);

    glVertex2f(8.9,-9);

    glVertex2f(8.8,-6);

    glVertex2f(8.73,-5.8);

    glColor3f(0,1,0);

    glVertex2f(8.77,-6);

    glVertex2f(8.8,-9);

    glEnd();

    glPopMatrix();

    glPushMatrix();

    glColor3f(0.4,0,0);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.08-7.1,sin(l*3.142/180)*0.8-2);

    glEnd();



    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)+5,sin(l*3.142/180)+5);

    glEnd();



    glTranslatef(15,-11,0);

    glPopMatrix();

//land

    glColor3f(0.3,0.7,0.1);

    glBegin(GL_POLYGON);

    glVertex2f(-8,-10);

    glVertex2f(-7,-8);

    glVertex2f(-6.5,-7.55);

    glVertex2f(-6,-7.2);

    glVertex2f(-5,-6.7);

    glVertex2f(-4,-6.2);

    glVertex2f(-3,-5.8);

    glVertex2f(-2,-5.2);

    glVertex2f(-1,-4.8);

    glVertex2f(0,-4.6);

    glVertex2f(1,-4.5);

    glVertex2f(2,-4.45);

    glVertex2f(3,-4.4);

    glVertex2f(4,-4.3);

    glVertex2f(6,-4.2);

    glVertex2f(9,-4.1);

    glVertex2f(11,-4);

    glVertex2f(12,-10);

    glEnd();





    //plant

glPushMatrix();

    glColor3f(0,0.3,0);

    glPushMatrix();

    glScalef(0.9,2.5,0);

    glTranslatef(-3.2,5,0);

    glBegin(GL_POLYGON);

    glVertex2f(9,-9);

    glVertex2f(8.65,-7.6);

    glVertex2f(8.55,-7.3);

    glVertex2f(8.6,-7.5);

    glColor3f(0,1,0);

    glVertex2f(8.8,-9);

    glEnd();

    glColor3f(0,0.3,0);

    glBegin(GL_POLYGON);

    glVertex2f(8.9,-9);

    glVertex2f(9.12,-6);

    glVertex2f(9.2,-5.8);

    glColor3f(0,1,0);

    glVertex2f(9.15,-6);

    glVertex2f(9,-9);

    glEnd();

glPopMatrix();

  //rock

    glColor3f(0.3,0,0);

    glPushMatrix();

    glTranslatef(0,-2.3,0);

    glBegin(GL_POLYGON);

    glVertex2f(6,-6);

    glVertex2f(5.5,-6.2);

    glVertex2f(5.2,-6.5);

    glVertex2f(5,-6.8);

    glVertex2f(4.6,-7);

    glVertex2f(4.5,-7.3);

    glVertex2f(4.55,-7.5);

    glVertex2f(4.65,-7.9);

    glVertex2f(4.75,-7.91);

    glVertex2f(4.9,-7.95);

    glVertex2f(5,-7.94);

    glVertex2f(5.2,-7.8);

    glVertex2f(5.4,-7.7);

    glVertex2f(5.6,-7.65);

    glVertex2f(5.9,-7.75);

    glVertex2f(6,-7.67);

    glVertex2f(6.1,-7.6);

    glVertex2f(6.2,-7.4);

    glVertex2f(6.3,-7.1);

    glVertex2f(6.35,-6.8);

    glVertex2f(6.4,-6.5);

    glVertex2f(6.45,-6.4);

    glVertex2f(6.42,-6.3);

    glVertex2f(6.4,-6.2);

    glEnd();

    glTranslatef(-5,8,0);

    glPopMatrix();

//rock

    glColor3f(0.3,0.2,0.1);

    glPushMatrix();

    glScalef(1,0.7,0);

    glTranslatef(-1.5,-6.5,0);

    glBegin(GL_POLYGON);

    glVertex2f(6,-6);

    glVertex2f(5.5,-6.2);

    glVertex2f(5.2,-6.5);

    glVertex2f(5,-6.8);

    glVertex2f(4.6,-7);

    glVertex2f(4.5,-7.3);

    glVertex2f(4.55,-7.5);

    glVertex2f(4.65,-7.9);

    glVertex2f(4.75,-7.91);

    glVertex2f(4.9,-7.95);

    glVertex2f(5,-7.94);

    glVertex2f(5.2,-7.8);

    glVertex2f(5.4,-7.7);

    glVertex2f(5.6,-7.65);

    glVertex2f(5.9,-7.75);

    glVertex2f(6,-7.67);

    glVertex2f(6.1,-7.6);

    glVertex2f(6.2,-7.4);

    glVertex2f(6.3,-7.1);

    glVertex2f(6.35,-6.8);

    glVertex2f(6.4,-6.5);

    glVertex2f(6.45,-6.4);

    glVertex2f(6.42,-6.3);

    glVertex2f(6.4,-6.2);

    glEnd();

    glTranslatef(-5,8,0);

    glPopMatrix();

    //water

    glColor4f(0,0,0.8,0.2);

    glBegin(GL_POLYGON);

    glVertex2f(-11,-7.5);

    glVertex2f(11,-7.5);

    glVertex2f(11,-11);

    glVertex2f(-11,-11);

    glEnd();



   // glPushMatrix();

    glTranslatef(0,-4,0);

    glRotatef(30,0,0,1);

        frog(1);

        glTranslatef(0,4,0);

     //   glPopMatrix();

}





void frog(int n)

{

    float l;

 //frog



    glColor3f(0,0.4,0);

    //glPushMatrix();

    //glScalef(1,1,0);

    glBegin(GL_POLYGON);

    glVertex2f(-1.6,0);

    glVertex2f(-1.55,0.1);

    glVertex2f(-1.5,0.25);

    glVertex2f(-1.4,0.4);

    glVertex2f(-1.3,0.45);

    glVertex2f(-1.2,0.5);

    glVertex2f(-1.1,0.54);

    glVertex2f(-1,0.6);

    glVertex2f(-0.9,0.65);

    glVertex2f(-0.7,0.75);

    glVertex2f(-0.6,0.77);

    glVertex2f(-0.5,0.79);

    glVertex2f(-0.4,0.8);

    glVertex2f(-0.3,0.79);

    glVertex2f(-0.2,0.77);

    glVertex2f(-0.1,0.75);

    glVertex2f(0,0.72);

    glVertex2f(0.1,0.7);

    glVertex2f(0.2,0.68);

    glVertex2f(0.3,0.65);

    glVertex2f(0.4,0.62);

    glVertex2f(0.5,0.6);

    glVertex2f(0.6,0.56);

    glVertex2f(0.7,0.5);

    glVertex2f(0.8,0.42);

    glVertex2f(0.9,0.35);

    glVertex2f(1,0.29);

    glVertex2f(1.1,0.2);

    glVertex2f(1.2,0.15);

    glVertex2f(1.3,0.03);

    glVertex2f(1.33,0);

    glVertex2f(1.32,-0.06);

    glVertex2f(1.3,-0.1);

    glVertex2f(1.2,-0.2);

    glVertex2f(1.1,-0.23);

    glVertex2f(1,-0.28);

    glVertex2f(0.9,-0.3);

    glVertex2f(0.8,-0.36);

    glVertex2f(0.7,-0.4);

    glVertex2f(0.6,-0.46);

    glVertex2f(0.5,-0.5);

    glVertex2f(0.4,-0.53);

    glVertex2f(0.3,-0.58);

    glVertex2f(0.2,-0.6);

    glVertex2f(0.1,-0.64);

    glVertex2f(0,-0.67);

    glVertex2f(-0.1,-0.7);

    glVertex2f(-0.2,-0.73);

    glVertex2f(-0.3,-0.73);

    glVertex2f(-0.4,-0.69);

    glVertex2f(-0.5,-0.65);

    glVertex2f(-0.6,-0.63);

    glVertex2f(-0.7,-0.6);

    glVertex2f(-0.8,-0.58);

    glVertex2f(-0.9,-0.55);

    glVertex2f(-1,-0.52);

    glVertex2f(-1.1,-0.45);

    glVertex2f(-1.2,-0.39);

    glVertex2f(-1.4,-0.33);

    glVertex2f(-1.6,-0.28);

    glEnd();

    glColor3f(0,0.4,0);

    glPushMatrix();

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.9-0.7,sin(l*3.142/180)*0.5-0.38);

    glEnd();

    glPopMatrix();

    //eye bump

    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.3+0.67,sin(l*3.142/180)*0.3+0.33);

    glEnd();

//eye

    glColor3f(1,1,1);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.2+0.68,sin(l*3.142/180)*0.2+0.31);

    glEnd();

    glColor3f(0,0,0);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.15+0.7,sin(l*3.142/180)*0.15+0.31);

    glEnd();

    glColor3f(0,0.42,0);



    //glPopMatrix();

    //front leg

    //front leg shin

    glPushMatrix();

    glScalef(0.7,0.7,0);

    glRotatef(24,0,0,1);

    glTranslatef(0.8,0.16,0);

    glBegin(GL_POLYGON);

    glVertex2f(-0.63,-0.7);

    glVertex2f(-0.8,-0.9);

    glVertex2f(-1,-1.2);

    glVertex2f(-1.1,-1.3);

    glVertex2f(-1.2,-1.35);

    glVertex2f(-1.2,-1.1);

    glVertex2f(-1.1,-0.94);

    glVertex2f(-1,-0.85);

    glVertex2f(-0.8,-0.6);

    glVertex2f(-0.63,-0.5);

    glEnd();

    glPopMatrix();

    //front leg foot



    glPushMatrix();

    glTranslatef(0.4,-0.5,0);

   // glRotatef(45,0,0,1);

    glScalef(1.2,1.2,0);

    glBegin(GL_POLYGON);

        glVertex2f(-0.28,-0.1);

        glVertex2f(-0.25,-0.15);

        glVertex2f(-0.247,-0.3);

        glVertex2f(-0.242,-0.4);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.2,-0.45);

        glVertex2f(-0.155,-0.4);

        glVertex2f(-0.15,-0.3);

        glVertex2f(-0.14,-0.15);

        glVertex2f(-0.14,-0.1);

        glEnd();

    //front feet

       glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.28,-0.56);

        glVertex2f(-0.19,-0.45);





        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.19,-0.56);

        glVertex2f(-0.17,-0.45);



        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.1,-0.56);

        glVertex2f(-0.16,-0.4);

        glEnd();

        glPopMatrix();



        //hind leg



        glPushMatrix();

        glScalef(1.2,1.2,0);

        glTranslatef(0.1,0.2,0);

        glColor3f(0,0.438,0);

    glBegin(GL_POLYGON);

    glVertex2f(-1.15,-0.2);

    glVertex2f(-1.05,-0.25);

    glVertex2f(-0.75,-0.3);

    glVertex2f(-0.65,-0.4);

    glVertex2f(-0.62,-0.7);

    glVertex2f(-0.65,-0.7);

    glVertex2f(-0.75,-0.7);

    glVertex2f(-0.85,-0.65);

    glVertex2f(-1.15,-0.65);

    glEnd();

            glColor3f(0,0.438,0);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.2-1.15,sin(l*3.142/180)*0.2-0.42);

        glEnd();

        glTranslatef(-0.1,-0.2,0);

        glPopMatrix();



        glPushMatrix();

        glRotatef(-20,0,0,1);

        glTranslatef(0.23,0.08,0);

         glBegin(GL_POLYGON);

    glVertex2f(-0.63,-0.7);

    glVertex2f(-0.8,-0.9);

    glVertex2f(-1,-1.2);

    glVertex2f(-1.1,-1.3);

    glVertex2f(-1.2,-1.35);

    glVertex2f(-1.2,-1.1);

    glVertex2f(-1.1,-0.94);

    glVertex2f(-1,-0.85);

    glVertex2f(-0.8,-0.6);

    glVertex2f(-0.63,-0.5);

    glEnd();

    glPopMatrix();

    //hind leg feet

    glPushMatrix();

    glScalef(1.7,1.7,0);

    glRotatef(60,0,0,1);

    glTranslatef(-0.55,0.55,0);

    glBegin(GL_POLYGON);

        glVertex2f(-0.28,-0.1);

        glVertex2f(-0.25,-0.15);

        glVertex2f(-0.247,-0.3);

        glVertex2f(-0.242,-0.4);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.2,-0.45);

        glVertex2f(-0.155,-0.4);

        glVertex2f(-0.15,-0.3);

        glVertex2f(-0.14,-0.15);

        glVertex2f(-0.14,-0.1);

        glEnd();

    //feet

        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.28,-0.56);

        glVertex2f(-0.19,-0.45);





        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.19,-0.56);

        glVertex2f(-0.17,-0.45);



        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.1,-0.56);

        glVertex2f(-0.16,-0.4);



        glEnd();

    glPopMatrix();



int a,i;

if(n==1)

    {if(throatpmp==15)

        inct=-inct;

    if(throatpmp==5)

        inct=-inct;

    throatpmp+=inct*0.5;

    for(a=0;a<=10000000;a++)

        i=0;

    glPushMatrix();

    //glTranslatef(0,throatpmp,0);

    throat();

    glPopMatrix();

    }

}



void throat()

{

    float l;



    glPushMatrix();

   // glTranslatef(-0.3,-0.6,0);

    //glRotatef(190,0,0,1);

    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

    for(l=200;l<=380;l++)

            glVertex2f(cos(l*3.142/180)*0.35*throatpmp*0.1+0.7,sin(l*3.142/180)*0.35*throatpmp*0.1-0.1);

        glEnd();

        glPopMatrix();



}

void lastpage()

{

    float l;

    int i;

    char first[]="The eggs hatch in 6 days";

    glClearColor(0,0.6,0.6,1);

    glPushMatrix();

    glTranslatef(1,10,0);

    glPushMatrix();

    glTranslatef(-7.3,-8.3,0);

    egg();

    glTranslatef(7.3,8.3,0);

    glPopMatrix();

    glPushMatrix();

    glTranslatef(-6.5,-8.2,0);

    egg();

    glTranslatef(6.5,8.2,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-9,0);

    egg();

    glTranslatef(6.8,9,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-7.3,-8.3,0);

    roundemb();

    glTranslatef(7.3,8.3,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.5,-8.2,0);

    roundemb();

    glTranslatef(6.5,8.2,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-6.8,-9,0);

    roundemb();

    glTranslatef(6.8,9,0);

    glPopMatrix();



    glTranslatef(-1,-10,0);

    glPopMatrix();

    arrow();

    glRasterPos2f(-5,2);



    for(i=0;i<=25;i++)

    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,first[i]);

    }

//  Tadpole diagram in life cycle

    glPushMatrix();

    glTranslatef(-1.5,1.5,0);

     glColor3f(0,0.1,0);

     glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.4,sin(l*3.142/180)*0.35);

    glEnd();

    // Tail

    glPushMatrix();



    glBegin(GL_POLYGON);

    glVertex2f(-0.2,0.15);

    glVertex2f(-0.8,0.1);

    glVertex2f(-1.2,0);

    glVertex2f(-0.8,-0.1);

    glVertex2f(-0.2,-0.15);

    glEnd();



    glPopMatrix();

    glPushMatrix();

    glTranslatef(0.3,0.1,0);



//Eye

    glColor3f(1,1,1);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.06,sin(l*3.142/180)*0.06);

    glEnd();

    glTranslatef(-0.3,-0.1,0);

    glPopMatrix();

    glPushMatrix();

    glPointSize(3);

    glColor3f(0,0,0);

    glBegin(GL_POINTS);

    glVertex2f(0.32,0.1);

    glEnd();



    glPopMatrix();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-0.8,0.8,0);

     glColor3f(0,0.1,0);

     glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.4,sin(l*3.142/180)*0.35);

    glEnd();

    // Tail

    glPushMatrix();



    glBegin(GL_POLYGON);

    glVertex2f(-0.2,0.15);

    glVertex2f(-0.8,0.1);

    glVertex2f(-1.2,0);

    glVertex2f(-0.8,-0.1);

    glVertex2f(-0.2,-0.15);

    glEnd();



    glPopMatrix();

    glPushMatrix();

    glTranslatef(0.3,0.1,0);



//Eye

    glColor3f(1,1,1);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.06,sin(l*3.142/180)*0.06);

    glEnd();

    glTranslatef(-0.3,-0.1,0);

    glPopMatrix();

    glPushMatrix();

    glPointSize(3);

    glColor3f(0,0,0);

    glBegin(GL_POINTS);

    glVertex2f(0.32,0.1);

    glEnd();



    glPopMatrix();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(5,0,0);

    arrow();

    glPopMatrix();



// second tadpole with legs

    glPushMatrix();

    glTranslatef(3.6,1.3,0);

    glColor3f(0,0.4,0);

    glScalef(1.5,1.5,1.5);

    //body

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.4,sin(l*3.142/180)*0.35);

    glEnd();

    //leg



    glPushMatrix();

    glTranslatef(0,-0.1,0);

    glRotatef(-30,0,0,1);







        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.07-0.2,sin(l*3.142/180)*0.07-0.1);

        glEnd();

        glBegin(GL_POLYGON);

        glVertex2f(-0.28,-0.1);

        glVertex2f(-0.25,-0.15);

        glVertex2f(-0.247,-0.3);

        glVertex2f(-0.242,-0.4);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.2,-0.45);

        glVertex2f(-0.155,-0.4);

        glVertex2f(-0.15,-0.3);

        glVertex2f(-0.14,-0.15);

        glVertex2f(-0.14,-0.1);

        glEnd();

    //feet

        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.28,-0.56);

        glVertex2f(-0.19,-0.45);





        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.19,-0.56);

        glVertex2f(-0.17,-0.45);



        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.1,-0.56);

        glVertex2f(-0.16,-0.4);



        glEnd();

   glPopMatrix();



    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

    glVertex3f(-0.2,0.2,-1);

    glVertex3f(-0.4,0.15,-1);

    glVertex3f(-0.8,0.1,-1);

    glVertex3f(-0.4,0.02,-1);

    glVertex3f(-0.2,0,-1);

    glEnd();

    glPopMatrix();



   glColor3f(1,1,1);

    glBegin(GL_POLYGON);

    for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.07+4,sin(l*3.142/180)*0.09+1.5);

    glEnd();

    glTranslatef(-0.3,-0.1,0);

    glPopMatrix();

    glPushMatrix();

    glPointSize(3);

    glColor3f(0,0,0);

    glPointSize(4);

    glBegin(GL_POINTS);

    glVertex2f(4,1.5);

    glEnd();

    glEnd();

    glPopMatrix();

    glColor3f(0.7,0.9,0.7);

    char second[]="The tadpoles grow hind legs after 5 weeks";

     glRasterPos2f(-0.2,2.2);

    for(i=0;i<=41;i++)

    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,second[i]);

    }



    glPushMatrix();

    glScalef(0.6,1,0);

    glRotatef(-120,0,0,1);

    glTranslatef(2.3,3,0);

    arrow();

    glPopMatrix();



    char third[]="The tail starts to disappear as the legs grow";

     glRasterPos2f(3,-1.4);

    for(i=0;i<=44;i++)

    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,third[i]);

    }



    // froglet with tail

    glPushMatrix();

    glTranslatef(1.9,-2.7,0);

    glScalef(0.7,0.7,0);



     glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

    glVertex2f(-1.6,0);

    glVertex2f(-1.55,0.1);

    glVertex2f(-1.5,0.25);

    glVertex2f(-1.4,0.4);

    glVertex2f(-1.3,0.45);

    glVertex2f(-1.2,0.5);

    glVertex2f(-1.1,0.54);

    glVertex2f(-1,0.6);

    glVertex2f(-0.9,0.65);

    glVertex2f(-0.7,0.75);

    glVertex2f(-0.6,0.77);

    glVertex2f(-0.5,0.79);

    glVertex2f(-0.4,0.8);

    glVertex2f(-0.3,0.79);

    glVertex2f(-0.2,0.77);

    glVertex2f(-0.1,0.75);

    glVertex2f(0,0.72);

    glVertex2f(0.1,0.7);

    glVertex2f(0.2,0.68);

    glVertex2f(0.3,0.65);

    glVertex2f(0.4,0.62);

    glVertex2f(0.5,0.6);

    glVertex2f(0.6,0.56);

    glVertex2f(0.7,0.5);

    glVertex2f(0.8,0.42);

    glVertex2f(0.9,0.35);

    glVertex2f(1,0.29);

    glVertex2f(1.1,0.2);

    glVertex2f(1.2,0.15);

    glVertex2f(1.3,0.03);

    glVertex2f(1.33,0);

    glVertex2f(1.32,-0.06);

    glVertex2f(1.3,-0.1);

    glVertex2f(1.2,-0.2);

    glVertex2f(1.1,-0.23);

    glVertex2f(1,-0.28);

    glVertex2f(0.9,-0.3);

    glVertex2f(0.8,-0.36);

    glVertex2f(0.7,-0.4);

    glVertex2f(0.6,-0.46);

    glVertex2f(0.5,-0.5);

    glVertex2f(0.4,-0.53);

    glVertex2f(0.3,-0.58);

    glVertex2f(0.2,-0.6);

    glVertex2f(0.1,-0.64);

    glVertex2f(0,-0.67);

    glVertex2f(-0.1,-0.7);

    glVertex2f(-0.2,-0.73);

    glVertex2f(-0.3,-0.73);

    glVertex2f(-0.4,-0.69);

    glVertex2f(-0.5,-0.65);

    glVertex2f(-0.6,-0.63);

    glVertex2f(-0.7,-0.6);

    glVertex2f(-0.8,-0.58);

    glVertex2f(-0.9,-0.55);

    glVertex2f(-1,-0.52);

    glVertex2f(-1.1,-0.45);

    glVertex2f(-1.2,-0.39);

    glVertex2f(-1.4,-0.33);

    glVertex2f(-1.6,-0.28);

    glEnd();

    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.9-0.7,sin(l*3.142/180)*0.5-0.38);

    glEnd();

//eye bump

    glColor3f(0,0.4,0);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.3+0.67,sin(l*3.142/180)*0.3+0.33);

    glEnd();

//eye

    glColor3f(1,1,1);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.2+0.68,sin(l*3.142/180)*0.2+0.31);

    glEnd();

    glColor3f(0,0,0);

    glBegin(GL_POLYGON);

     for(l=0;l<=360;l++)

        glVertex2f(cos(l*3.142/180)*0.15+0.7,sin(l*3.142/180)*0.15+0.31);

    glEnd();

//front leg

    glPushMatrix();

    glTranslatef(0.5,-0.1,0);

    glScalef(1.5,1.5,0);



    glPushMatrix();

    glTranslatef(0,-0.05,0);



    glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.07-0.2,sin(l*3.142/180)*0.07-0.1);

        glEnd();

        glBegin(GL_POLYGON);

        glVertex2f(-0.28,-0.1);

        glVertex2f(-0.25,-0.15);

        glVertex2f(-0.247,-0.3);

        glVertex2f(-0.242,-0.4);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.2,-0.45);

        glVertex2f(-0.155,-0.4);

        glVertex2f(-0.15,-0.3);

        glVertex2f(-0.14,-0.15);

        glVertex2f(-0.14,-0.1);

        glEnd();

    //feet

        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.28,-0.56);

        glVertex2f(-0.19,-0.45);





        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.19,-0.56);

        glVertex2f(-0.17,-0.45);



        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.1,-0.56);

        glVertex2f(-0.16,-0.4);



        glEnd();

    glTranslatef(-0.5,0.1,0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(0,0.25,0);

    glRotatef(legrot1*0.1,0,0,1);

     glColor3f(0,0.45,0);

    glBegin(GL_POLYGON);

    glVertex2f(-1.15,-0.2);

    glVertex2f(-1.05,-0.25);

    glVertex2f(-0.75,-0.3);

    glVertex2f(-0.65,-0.4);

    glVertex2f(-0.62,-0.7);

    glVertex2f(-0.65,-0.7);

    glVertex2f(-0.75,-0.7);

    glVertex2f(-0.85,-0.65);

    glVertex2f(-1.15,-0.65);

    glEnd();

            glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.2-1.15,sin(l*3.142/180)*0.2-0.42);

        glEnd();



//hind leg shin

    glBegin(GL_POLYGON);

    glVertex2f(-0.63,-0.7);

    glVertex2f(-0.8,-0.9);

    glVertex2f(-1,-1.2);

    glVertex2f(-1.1,-1.3);

    glVertex2f(-1.2,-1.35);

    glVertex2f(-1.2,-1.1);

    glVertex2f(-1.1,-0.94);

    glVertex2f(-1,-0.85);

    glVertex2f(-0.8,-0.6);

    glVertex2f(-0.63,-0.5);

    glEnd();

    //hind leg foot



    glPushMatrix();

    glTranslatef(-1.05,-0.97,0);

    glRotatef(45,0,0,1);

    glScalef(1.2,1.2,0);

    glBegin(GL_POLYGON);

        glVertex2f(-0.28,-0.1);

        glVertex2f(-0.25,-0.15);

        glVertex2f(-0.247,-0.3);

        glVertex2f(-0.242,-0.4);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.2,-0.45);

        glVertex2f(-0.155,-0.4);

        glVertex2f(-0.15,-0.3);

        glVertex2f(-0.14,-0.15);

        glVertex2f(-0.14,-0.1);

        glEnd();

    //feet

        glColor3f(0,0.45,0);

        glBegin(GL_POLYGON);

        glVertex2f(-0.235,-0.45);

        glVertex2f(-0.28,-0.56);

        glVertex2f(-0.19,-0.45);





        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.19,-0.56);

        glVertex2f(-0.17,-0.45);



        glVertex2f(-0.19,-0.45);

        glVertex2f(-0.1,-0.56);

        glVertex2f(-0.16,-0.4);



        glEnd();

        glPopMatrix();

        //tail

        glColor3f(0,0.4,0);



    glPushMatrix();

    glTranslatef(0,-0.2,0);



        glBegin(GL_POLYGON);

        glVertex2f(-1.3,0.2);

        glVertex2f(-1.7,0.05);

        glVertex2f(-1.35,-0.25);

        glEnd();

        glPopMatrix();

    glTranslatef(0,-0.25,0);

    glPopMatrix();

    glPopMatrix();



    glPushMatrix();

    glRotatef(180,0,0,1);

    glScalef(1.2,1.5,0);

    glTranslatef(7,-1.5,0);



    arrow();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-7,0,0);

    frog(0);

    glPopMatrix();



    glPushMatrix();

    glScalef(0.5,1.3,0);

    glRotatef(140,0,0,1);

    glScalef(1.2,1.5,0);

    glTranslatef(17,5.5,0);



    arrow();

    glPopMatrix();



    char fourth[]="After 11 weeks the frog is fully grown & its life span is around 10-12 years",fifth[]="The adult frogs lay eggs";

    char exit[]="Press q to exit";



     glRasterPos2f(-6.5,-2);



    for(i=0;i<=76;i++)

    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,fourth[i]);

    }

    glRasterPos2f(-13,1.5);



    for(i=0;i<=24;i++)

    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,fifth[i]);

    }



    glColor3f(0.7,0,0);

    char repeat[]="Press r to view again";

    glRasterPos2f(-5,-9);

    for(i=0;i<=15;i++)

    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,exit[i]);

    }

    glRasterPos2f(-5.5,-8);

    for(i=0;i<=21;i++)

    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,repeat[i]);

    }







}

void arrow()

{

    glColor3f(0.7,0.9,0.7);

    glBegin(GL_POLYGON);

    glVertex2f(-5,1.7);

    glVertex2f(-3,1.7);

    glVertex2f(-3,1.2);

    glVertex2f(-5,1.2);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(-3,2);

    glVertex2f(-2.7,1.5);

    glVertex2f(-3,0.9);

    glEnd();

}

void firstpage()

{

    int i;

    float l;



        glColor4f(0.3,0.3,0.3,0.3);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*2.3-9,sin(l*3.142/180)*2.8+8);

        glEnd();

        glColor4f(1,1,1,0.4);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*1.7-9,sin(l*3.142/180)*2.2+8);

        glEnd();



        glColor4f(0.3,0.3,0.3,0.3);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*2.3-7,sin(l*3.142/180)*2.8+6);

        glEnd();

        glColor4f(1,1,1,0.4);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*1.7-7,sin(l*3.142/180)*2.2+6);

        glEnd();



        glColor4f(0.3,0.3,0.3,0.3);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*3.2-1.8,sin(l*3.142/180)*3.7+4);

        glEnd();

        glColor4f(1,1,1,0.4);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*2.6-1.8,sin(l*3.142/180)*3.1+4);

        glEnd();



         glColor4f(0.3,0.3,0.3,0.3);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*4.7+2,sin(l*3.142/180)*5.2-2);

        glEnd();

        glColor4f(1,1,1,0.4);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*4.1+2,sin(l*3.142/180)*4.6-2);

        glEnd();



        glColor4f(0.3,0.3,0.3,0.3);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*3.6+4,sin(l*3.142/180)*4.1-10);

        glEnd();

        glColor4f(1,1,1,0.4);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*3.1+4,sin(l*3.142/180)*3.6-10);

        glEnd();





     glColor4f(0.3,0.3,0.3,0.3);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*2+8.2,sin(l*3.142/180)*2.5-5.6);

        glEnd();

        glColor4f(1,1,1,0.4);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*1.4+8.2,sin(l*3.142/180)*1.9-5.6);

        glEnd();



         glColor4f(0.3,0.3,0.3,0.3);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*1+7.8,sin(l*3.142/180)*1.5-1.4);

        glEnd();

        glColor4f(1,1,1,0.4);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.65+7.8,sin(l*3.142/180)*1-1.4);

        glEnd();



     glColor4f(0.3,0.3,0.3,0.3);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.6+9,sin(l*3.142/180)*1.1+0.5);

        glEnd();

        glColor4f(1,1,1,0.4);

        glBegin(GL_POLYGON);

        for(l=0;l<=360;l++)

            glVertex2f(cos(l*3.142/180)*0.4+9,sin(l*3.142/180)*0.7+0.5);

        glEnd();





}



void firstpagetext()

{

    int i;

    glColor3f(0,0,0);

    char clg[]="GSSS INSTITUTE OF ENGG & TECHNOLOGY FOR WOMEN";
    char dept[]="DEPARTMENT OF COMPUTER SCIENCE & ENGINEERING";
    char mini[]="MINI PROJECT IN COMPUTER GRAPHICS-VI SEM";
    char sub[]="SUBMITTED BY:",name1[]="ANUSHA.C.A[4GW13CS011]",name2[]="NIKITHA.N[4GW13CS060]";
    char a[100]="LIFE CYCLE OF FROG",g[]="GUIDED BY:",t[]="MR.VISHWESH.J",y[]="MRS.USHA RANI.J",b[]="Pres n for next";

    glRasterPos2f(-1,-9.5);

    for(i=0;i<=15;i++)

    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,b[i]);

    }

     glRasterPos2f(-4,6);

    for(i=0;i<=45;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,clg[i]);

    }
 glRasterPos2f(-4,5);

    for(i=0;i<=44;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,dept[i]);

    }

glRasterPos2f(-4,4);

    for(i=0;i<=40;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,mini[i]);

    }



     glRasterPos2f(-8,-6);

    for(i=0;i<=13;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,sub[i]);

    }

     glRasterPos2f(-5,-6);

    for(i=0;i<=22;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,name1[i]);

    }
 glRasterPos2f(-5,-7);

    for(i=0;i<=21;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,name2[i]);

    }



     glRasterPos2f(-2,0);

    for(i=0;i<=20;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,a[i]);

    }

    glRasterPos2f(2.5,-6);

    for(i=0;i<=10;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,g[i]);

    }

    glRasterPos2f(5,-6);

    for(i=0;i<=13;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,t[i]);

    }

     glRasterPos2f(5,-7);

    for(i=0;i<=15;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,y[i]);

    }



}

void seventhtext()

{

    int i;

    char y[]="The frog is completely grown in 11 weeks and its life span is around 10-12 years";

     glRasterPos2f(-8.5,7.5);

    for(i=0;i<=80;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,y[i]);

    }

}

void sixthtext()

{

    int i;

    char y[]="This stage of a frog is called as froglet.The tail starts to disappear as the legs grow.";

     glRasterPos2f(-8.5,7.5);

    for(i=0;i<=87;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,y[i]);

    }

}

void fifthtext()

{

    int i;

    char y[]="The tadpoles grow their hind legs in 5 weeks.";

     glRasterPos2f(-8.5,7.5);

    for(i=0;i<=45;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,y[i]);

    }

}

void fourthtext()

{

    int i;

    char y[]="The tadpoles hatch from the egg in 6 days.";

     glRasterPos2f(-8.5,7.5);

    for(i=0;i<=40;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,y[i]);

    }

}

void thirdtext()

{

    int i;

    char y[]="The embryo develops in the egg.";

     glRasterPos2f(-8.5,7.5);

    for(i=0;i<=30;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,y[i]);

    }

}

void sectext()

{

    int i;

    char y[]="These are the eggs of the frog also known as frog spawn.";

     glRasterPos2f(-8.5,7.5);

    for(i=0;i<=55;i++)

    {

   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,y[i]);

    }



}

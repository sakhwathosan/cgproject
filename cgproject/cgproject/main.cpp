//
//  main.cpp
//  cgproject
//
//  Created by Sakhwat Hosan on 14/5/23.
//

#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include<cstdio>
#include<math.h>


# define PI 3.14259265358979323846
GLfloat position1 = .50f;
GLfloat speed1 =-0.004f;


GLfloat positionvcara = 0.00f;
GLfloat speedvcara = 0.003f; //black

void vcar1(int value) //x axis
{
    positionvcara += speedvcara;

    glutPostRedisplay();

    glutTimerFunc(100, vcar1, 0);

}
GLfloat positionvcar = 0.00f;
GLfloat speedvcar =0.006f; //road red car - black

void vcar(int value) //Y axis
{
    positionvcar += speedvcar;

    glutPostRedisplay();


    glutTimerFunc(100, vcar, 0);
}



GLfloat scaling1 = 1.00f;
GLfloat speeds = -0.008f; //black

void vcar2(int value)
{
    if(positionvcar >0.65)


        scaling1 = 0.50f;

    scaling1 += speeds;

    glutPostRedisplay();

    glutTimerFunc(100, vcar2, 0);

}



GLfloat scaling2 = 1.00f;
GLfloat speeds2 = -0.008f; //black

void vcar3(int value)
{
    if(positionvcar >0.65)


        scaling2 = 0.50f;

    scaling2 += speeds2;

    glutPostRedisplay();

    glutTimerFunc(100, vcar3, 0);

}






GLfloat positionf1 = -0.16f;
GLfloat speedf1 = 0.0037f;

void vcar4x(int value)
{

    positionf1 += speedf1;

    glutPostRedisplay();

    glutTimerFunc(100, vcar4x, 0);

}



GLfloat positionf2 = -0.40f;
GLfloat speedf2 =0.007f;

void vcar4y(int value)
{
    positionf2 += speedf2;

    glutPostRedisplay();


    glutTimerFunc(100, vcar4y, 0);
}



GLfloat scalef1 = 1.00f;
GLfloat speedsf1 = -0.005f;

void vcar4xx(int value)
{


    scalef1 += speedsf1;

    glutPostRedisplay();

    glutTimerFunc(100, vcar4xx, 0);

}



GLfloat scalef2 = 1.00f;
GLfloat speedsf2 = -0.005f;

void vcar4yy(int value)
{


    scalef2 += speedsf2;

    glutPostRedisplay();

    glutTimerFunc(100, vcar4yy, 0);

}





GLfloat position2 = 0.0f;
GLfloat speed2 = -0.02f; //cloud speed white megh
void cloud(int value)
{
    if(position2 < -1.00)
        position2 =1.00f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, cloud, 0);
}



GLfloat position22 = 0.0f;
GLfloat speed22 = 0.009f; //bird white
void birdd(int value)
{
    if(position22 > 1.0)
        position22 =-1.10f;
    position22 += speed22;
    glutPostRedisplay();
    glutTimerFunc(100, birdd, 0);
}


GLfloat position22a = 0.60f;
GLfloat speed22a = 0.009f; //bird white
void birdd3(int value)
{
    if(position22a > 1.30)
        position22a =-.80f;
    position22a += speed22a;
    glutPostRedisplay();
    glutTimerFunc(100, birdd3, 0);
}

GLfloat position22b = 0.35f;
GLfloat speed22b = 0.009f; //bird white
void birdd4(int value)
{
    if(position22b > 1.10)
        position22b =-1.00f;
    position22b += speed22b;
    glutPostRedisplay();
    glutTimerFunc(100, birdd4, 0);
}


GLfloat position3 = 1.4f;
GLfloat speed3 = -0.020f;


GLfloat position6= 0.60f;
GLfloat speed6 = 0.010f; //black
void car3(int value)
{
    if(position6 > 1.2)
        position6 =-1.2f;
    position6 += speed6;
    glutPostRedisplay();
    glutTimerFunc(100, car3, 0);

}



GLfloat position4= -0.90f;
GLfloat speed4 = 0.01f; //red car white
void car1(int value)
{
    if(position4 > 1.2)
        position4 =-1.2f;
    position4 += speed4;
    glutPostRedisplay();
    glutTimerFunc(100, car1, 0);


}



GLfloat position5 = -1.5f;
GLfloat speed5 = 0.009f; //green car white
void car2(int value)
{
    if(position5 > 1.0)
        position5 =-1.5f;
    position5 += speed5;
    glutPostRedisplay();
    glutTimerFunc(100, car2, 0);


}


GLfloat position7 = .30f; //minibus
GLfloat speed7 =-0.009f; //minibus yellow white

void minibus(int value)
{
    if(position7 < -1.8)
        position7 = 1.00f;

    position7 += speed7;


    glutPostRedisplay();


    glutTimerFunc(100, minibus, 0);
}



GLfloat position8 = .00f;
GLfloat speed8 =-0.9f;
void minibus2(int value)
{
    if(position8 < -1.8)
        position8 = 1.00f;

    position8 += speed8;


    glutPostRedisplay();
    glutTimerFunc(100, minibus2, 0);
}

GLfloat position9 = -0.70f;
GLfloat speed9 = -0.010f;
void jeep1(int value)
{
    if(position9 < -1.8)
        position9 =1.10f;
    position9 += speed9;
    glutPostRedisplay();
    glutTimerFunc(100, jeep1, 0);

}

GLfloat position10 = 0.0f;
GLfloat speed10 = -0.010f; //blue car white
void jeep2(int value)
{
    if(position10 < -1.80)
        position10 =1.10f;
    position10 += speed10;
    glutPostRedisplay();
    glutTimerFunc(100, jeep2, 0);

}




void cloud1()
{
    int i;

    GLfloat x=.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=.55f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=.45f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=.52f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=.6f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


}

void cloud2()
{

    int i;

    GLfloat x=-.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=-.55f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-.45f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=-.52f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=-.6f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void cloud3()
{

    int i;

    GLfloat x=0.0f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 4.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=.05f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-0.05f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=.02f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=.1f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void bird()
{
    int i;
    GLfloat mm=0.382f;
    GLfloat nn=.801f;
    GLfloat radiusmm =.01f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mm, nn); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
            nn + (radiusmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.3f,0.8f);
    glVertex2f(0.31f,0.79f);
    glVertex2f(0.32f,0.78f);
    glVertex2f(0.36f,0.77f);
    glVertex2f(0.39f,0.79f);
    glVertex2f(0.401f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.375f,0.8f);
    glVertex2f(0.35f,0.8f);
    glVertex2f(0.34f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.375f,0.8f);
    glVertex2f(0.344f,0.8f);
    glVertex2f(0.32f,0.83f);
    glEnd();

}

void bird2()
{

    int i;
    GLfloat mmm=0.262f;
    GLfloat nnn=.801f;
    GLfloat radiusmmm =.01f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmm, nnn); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
            nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    /////2nd bird////
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.18f,0.8f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.20f,0.78f);
    glVertex2f(0.24f,0.77f);
    glVertex2f(0.27f,0.79f);
    glVertex2f(0.281f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.255f,0.8f);
    glVertex2f(0.23f,0.8f);
    glVertex2f(0.22f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.255f,0.8f);
    glVertex2f(0.224f,0.8f);
    glVertex2f(0.20f,0.83f);
    glEnd();



}


void bird3()
{
    /////3rd bird/////
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.82f,0.8f);
    glVertex2f(-0.81f,0.79f);
    glVertex2f(-0.8f,0.78f);
    glVertex2f(-0.76f,0.77f);
    glVertex2f(-0.73f,0.79f);
    glVertex2f(-0.719f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.745f,0.8f);
    glVertex2f(-0.77f,0.8f);
    glVertex2f(-0.78f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.745f,0.8f);
    glVertex2f(-0.776f,0.8f);
    glVertex2f(-0.8f,0.83f);
    glEnd();

    int i;
    GLfloat mmmm=-0.738f;
    GLfloat nnnn=.801f;
    GLfloat radiusmmm =.01f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmmm,nnnn); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
            nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

}


void bird4()
{
    int i;
    ////4th bird////
    GLfloat mmmmm=-0.218f;
    GLfloat nnnnn=.801f;
    GLfloat radiusmm =.01f;

    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmmmm, nnnnn); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mmmmm + (radiusmm * cos(i *  twicePi / triangleAmount)),
            nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.3f,0.8f);
    glVertex2f(-0.29f,0.79f);
    glVertex2f(-0.28f,0.78f);
    glVertex2f(-0.24f,0.77f);
    glVertex2f(-0.21f,0.79f);
    glVertex2f(-0.199f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.225f,0.8f);
    glVertex2f(-0.25f,0.8f);
    glVertex2f(-0.26f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.225f,0.8f);
    glVertex2f(-0.256f,0.8f);
    glVertex2f(-0.28f,0.83f);
    glEnd();


}



void car1()
{



    glBegin(GL_POLYGON);
    glColor3ub(213, 32, 39);
    glVertex2f(0.10f,-0.40f);
    glVertex2f(0.104f,-0.38f);
    glVertex2f(0.10f,-0.35f);
    glVertex2f(0.07f,-0.35f);
    glVertex2f(0.02f,-0.30f);
    glVertex2f(-0.03f,-0.30f);
    glVertex2f(-0.06f,-0.35f);
    glVertex2f(-0.08f,-0.35f);
    glVertex2f(-0.08f,-0.40f);
    glEnd();

    int i;         //Wheel

    GLfloat x=-0.04f;
    GLfloat y=-0.40f;
    GLfloat radius =.02f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(36, 40, 43);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Wheel

    GLfloat p=0.06f;
    GLfloat q=-0.40f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(36, 40, 43);
    glVertex2f(p, q); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            p + (radius * cos(i *  twicePi / triangleAmount)),
            q + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glBegin(GL_POLYGON); //car1
    glColor3ub(36, 40, 43);

    glVertex2f(0.06f,-0.35f);
    glVertex2f(0.02f,-0.31f);
    glVertex2f(-0.028f,-0.31f);
    glVertex2f(-0.05f,-0.35f);

    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(213, 32, 39);

    glVertex2f(0.01f,-0.31f);
    glVertex2f(0.01f,-0.35f);
    glEnd();
}

void car2()
{



    glBegin(GL_POLYGON);
    glColor3ub(0, 114, 54);
    glVertex2f(0.50f,-0.41f);
    glVertex2f(0.504f,-0.39f);
    glVertex2f(0.50f,-0.36f);
    glVertex2f(0.47f,-0.36f);
    glVertex2f(0.42f,-0.31f);
    glVertex2f(0.37f,-0.31f);
    glVertex2f(0.34f,-0.36f);
    glVertex2f(0.32f,-0.36f);
    glVertex2f(0.32f,-0.41f);
    glEnd();

    int i;         //Wheel

    GLfloat x=0.36f;
    GLfloat y=-0.41f;
    GLfloat radius =.02f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(36, 40, 43);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Wheel

    GLfloat p=0.46f;
    GLfloat q=-0.41f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(36, 40, 43);
    glVertex2f(p, q); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            p + (radius * cos(i *  twicePi / triangleAmount)),
            q + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glBegin(GL_POLYGON); //car2
    glColor3ub(36, 40, 43);

    glVertex2f(0.46f,-0.36f);
    glVertex2f(0.42f,-0.32f);
    glVertex2f(0.372,-0.32f);
    glVertex2f(0.35f,-0.36f);

    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0, 114, 54);

    glVertex2f(0.41f,-0.32f);
    glVertex2f(0.41f,-0.36f);
    glEnd();
}







void minibus() //yellow
{

    glBegin(GL_POLYGON);
    glColor3ub(253, 173, 22);

    glVertex2f(0.60f,-0.50f);
    glVertex2f(0.85f,-0.50f);
    glVertex2f(0.85f,-0.35f);
    glVertex2f(0.65f,-0.35f);
    glVertex2f(0.63f,-0.42f);
    glVertex2f(0.60f,-0.42f);
    glVertex2f(0.594f,-0.46f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(71, 71, 71);


    glVertex2f(0.65f,-0.35f);
    glVertex2f(0.65f,-0.42f);
    glVertex2f(0.62f,-0.42f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(71, 71, 71);


    glVertex2f(0.67f,-0.38f);
    glVertex2f(0.70f,-0.38f);
    glVertex2f(0.70f,-0.50f);
    glVertex2f(0.67f,-0.50f);

    glEnd();

    glBegin(GL_POLYGON); //window
    glColor3ub(71, 71, 71);


    glVertex2f(0.72f,-0.40f);
    glVertex2f(0.83f,-0.40f);
    glVertex2f(0.83f,-0.45f);
    glVertex2f(0.72f,-0.45f);

    glEnd();

    glLineWidth(2);

    glBegin(GL_LINES); //window
    glColor3ub(253, 173, 22);


    glVertex2f(0.81f,-0.40f);
    glVertex2f(0.81f,-0.45f);


    glEnd();

    glBegin(GL_LINES); //window
    glColor3ub(253, 173, 22);


    glVertex2f(0.75f,-0.40f);
    glVertex2f(0.75f,-0.45f);


    glEnd();

    glBegin(GL_LINES); //window
    glColor3ub(253, 173, 22);


    glVertex2f(0.78f,-0.40f);
    glVertex2f(0.78f,-0.45f);


    glEnd();



    int i;         //Wheel

    GLfloat x=0.635f;
    GLfloat y=-0.50f;
    GLfloat radius =.025f;
    int triangleAmount = 100;
    double twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(71, 71, 71);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat p=0.80f;
    GLfloat q=-0.50f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(71, 71, 71);
    glVertex2f(p, q); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            p + (radius * cos(i *  twicePi / triangleAmount)),
            q + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void tree1()
{

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.83f,-0.34f);
    glVertex2f(-0.80f,-0.31f);
    glVertex2f(-0.78f,-0.36f);
    glVertex2f(-0.76f,-0.31f);
    glVertex2f(-0.72f,-0.35f);
    glVertex2f(-0.75f,-0.28f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.75f,-0.28f);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.80f,-0.10f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.785f,-0.10f);
    glVertex2f(-0.765f,-0.10f);
    glVertex2f(-0.765f,-0.06f);
    glVertex2f(-0.785f,-0.06f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.75f,-0.07f);
    glVertex2f(-0.73f,-0.05f);
    glVertex2f(-0.75f,-0.04f);
    glVertex2f(-0.765f,-0.10f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.80f,-0.10f);
    glVertex2f(-0.80f,-0.07f);

    glVertex2f(-0.82f,-0.05f);
    glVertex2f(-0.80f,-0.04f);

    glVertex2f(-0.785f,-0.10f);

    glEnd();

    int i;

    GLfloat x=-0.775f;
    GLfloat y=-0.01f;
    GLfloat radius =.06f;
    int triangleAmount = 20;
    double twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x1=-0.725f;
    GLfloat y1=-0.03f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x1, y1); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x1 + (radius * cos(i *  twicePi / triangleAmount)),
            y1 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x2=-0.825f;
    GLfloat y2=-0.03f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x2, y2); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x2 + (radius * cos(i *  twicePi / triangleAmount)),
            y2 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x3=-0.835f;
    GLfloat y3=-0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x3, y3); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x3 + (radius * cos(i *  twicePi / triangleAmount)),
            y3 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x4=-0.715f;
    GLfloat y4=-0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x4, y4); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x4 + (radius * cos(i *  twicePi / triangleAmount)),
            y4 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x5=-0.705f;
    GLfloat y5=0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x5, y5); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x5 + (radius * cos(i *  twicePi / triangleAmount)),
            y5 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x6=-0.845f;
    GLfloat y6=0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x6, y6); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x6 + (radius * cos(i *  twicePi / triangleAmount)),
            y6 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x7=-0.835f;
    GLfloat y7=0.06f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x7, y7); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x7 + (radius * cos(i *  twicePi / triangleAmount)),
            y7 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x8=-0.715f;
    GLfloat y8=0.06f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x8, y8); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x8 + (radius * cos(i *  twicePi / triangleAmount)),
            y8 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x9=-0.745f;
    GLfloat y9=0.08f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x9, y9); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x9 + (radius * cos(i *  twicePi / triangleAmount)),
            y9 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x10=-0.805;
    GLfloat y10=0.08f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x10, y10); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x10 + (radius * cos(i *  twicePi / triangleAmount)),
            y10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



}



void tree2()
{

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.83f,-0.34f);
    glVertex2f(-0.80f,-0.31f);
    glVertex2f(-0.78f,-0.36f);
    glVertex2f(-0.76f,-0.31f);
    glVertex2f(-0.72f,-0.35f);
    glVertex2f(-0.75f,-0.28f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.75f,-0.28f);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.80f,-0.10f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.785f,-0.10f);
    glVertex2f(-0.765f,-0.10f);
    glVertex2f(-0.765f,-0.06f);
    glVertex2f(-0.785f,-0.06f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.75f,-0.07f);
    glVertex2f(-0.73f,-0.05f);
    glVertex2f(-0.75f,-0.04f);
    glVertex2f(-0.765f,-0.10f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.80f,-0.10f);
    glVertex2f(-0.80f,-0.07f);

    glVertex2f(-0.82f,-0.05f);
    glVertex2f(-0.80f,-0.04f);

    glVertex2f(-0.785f,-0.10f);

    glEnd();

    int i;

    GLfloat x=-0.775f;
    GLfloat y=-0.01f;
    GLfloat radius =.06f;
    int triangleAmount = 20;
    double twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x1=-0.725f;
    GLfloat y1=-0.03f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x1, y1); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x1 + (radius * cos(i *  twicePi / triangleAmount)),
            y1 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x2=-0.825f;
    GLfloat y2=-0.03f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x2, y2); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x2 + (radius * cos(i *  twicePi / triangleAmount)),
            y2 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x3=-0.835f;
    GLfloat y3=-0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x3, y3); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x3 + (radius * cos(i *  twicePi / triangleAmount)),
            y3 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x4=-0.715f;
    GLfloat y4=-0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x4, y4); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x4 + (radius * cos(i *  twicePi / triangleAmount)),
            y4 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x5=-0.705f;
    GLfloat y5=0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x5, y5); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x5 + (radius * cos(i *  twicePi / triangleAmount)),
            y5 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x6=-0.845f;
    GLfloat y6=0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x6, y6); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x6 + (radius * cos(i *  twicePi / triangleAmount)),
            y6 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x7=-0.835f;
    GLfloat y7=0.06f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x7, y7); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x7 + (radius * cos(i *  twicePi / triangleAmount)),
            y7 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x8=-0.715f;
    GLfloat y8=0.06f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x8, y8); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x8 + (radius * cos(i *  twicePi / triangleAmount)),
            y8 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x9=-0.745f;
    GLfloat y9=0.08f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x9, y9); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x9 + (radius * cos(i *  twicePi / triangleAmount)),
            y9 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x10=-0.805;
    GLfloat y10=0.08f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x10, y10); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x10 + (radius * cos(i *  twicePi / triangleAmount)),
            y10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



}





void tree4()
{

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.83f,-0.34f);
    glVertex2f(-0.80f,-0.31f);
    glVertex2f(-0.78f,-0.36f);
    glVertex2f(-0.76f,-0.31f);
    glVertex2f(-0.72f,-0.35f);
    glVertex2f(-0.75f,-0.28f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.75f,-0.28f);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.80f,-0.10f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.785f,-0.10f);
    glVertex2f(-0.765f,-0.10f);
    glVertex2f(-0.765f,-0.06f);
    glVertex2f(-0.785f,-0.06f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.75f,-0.07f);
    glVertex2f(-0.73f,-0.05f);
    glVertex2f(-0.75f,-0.04f);
    glVertex2f(-0.765f,-0.10f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.80f,-0.10f);
    glVertex2f(-0.80f,-0.07f);

    glVertex2f(-0.82f,-0.05f);
    glVertex2f(-0.80f,-0.04f);

    glVertex2f(-0.785f,-0.10f);

    glEnd();

    int i;

    GLfloat x=-0.775f;
    GLfloat y=-0.01f;
    GLfloat radius =.06f;
    int triangleAmount = 20;
    double twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x1=-0.725f;
    GLfloat y1=-0.03f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x1, y1); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x1 + (radius * cos(i *  twicePi / triangleAmount)),
            y1 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x2=-0.825f;
    GLfloat y2=-0.03f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x2, y2); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x2 + (radius * cos(i *  twicePi / triangleAmount)),
            y2 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x3=-0.835f;
    GLfloat y3=-0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x3, y3); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x3 + (radius * cos(i *  twicePi / triangleAmount)),
            y3 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x4=-0.715f;
    GLfloat y4=-0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x4, y4); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x4 + (radius * cos(i *  twicePi / triangleAmount)),
            y4 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x5=-0.705f;
    GLfloat y5=0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x5, y5); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x5 + (radius * cos(i *  twicePi / triangleAmount)),
            y5 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x6=-0.845f;
    GLfloat y6=0.02f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x6, y6); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x6 + (radius * cos(i *  twicePi / triangleAmount)),
            y6 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat x7=-0.835f;
    GLfloat y7=0.06f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x7, y7); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x7 + (radius * cos(i *  twicePi / triangleAmount)),
            y7 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x8=-0.715f;
    GLfloat y8=0.06f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x8, y8); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x8 + (radius * cos(i *  twicePi / triangleAmount)),
            y8 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x9=-0.745f;
    GLfloat y9=0.08f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x9, y9); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x9 + (radius * cos(i *  twicePi / triangleAmount)),
            y9 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x10=-0.805;
    GLfloat y10=0.08f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(34, 139, 34);
    glVertex2f(x10, y10); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x10 + (radius * cos(i *  twicePi / triangleAmount)),
            y10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



}



void jeep2() //blue
{

    glBegin(GL_POLYGON); //jeep
    glColor3ub(36, 57, 178);
    glVertex2f(0.60f,-0.52f);
    glVertex2f(0.80f,-0.52f);
    glVertex2f(0.78f,-0.37f);
    glVertex2f(0.67f,-0.37f);
    glVertex2f(0.64f,-0.44f);
    glVertex2f(0.60f,-0.46f);
    glVertex2f(0.595f,-0.485f);
    glEnd();


    glBegin(GL_POLYGON); //jeep
    glColor3ub(174, 209, 228);

    glVertex2f(0.665f,-0.38f);
    glVertex2f(0.635f,-0.44f);

    glVertex2f(0.78f,-0.44f);
    glVertex2f(0.77f,-0.38f);

    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES); //jeep
    glColor3ub(36, 0, 117);
    glVertex2f(0.60f,-0.51f);
    glVertex2f(0.798f,-0.51f);

    glEnd();


    glBegin(GL_LINES); //jeep
    glColor3ub(36, 57, 178);
    glVertex2f(0.68f,-0.38f);
    glVertex2f(0.68f,-0.44f);

    glEnd();

    glBegin(GL_LINES); //jeep
    glColor3ub(36, 57, 178);
    glVertex2f(0.735f,-0.38f);
    glVertex2f(0.735f,-0.44f);

    glEnd();

    glBegin(GL_POLYGON); //jeep
    glColor3ub(61, 50, 54);
    glVertex2f(0.794f,-0.480f);

    glVertex2f(0.785f,-0.41f);
    glVertex2f(0.79f,-0.405f);
    glVertex2f(0.80f,-0.408f);
    glVertex2f(0.809f,-0.472f);
    glVertex2f(0.80f,-0.481f);


    glEnd();






    int i;         //Wheel

    GLfloat x=0.64f;
    GLfloat y=-0.52f;
    GLfloat radius =.025f;
    int triangleAmount = 100;
    double twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(61, 50, 54);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat p=0.765f;
    GLfloat q=-0.52f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(61, 50, 54);
    glVertex2f(p, q); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            p + (radius * cos(i *  twicePi / triangleAmount)),
            q + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


}

void jhaugass1()
{
    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


    glEnd();



    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


    glEnd();

}

void jhaugass1a()
{


    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.87f);
    glVertex2f(-0.88f,-0.84f);
    glVertex2f(-0.92f,-0.84f);
    glVertex2f(-0.95f,-0.87f);


    glEnd();


    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.88f,-0.84f);
    glVertex2f(-0.92f,-0.84f);
    glVertex2f(-0.94f,-0.82f);
    glVertex2f(-0.90f,-0.79f);
    glVertex2f(-0.86f,-0.82f);



    glEnd();



    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


    glEnd();

}





void jhaugass2()
{
    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


    glEnd();



    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


    glEnd();

}


void jhaugass3()
{
    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


    glEnd();



    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


    glEnd();

}


void jhaugass4()
{
    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


    glEnd();



    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


    glEnd();

}


void university()

{
    glBegin(GL_POLYGON);
    glColor3ub(168, 169, 173);
    glVertex2f(-0.82f,-0.08f);
    glVertex2f(-0.74f,-0.20f);
    glVertex2f(-0.36f,-0.20f);
    glVertex2f(-0.44f,-0.08f);

    glEnd();


    glBegin(GL_POLYGON); //left side
    glColor3ub(133,131,132);

    glVertex2f(-0.75f, -0.10f);
    glVertex2f(-0.69f, -0.15f);
    glVertex2f(-0.69f, 0.30);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES); //left side border
    glColor3ub(211,211,211);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.75f, 0.00f);

    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.75f, 0.11f);
    glEnd();






    glBegin(GL_POLYGON); ;//next to left below section
    glColor3ub(50,205,50);

    glVertex2f(-0.69f, -0.15f);
    glVertex2f(-0.61f, -0.15f);
    glVertex2f(-0.61f, 0.05);
    glVertex2f(-0.69f, 0.05f);
    glEnd();

    glBegin(GL_POLYGON);////next to left middle section
    glColor3ub(255,221,173);

    glVertex2f(-0.61f, 0.05);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.61f, 0.17f);
    glEnd();


    glBegin(GL_POLYGON); ////next to left top section
    glColor3ub(85,85,85);
    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.61f, 0.17f);
    glVertex2f(-0.61f, 0.30);
    glVertex2f(-0.69f, 0.30f);

    glEnd();

    glBegin(GL_POLYGON); //middle section whole
    glColor3ub(255,166,0);

    glVertex2f(-0.61f, -0.15f);
    glVertex2f(-0.51f, -0.15f);
    glVertex2f(-0.51f, 0.33);
    glVertex2f(-0.61f, 0.33f);
    glEnd();


    glBegin(GL_POLYGON); //middle section triangle
    glColor3ub(131,133,135);

    glVertex2f(-0.61f, 0.33f);
    glVertex2f(-0.61f, 0.30f);
    glVertex2f(-0.62f, 0.30);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES); //next to left side border
    glColor3ub(211,211,211);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.61f, 0.05f);

    glVertex2f(-0.69f, 0.17f);
    glVertex2f(-0.61f, 0.17f);


    glEnd();

    glBegin(GL_POLYGON); ;//right section whole
    glColor3ub(85,85,85);

    glVertex2f(-0.51f, -0.15f);
    glVertex2f(-0.45f, -0.15f);
    glVertex2f(-0.45f, 0.36);
    glVertex2f(-0.51f, 0.36f);
    glEnd();


    glBegin(GL_POLYGON); ;//right section triangle
    glColor3ub(131,133,135);
    glVertex2f(-0.51f, 0.36);
    glVertex2f(-0.51f, 0.33f);
    glVertex2f(-0.52f, 0.33f);

    glEnd();




    glBegin(GL_POLYGON);////next to left middle section window
    glColor3ub(208,216,209);

    glVertex2f(-0.63f, 0.07);
    glVertex2f(-0.67f, 0.07f);
    glVertex2f(-0.67f, 0.15);
    glVertex2f(-0.63f, 0.15f);
    glEnd();

    glBegin(GL_POLYGON);////next to left middle section window a
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, 0.075);
    glVertex2f(-0.665f, 0.075f);
    glVertex2f(-0.665f, 0.145);
    glVertex2f(-0.635f, 0.145f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);////next to left middle section window b
    glColor3ub(168,168,168);

    glVertex2f(-0.649f, 0.075);
    glVertex2f(-0.649f, 0.145f);
    glEnd();


    glBegin(GL_POLYGON);////next to left top section window
    glColor3ub(208,216,209);

    glVertex2f(-0.63f, 0.20);
    glVertex2f(-0.67f, 0.20f);
    glVertex2f(-0.67f, 0.28);
    glVertex2f(-0.63f, 0.28f);
    glEnd();

    glBegin(GL_POLYGON);////next to top middle section window a
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, 0.205);
    glVertex2f(-0.665f, 0.205f);
    glVertex2f(-0.665f, 0.275);
    glVertex2f(-0.635f, 0.275f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);////next to left top section window b
    glColor3ub(168,168,168);

    glVertex2f(-0.649f, 0.205);
    glVertex2f(-0.649f, 0.275f);
    glEnd();




    glBegin(GL_POLYGON);////next to left below section window
    glColor3ub(208,216,209);

    glVertex2f(-0.63f, -0.05);
    glVertex2f(-0.67f, -0.05f);
    glVertex2f(-0.67f, 0.03);
    glVertex2f(-0.63f, 0.03f);
    glEnd();

    glBegin(GL_POLYGON);////next to left below section window a
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, -0.045);
    glVertex2f(-0.665f, -0.045f);
    glVertex2f(-0.665f, 0.025);
    glVertex2f(-0.635f, 0.025f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);////next to left below section window b
    glColor3ub(168,168,168);

    glVertex2f(-0.649f, -0.045);
    glVertex2f(-0.649f, 0.025f);
    glEnd();



    glBegin(GL_POLYGON);////next to left below section window 2
    glColor3ub(208,216,209);

    glVertex2f(-0.63f, -0.14);
    glVertex2f(-0.67f, -0.14f);
    glVertex2f(-0.67f, -0.06);
    glVertex2f(-0.63f, -0.06f);
    glEnd();

    glBegin(GL_POLYGON);////next to left below section window a 2
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, -0.135f);
    glVertex2f(-0.665f, -0.135f);
    glVertex2f(-0.665f, -0.065);
    glVertex2f(-0.635f, -0.065f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);////next to left below section window b 2
    glColor3ub(168,168,168);

    glVertex2f(-0.649f, -0.135);
    glVertex2f(-0.649f, -0.065f);
    glEnd();



    glBegin(GL_POLYGON);// middle section window 1
    glColor3ub(208,216,209);

    glVertex2f(-0.54f, -0.12);
    glVertex2f(-0.58f, -0.12f);
    glVertex2f(-0.58f, -0.04);
    glVertex2f(-0.54f, -0.04f);
    glEnd();

    glBegin(GL_POLYGON);// middle section window 1
    glColor3ub(241,255,241);

    glVertex2f(-0.545f, -0.115f);
    glVertex2f(-0.575f, -0.115f);
    glVertex2f(-0.575f, -0.045);
    glVertex2f(-0.545f, -0.045f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);// middle section window 1
    glColor3ub(168,168,168);

    glVertex2f(-0.559f, -0.115);
    glVertex2f(-0.559f, -0.045f);
    glEnd();


    glBegin(GL_POLYGON);// middle section window 2
    glColor3ub(208,216,209);

    glVertex2f(-0.54f, 0.07);
    glVertex2f(-0.58f, 0.07f);
    glVertex2f(-0.58f, 0.15);
    glVertex2f(-0.54f, 0.15f);
    glEnd();

    glBegin(GL_POLYGON);// middle section window 2
    glColor3ub(241,255,241);

    glVertex2f(-0.545f, 0.075f);
    glVertex2f(-0.575f, 0.075f);
    glVertex2f(-0.575f, 0.145);
    glVertex2f(-0.545f, 0.145f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);// middle section window 2
    glColor3ub(168,168,168);

    glVertex2f(-0.559f, 0.075);
    glVertex2f(-0.559f, 0.145f);
    glEnd();


    glBegin(GL_POLYGON);// middle section window 3 top
    glColor3ub(208,216,209);

    glVertex2f(-0.54f, 0.20);
    glVertex2f(-0.58f, 0.20f);
    glVertex2f(-0.58f, 0.28);
    glVertex2f(-0.54f, 0.28f);
    glEnd();

    glBegin(GL_POLYGON);// middle section window 3 top
    glColor3ub(241,255,241);

    glVertex2f(-0.545f, 0.205f);
    glVertex2f(-0.575f, 0.205f);
    glVertex2f(-0.575f, 0.275);
    glVertex2f(-0.545f, 0.275f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);// middle section window 3 top
    glColor3ub(168,168,168);

    glVertex2f(-0.559f, 0.205);
    glVertex2f(-0.559f, 0.275f);
    glEnd();


    glBegin(GL_POLYGON);// right most section window 1
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, -0.12);
    glVertex2f(-0.50f, -0.12f);
    glVertex2f(-0.50f, -0.04);
    glVertex2f(-0.46f, -0.04f);
    glEnd();

    glBegin(GL_POLYGON); //right most section window 1
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, -0.115f);
    glVertex2f(-0.495f, -0.115f);
    glVertex2f(-0.495f, -0.045);
    glVertex2f(-0.465f, -0.045f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //right most section window 1
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, -0.115);
    glVertex2f(-0.479f, -0.045f);
    glEnd();


    glBegin(GL_POLYGON);// right most section window 2
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, -0.02);
    glVertex2f(-0.50f, -0.02f);
    glVertex2f(-0.50f, 0.06);
    glVertex2f(-0.46f, 0.06f);
    glEnd();

    glBegin(GL_POLYGON); //right most section window 2
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, -0.015f);
    glVertex2f(-0.495f, -0.015f);
    glVertex2f(-0.495f, 0.055);
    glVertex2f(-0.465f, 0.055f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //right most section window 2
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, -0.015);
    glVertex2f(-0.479f, 0.055f);
    glEnd();



    glBegin(GL_POLYGON);// right most section window 3
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, 0.08);
    glVertex2f(-0.50f, 0.08f);
    glVertex2f(-0.50f, 0.16);
    glVertex2f(-0.46f, 0.16f);
    glEnd();

    glBegin(GL_POLYGON); //right most section window 3
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, 0.085f);
    glVertex2f(-0.495f, 0.085f);
    glVertex2f(-0.495f, 0.155);
    glVertex2f(-0.465f, 0.155f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //right most section window 3
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, 0.085);
    glVertex2f(-0.479f, 0.155f);
    glEnd();


    glBegin(GL_POLYGON);// right most section window 4
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, 0.18);
    glVertex2f(-0.50f, 0.18f);
    glVertex2f(-0.50f, 0.26);
    glVertex2f(-0.46f, 0.26f);
    glEnd();

    glBegin(GL_POLYGON); //right most section window 4
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, 0.185f);
    glVertex2f(-0.495f, 0.185f);
    glVertex2f(-0.495f, 0.255);
    glVertex2f(-0.465f, 0.255f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //right most section window 4
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, 0.185);
    glVertex2f(-0.479f, 0.255f);
    glEnd();


    glBegin(GL_POLYGON);// right most section window 5
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, 0.28);
    glVertex2f(-0.50f, 0.28f);
    glVertex2f(-0.50f, 0.34);
    glVertex2f(-0.46f, 0.34f);
    glEnd();

    glBegin(GL_POLYGON); //right most section window 4
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, 0.285f);
    glVertex2f(-0.495f, 0.285f);
    glVertex2f(-0.495f, 0.335);
    glVertex2f(-0.465f, 0.335f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //right most section window 4
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, 0.285);
    glVertex2f(-0.479f, 0.335f);
    glEnd();

}
void Atikurhouse()

{

    glBegin(GL_POLYGON); //roof top
    glColor3ub(196,120,86);

    glVertex2f(0.60f, 0.10f);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.74f, 0.00);
    glVertex2f(0.58f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON); //left side
    glColor3ub(242,239,220);

    glVertex2f(0.59f, 0.00f);
    glVertex2f(0.735f, 0.00f);
    glVertex2f(0.735f, -0.15);
    glVertex2f(0.59f, -0.15f);
    glEnd();


    glBegin(GL_POLYGON); //right side
    glColor3ub(230,215,186);
    glVertex2f(0.735f, 0.00);
    glVertex2f(0.735f, -0.15f);
    glVertex2f(0.80f, -0.15f);
    glVertex2f(0.80f, 0.00f);
    glVertex2f(0.77f, 0.10f);
    glVertex2f(0.75f, 0.10f);

    glEnd();


    glBegin(GL_POLYGON); //right side fireplace
    glColor3ub(230,215,186);
    glVertex2f(0.77f, 0.10f);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.75f, 0.13f);
    glVertex2f(0.77f, 0.13f);

    glEnd();

    glBegin(GL_POLYGON); //right side fireplace a
    glColor3ub(246,230,214);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.75f, 0.13f);
    glVertex2f(0.74f, 0.126f);
    glVertex2f(0.74f, 0.10f);



    glEnd();


    glBegin(GL_POLYGON); //left side door frame
    glColor3ub(255,207,176);

    glVertex2f(0.69f, -0.15);
    glVertex2f(0.64f, -0.15f);
    glVertex2f(0.64f, 0.00f);
    glVertex2f(0.665f, 0.04f);
    glVertex2f(0.69f, 0.00f);



    glEnd();


    glBegin(GL_POLYGON); //left side door
    glColor3ub(188,138,105);

    glVertex2f(0.68f, -0.15);
    glVertex2f(0.65f, -0.15f);
    glVertex2f(0.65f, -0.03f);
    glVertex2f(0.68f, -0.03f);



    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES); //left side door frame roof border left side
    glColor3ub(180,97,65);
    glVertex2f(0.665f, 0.04f);
    glVertex2f(0.64f, 0.00f);
    glEnd();


    glBegin(GL_POLYGON); //left side door frame roof border right side
    glColor3ub(180,97,65);
    glVertex2f(0.665f, 0.05f);
    glVertex2f(0.69f, 0.05f);
    glVertex2f(0.71f, 0.00f);
    glVertex2f(0.69f, 0.00);
    glEnd();

    glLineWidth(9); //left side door frame wall inside
    glBegin(GL_LINES);
    glColor3ub(235,219,193);
    glVertex2f(0.697f, 0.00f);
    glVertex2f(0.697f, -0.15f);
    glEnd();


    glBegin(GL_POLYGON); //left side window
    glColor3ub(173,118,98);

    glVertex2f(0.605f, -0.03f);
    glVertex2f(0.63f, -0.03f);
    glVertex2f(0.63f, -0.12);
    glVertex2f(0.605f, -0.12f);
    glEnd();


    glBegin(GL_POLYGON); //left side window a blue
    glColor3ub(172,213,231);

    glVertex2f(0.61f, -0.035f);
    glVertex2f(0.625f, -0.035f);
    glVertex2f(0.625f, -0.115);
    glVertex2f(0.61f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //left side window middle border
    glColor3ub(173,118,98);

    glVertex2f(0.61f, -0.075f);
    glVertex2f(0.625f, -0.075f);
    glEnd();




    glBegin(GL_POLYGON); //left side window 2
    glColor3ub(173,118,98);

    glVertex2f(0.71f, -0.03f);
    glVertex2f(0.73f, -0.03f);
    glVertex2f(0.73f, -0.12);
    glVertex2f(0.71f, -0.12f);
    glEnd();


    glBegin(GL_POLYGON); //left side window a blue 2
    glColor3ub(172,213,231);

    glVertex2f(0.714f, -0.035f);
    glVertex2f(0.725f, -0.035f);
    glVertex2f(0.725f, -0.115);
    glVertex2f(0.714f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //left side window middle border 2
    glColor3ub(173,118,98);

    glVertex2f(0.71f, -0.075f);
    glVertex2f(0.725f, -0.075f);
    glEnd();


    glBegin(GL_POLYGON); //right side window
    glColor3ub(173,118,98);

    glVertex2f(0.745f, -0.03f);
    glVertex2f(0.79f, -0.03f);
    glVertex2f(0.79f, -0.12);
    glVertex2f(0.745f, -0.12f);
    glEnd();


    glBegin(GL_POLYGON); //right side window a blue
    glColor3ub(172,213,231);

    glVertex2f(0.75f, -0.035f);
    glVertex2f(0.786f, -0.035f);
    glVertex2f(0.786f, -0.115);
    glVertex2f(0.75f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //right side window middle border
    glColor3ub(173,118,98);

    glVertex2f(0.75f, -0.075f);
    glVertex2f(0.786f, -0.075f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //right side window middle border top to bottom
    glColor3ub(173,118,98);

    glVertex2f(0.768f, -0.03f);
    glVertex2f(0.768f, -0.12f);
    glEnd();

    glBegin(GL_POLYGON); //Attic  window
    glColor3ub(173,118,98);

    glVertex2f(0.755f, 0.003f);
    glVertex2f(0.778f, 0.003f);
    glVertex2f(0.778f, 0.055);
    glVertex2f(0.755f, 0.055f);
    glEnd();


    glBegin(GL_POLYGON); //Attic window a blue
    glColor3ub(172,213,231);

    glVertex2f(0.76f, 0.01f);
    glVertex2f(0.775f, 0.01f);
    glVertex2f(0.775f, 0.05);
    glVertex2f(0.76f, 0.05f);
    glEnd();




}

void Atikurhousea()

{

    glBegin(GL_POLYGON); //roof top
    glColor3ub(159,81,71);

    glVertex2f(0.60f, 0.10f);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.74f, 0.00);
    glVertex2f(0.58f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON); //left side
    glColor3ub(255,208,0);

    glVertex2f(0.59f, 0.00f);
    glVertex2f(0.735f, 0.00f);
    glVertex2f(0.735f, -0.15);
    glVertex2f(0.59f, -0.15f);
    glEnd();


    glBegin(GL_POLYGON); //right side
    glColor3ub(201,168,20);
    glVertex2f(0.735f, 0.00);
    glVertex2f(0.735f, -0.15f);
    glVertex2f(0.80f, -0.15f);
    glVertex2f(0.80f, 0.00f);
    glVertex2f(0.77f, 0.10f);
    glVertex2f(0.75f, 0.10f);

    glEnd();


    glBegin(GL_POLYGON); //right side fireplace
    glColor3ub(201,168,20);
    glVertex2f(0.77f, 0.10f);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.75f, 0.13f);
    glVertex2f(0.77f, 0.13f);

    glEnd();

    glBegin(GL_POLYGON); //right side fireplace a
    glColor3ub(255,208,0);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.75f, 0.13f);
    glVertex2f(0.74f, 0.126f);
    glVertex2f(0.74f, 0.10f);



    glEnd();


    glBegin(GL_POLYGON); //left side door frame
    glColor3ub(201,216,20);

    glVertex2f(0.69f, -0.15);
    glVertex2f(0.64f, -0.15f);
    glVertex2f(0.64f, 0.00f);
    glVertex2f(0.665f, 0.04f);
    glVertex2f(0.69f, 0.00f);



    glEnd();


    glBegin(GL_POLYGON); //left side door
    glColor3ub(188,138,105);

    glVertex2f(0.68f, -0.15);
    glVertex2f(0.65f, -0.15f);
    glVertex2f(0.65f, -0.03f);
    glVertex2f(0.68f, -0.03f);



    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES); //left side door frame roof border left side
    glColor3ub(180,97,65);
    glVertex2f(0.665f, 0.04f);
    glVertex2f(0.64f, 0.00f);
    glEnd();


    glBegin(GL_POLYGON); //left side door frame roof border right side
    glColor3ub(180,97,65);
    glVertex2f(0.665f, 0.05f);
    glVertex2f(0.69f, 0.05f);
    glVertex2f(0.71f, 0.00f);
    glVertex2f(0.69f, 0.00);
    glEnd();

    glLineWidth(4); //left side door frame wall inside
    glBegin(GL_LINES);
    glColor3ub(201,168,20);
    glVertex2f(0.697f, 0.00f);
    glVertex2f(0.697f, -0.15f);
    glEnd();


    glBegin(GL_POLYGON); //left side window
    glColor3ub(173,118,98);

    glVertex2f(0.605f, -0.03f);
    glVertex2f(0.63f, -0.03f);
    glVertex2f(0.63f, -0.12);
    glVertex2f(0.605f, -0.12f);
    glEnd();


    glBegin(GL_POLYGON); //left side window a blue
    glColor3ub(172,213,231);

    glVertex2f(0.61f, -0.035f);
    glVertex2f(0.625f, -0.035f);
    glVertex2f(0.625f, -0.115);
    glVertex2f(0.61f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //left side window middle border
    glColor3ub(173,118,98);

    glVertex2f(0.61f, -0.075f);
    glVertex2f(0.625f, -0.075f);
    glEnd();




    glBegin(GL_POLYGON); //left side window 2
    glColor3ub(173,118,98);

    glVertex2f(0.71f, -0.03f);
    glVertex2f(0.73f, -0.03f);
    glVertex2f(0.73f, -0.12);
    glVertex2f(0.71f, -0.12f);
    glEnd();


    glBegin(GL_POLYGON); //left side window a blue 2
    glColor3ub(172,213,231);

    glVertex2f(0.714f, -0.035f);
    glVertex2f(0.725f, -0.035f);
    glVertex2f(0.725f, -0.115);
    glVertex2f(0.714f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //left side window middle border 2
    glColor3ub(173,118,98);

    glVertex2f(0.71f, -0.075f);
    glVertex2f(0.725f, -0.075f);
    glEnd();


    glBegin(GL_POLYGON); //right side window
    glColor3ub(173,118,98);

    glVertex2f(0.745f, -0.03f);
    glVertex2f(0.79f, -0.03f);
    glVertex2f(0.79f, -0.12);
    glVertex2f(0.745f, -0.12f);
    glEnd();


    glBegin(GL_POLYGON); //right side window a blue
    glColor3ub(172,213,231);

    glVertex2f(0.75f, -0.035f);
    glVertex2f(0.786f, -0.035f);
    glVertex2f(0.786f, -0.115);
    glVertex2f(0.75f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //right side window middle border
    glColor3ub(173,118,98);

    glVertex2f(0.75f, -0.075f);
    glVertex2f(0.786f, -0.075f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //right side window middle border top to bottom
    glColor3ub(173,118,98);

    glVertex2f(0.768f, -0.03f);
    glVertex2f(0.768f, -0.12f);
    glEnd();

    glBegin(GL_POLYGON); //Attic  window
    glColor3ub(173,118,98);

    glVertex2f(0.755f, 0.003f);
    glVertex2f(0.778f, 0.003f);
    glVertex2f(0.778f, 0.055);
    glVertex2f(0.755f, 0.055f);
    glEnd();


    glBegin(GL_POLYGON); //Attic window a blue
    glColor3ub(172,213,231);

    glVertex2f(0.76f, 0.01f);
    glVertex2f(0.775f, 0.01f);
    glVertex2f(0.775f, 0.05);
    glVertex2f(0.76f, 0.05f);
    glEnd();




}



void school()
{



//school road
    glBegin(GL_POLYGON);
    glColor3ub(192,192,192);

    glVertex2f(-0.05f,0.08f);
    glVertex2f(0.40f,0.08f);

    glVertex2f(0.35f,.00f);
    glVertex2f(-.10f,.00f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(189, 106, 102);

    glVertex2f(0.00f,0.04f);
    glVertex2f(0.30f,0.04f);

    glVertex2f(0.30f,0.12f);
    glVertex2f(0.00f,0.12f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 106, 102);
    
    glVertex2d(.00f,.125f);
    glVertex2d(.30f,.125f);

    glVertex2d(.30f,.24f);
    glVertex2d(.00f,.24f);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    // Define the vertices of the rectangle
    glVertex2d(-0.02f, 0.28f);
    glVertex2d(0.33f, 0.28f);
    glVertex2d(0.33f, 0.24f);
    glVertex2d(-0.02f, 0.24f);

    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);
    glVertex2d(-0.02f, 0.15f);
    glVertex2d(0.33f, 0.15f);
    glVertex2d(0.33f, 0.12);
    glVertex2d(-0.02f, 0.12f);

    glEnd();



//window 1

    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.03f,.09f);
    glVertex2d(.07f,.09f);

    glVertex2d(.07f,.12f);
    glVertex2d(.03f,.12f);
    glEnd();



    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(.04f,.10f);
    glVertex2d(.06f,.10f);

    glVertex2d(.06f,.12f);
    glVertex2d(.04f,.12f);
    glEnd();

//window 2
    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.13f,.09f);
    glVertex2d(.17f,.09f);

    glVertex2d(.17f,.12f);
    glVertex2d(.13f,.12f);
    glEnd();



    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(.14f,.10f);
    glVertex2d(.16f,.10f);

    glVertex2d(.16f,.12f);
    glVertex2d(.14f,.12f);
    glEnd();

//window 3

    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.23f,.09f);
    glVertex2d(.27f,.09f);

    glVertex2d(.27f,.12f);
    glVertex2d(.23f,.12f);
    glEnd();



    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(0.24f,0.10f);
    glVertex2d(0.26f,0.10f);

    glVertex2d(0.26f,0.12f);
    glVertex2d(0.24f,0.12f);

    glEnd();


//window 1
    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.03f,.21f);
    glVertex2d(.07f,.21f);

    glVertex2d(.07f,.24f);
    glVertex2d(.03f,.24f);
    glEnd();



    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(.04f,.22f);
    glVertex2d(.06f,.22f);

    glVertex2d(.06f,.24f);
    glVertex2d(.04f,.24f);
    glEnd();

//window 2
    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.13f,.21f);
    glVertex2d(.17f,.21f);

    glVertex2d(.17f,.24f);
    glVertex2d(.13f,.24f);
    glEnd();



    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(.14f,.22f);
    glVertex2d(.16f,.22f);

    glVertex2d(.16f,.24f);
    glVertex2d(.14f,.24f);
    glEnd();

//window 3

    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.23f,.21f);
    glVertex2d(.27f,.21f);

    glVertex2d(.27f,.24f);
    glVertex2d(.23f,.24f);
    glEnd();



    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);
    glVertex2d(.24f,.22f);
    glVertex2d(.26f,.22f);

    glVertex2d(.26f,.24f);
    glVertex2d(.24f,.24f);
    glEnd();




}





void prayerplace()
{


    int i;         //Ground

    GLfloat x9=0.14f;
    GLfloat y9=-0.25f;
    GLfloat radius =.16f;
    int triangleAmount = 20;
    float twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(180, 180, 180);
    glVertex2f(x9, y9); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x9 + (radius * cos(i *  twicePi / triangleAmount)),
            y9 + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    glBegin(GL_POLYGON); //left side
    glColor3ub(159,155,196);

    glVertex2f(0.02f,-0.28f);
    glVertex2f(0.10f,-0.30f);

    glVertex2f(0.10f,0.03f);
    glVertex2f(0.00f,0.0f);

    glEnd();

    glBegin(GL_POLYGON); //left side shadow
    glColor3ub(89,82,72);

    glVertex2f(0.00f,0.0f);
    glVertex2f(-0.01f,0.008f);

    glVertex2f(0.10f,0.04f);
    glVertex2f(0.10f,0.03f);

    glEnd();

    glBegin(GL_POLYGON); //left side roof
    glColor3ub(159,155,196);
    glVertex2f(-0.01f,0.008f);
    glVertex2f(-0.01f,0.018f);
    glVertex2f(0.10f,0.06f);

    glVertex2f(0.10f,0.04f);

    glEnd();



    glBegin(GL_POLYGON); //right side main
    glColor3ub(111,106,156);
    glVertex2f(0.10f,0.03f);
    glVertex2f(0.30f,-0.01f);
    glVertex2f(0.27f,-0.25f);
    glVertex2f(0.25f,-0.20f);
    glVertex2f(0.095f,-0.30f);
    glEnd();


    glBegin(GL_POLYGON); //right side shadow
    glColor3ub(89,82,72);

    glVertex2f(0.10f,0.03f);
    glVertex2f(0.30f,-0.01f);

    glVertex2f(0.307f, 0.00f);
    glVertex2f(0.10f,0.04f);




    glEnd();

    glBegin(GL_POLYGON); //right side roof
    glColor3ub(111,106,156);
    glVertex2f(0.10f,0.04f);
    glVertex2f(0.10f,0.06f);
    glVertex2f(0.307f, 0.018f);
    glVertex2f(0.307f,0.00f);




    glEnd();



    glBegin(GL_POLYGON); //right side grill
    glColor3ub(168,73,13);
    glVertex2f(0.13f,-0.08f);
    glVertex2f(0.27f,-0.10f);

    glVertex2f(0.27f,-0.30f);
    glVertex2f(0.13f,-0.30f);
    glEnd();



    glBegin(GL_POLYGON); //right side grill
    glColor3ub(98,106,109);
    glVertex2f(0.19f,-0.18f);
    glVertex2f(0.20f,-0.18f);

    glVertex2f(0.20f,-0.30f);
    glVertex2f(0.19f,-0.30f);
    glEnd();


    glBegin(GL_POLYGON); //right side grill
    glColor3ub(146,170,180);
    glVertex2f(0.20f,-0.18f);
    glVertex2f(0.23f,-0.19f);
    glVertex2f(0.23f,-0.30f);
    glVertex2f(0.20f,-0.30f);
    glEnd();


    glBegin(GL_POLYGON); //right side grill
    glColor3ub(237,244,237);

    glVertex2f(0.205f,-0.21f);
    glVertex2f(0.205f,-0.30f);
    glVertex2f(0.225f,-0.30f);
    glVertex2f(0.225f,-0.22f);
    glVertex2f(0.215f,-0.20f);



    glEnd();



    glBegin(GL_POLYGON); //right side grill depth triangle
    glColor3ub(159,155,196);
    glVertex2f(0.13f,-0.08f);
    glVertex2f(0.11f,-0.29f);
    glVertex2f(0.13f,-0.30f);


    glEnd();

    glBegin(GL_POLYGON); //right side top window
    glColor3ub(2,35,66);
    glVertex2f(0.14f,-0.02f);
    glVertex2f(0.27f,-0.05f);
    glVertex2f(0.27f,-0.075f);
    glVertex2f(0.14f,-0.05f);


    glEnd();

    glBegin(GL_POLYGON); //left side top window
    glColor3ub(2,35,66);

    glVertex2f(0.005f,-0.03f);
    glVertex2f(0.09f, -0.005f);
    glVertex2f(0.09f,-0.035f);
    glVertex2f(0.01f,-0.055f);


    glEnd();




    glBegin(GL_POLYGON); //left side Door
    glColor3ub(188,138,105);

    glVertex2f(0.03f,-0.285f);
    glVertex2f(0.07f,-0.295f);

    glVertex2f(0.07f,-0.12f);
    glVertex2f(0.02f,-0.14f);

    glEnd();


    glBegin(GL_POLYGON); //Below border left side
    glColor3ub(102,104,103);

    glVertex2f(0.01f,-0.27f);
    glVertex2f(0.095f,-0.298f);
    glVertex2f(0.095f,-0.315f);
    glVertex2f(0.01f,-0.285f);


    glEnd();


    glBegin(GL_POLYGON); //right side border below 1
    glColor3ub(102,104,103);

    glVertex2f(0.095f,-0.30f);
    glVertex2f(0.095f,-0.315f);

    glVertex2f(0.11f,-0.295f);
    glVertex2f(0.11f,-0.275f);

    glEnd();

    glBegin(GL_POLYGON); //right side border below 2
    glColor3ub(102,104,103);

    glVertex2f(0.13f,-0.314f);
    glVertex2f(0.11f,-0.30f);
    glVertex2f(0.11f,-0.275f);
    glVertex2f(0.13f,-0.295f);

    glEnd();

    glBegin(GL_POLYGON); //right side border final
    glColor3ub(102,104,103);
    glVertex2f(0.13f,-0.296f);
    glVertex2f(0.27f,-0.30f);
    glVertex2f(0.27f,-0.315f);

    glVertex2f(0.13f,-0.315f);



    glEnd();

}


void college ()
{
    glBegin(GL_POLYGON); //Floor
    glColor3ub(168, 169, 173);
    glVertex2f(-0.58f,0.05f);
    glVertex2f(-0.45f,-0.18f);
    glVertex2f(-0.20f,-0.18f);
    glVertex2f(-0.25f,0.05f);

    glEnd();

    glBegin(GL_POLYGON); //Full building
    glColor3ub(30,144,255);
    glVertex2f(-0.44f,-0.10f);
    glVertex2f(-0.28f,-0.10f);
    glVertex2f(-0.28f,0.25f);
    glVertex2f(-0.44f,0.25f);

    glEnd();

    glBegin(GL_POLYGON); //Door-portion
    glColor3ub(0,255,255);
    glVertex2f(-0.38f,-0.10f);
    glVertex2f(-0.34f,-0.10f);
    glVertex2f(-0.34f,-0.02f);
    glVertex2f(-0.38f,-0.02f);

    glEnd();


    glBegin(GL_POLYGON); //Main-Door
    glColor3ub(128,128,128);
    glVertex2f(-0.38f,-0.10f);
    glVertex2f(-0.35f,-0.09f);
    glVertex2f(-0.35f,-0.03f);
    glVertex2f(-0.38f,-0.02f);

    glEnd();

    glBegin(GL_POLYGON); //black-shadow left
    glColor3ub(105,105,105);
    glVertex2f(-0.44f,0.25f);
    glVertex2f(-0.44f,-0.10f);
    glVertex2f(-0.439f,-0.10f);
    glVertex2f(-0.439f,0.25f);

    glEnd();



    glBegin(GL_POLYGON); //black-shadow bottom
    glColor3ub(105,105,105);
    glVertex2f(-0.44f,-0.10f);
    glVertex2f(-0.28f,-0.10f);
    glVertex2f(-0.28f,-0.102f);
    glVertex2f(-0.44f,-0.102f);

    glEnd();


    glBegin(GL_POLYGON); //right-side
    glColor3ub(30,144,255);
    glVertex2f(-0.28f,-0.10f);
    glVertex2f(-0.25f,-0.06f);
    glVertex2f(-0.25f,0.29f);
    glVertex2f(-0.28f,0.25f);

    glEnd();


    glBegin(GL_POLYGON); //Upper-side shadow
    glColor3ub(105,105,105);
    glVertex2f(-0.278f,0.248f);
    glVertex2f(-0.246f,0.292f);
    glVertex2f(-0.402f,0.292f);
    glVertex2f(-0.444f,0.248f);

    glEnd();



    glBegin(GL_POLYGON); //Upper-side
    glColor3ub(30,144,255);
    glVertex2f(-0.28f,0.25f);
    glVertex2f(-0.25f,0.29f);
    glVertex2f(-0.40f,0.29f);
    glVertex2f(-0.44f,0.25f);

    glEnd();


    glBegin(GL_POLYGON); //black-shadow bold left section up
    glColor3ub(105,105,105);
    glVertex2f(-0.443f,0.25f);
    glVertex2f(-0.277f,0.25f);
    glVertex2f(-0.277f,0.23f);
    glVertex2f(-0.443f,0.23f);

    glEnd();

    glBegin(GL_POLYGON); //black-shadow bold right section up
    glColor3ub(105,105,105);
    glVertex2f(-0.28f,0.25f);
    glVertex2f(-0.25f,0.29f);
    glVertex2f(-0.25f,0.27f);
    glVertex2f(-0.28f,0.23f);

    glEnd();

    glBegin(GL_POLYGON); //black-shadow bold 2
    glColor3ub(105,105,105);
    glVertex2f(-0.443f,0.145f);
    glVertex2f(-0.277f,0.145f);
    glVertex2f(-0.277f,0.125f);
    glVertex2f(-0.443f,0.125f);

    glEnd();

    glBegin(GL_POLYGON); //black-shadow bold 2.2 middle section right
    glColor3ub(105,105,105);
    glVertex2f(-0.28f,0.145f);
    glVertex2f(-0.25f,0.185f);
    glVertex2f(-0.25f,0.165f);
    glVertex2f(-0.28f,0.125f);

    glEnd();

    glBegin(GL_POLYGON); //black-shadow bold 3
    glColor3ub(105,105,105);
    glVertex2f(-0.443f,0.04f);
    glVertex2f(-0.277f,0.04f);
    glVertex2f(-0.277f,0.02f);
    glVertex2f(-0.443f,0.02f);

    glEnd();

    glBegin(GL_POLYGON); //black-shadow bold 3.3
    glColor3ub(105,105,105);
    glVertex2f(-0.28f,0.04f);
    glVertex2f(-0.25f,0.08f);
    glVertex2f(-0.25f,0.06f);
    glVertex2f(-0.28f,0.02f);

    glEnd();


    glBegin(GL_POLYGON); //black-shadow
    glColor3ub(105,105,105);
    glVertex2f(-0.25f,-0.06f);
    glVertex2f(-0.25f,0.29f);
    glVertex2f(-0.252f,0.29f);
    glVertex2f(-0.252f,-0.06f);

    glEnd();


    glBegin(GL_POLYGON); //black-shadow-right
    glColor3ub(105,105,105);
    glVertex2f(-0.28f,-0.10f);
    glVertex2f(-0.28f,0.25f);
    glVertex2f(-0.281f,0.25f);
    glVertex2f(-0.281f,-0.10f);

    glEnd();

    glBegin(GL_POLYGON); //black-shadow
    glColor3ub(105,105,105);
    glVertex2f(-0.28f,-0.10f);
    glVertex2f(-0.25f,-0.06f);
    glVertex2f(-0.249f,-0.05f);
    glVertex2f(-0.276f,-0.102f);

    glEnd();




    glBegin(GL_POLYGON); // Window bottom left
    glColor3ub(241,220,203);
    glVertex2f(-0.42f,-0.07f);
    glVertex2f(-0.39f,-0.07f);
    glVertex2f(-0.39f,0.00f);
    glVertex2f(-0.42f,0.00f);

    glEnd();


    glBegin(GL_POLYGON); // Window bottom left a
    glColor3ub(112,164,177);
    glVertex2f(-0.418f,-0.068f);
    glVertex2f(-0.392f,-0.068f);
    glVertex2f(-0.392f,-0.002f);
    glVertex2f(-0.418f,-0.002f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); // Window bottom left middle border
    glColor3ub(241,220,203);
    glVertex2f(-0.405f,-0.07f);
    glVertex2f(-0.405f,-0.00f);

    glEnd();




    glBegin(GL_POLYGON); // Window middle left
    glColor3ub(241,220,203);
    glVertex2f(-0.42f,0.05f);
    glVertex2f(-0.39f,0.05f);
    glVertex2f(-0.39f,0.12f);
    glVertex2f(-0.42f,0.12f);

    glEnd();


    glBegin(GL_POLYGON); // Window middle left a
    glColor3ub(112,164,177);
    glVertex2f(-0.418f, 0.054f);
    glVertex2f(-0.392f, 0.054f);
    glVertex2f(-0.392f,0.116f);
    glVertex2f(-0.418f,0.116f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); // Window middle left middle border
    glColor3ub(241,220,203);
    glVertex2f(-0.405f,0.05f);
    glVertex2f(-0.405f,0.12f);

    glEnd();


    glBegin(GL_POLYGON); // Window top left
    glColor3ub(241,220,203);
    glVertex2f(-0.42f,0.15f);
    glVertex2f(-0.39f,0.15f);
    glVertex2f(-0.39f,0.22f);
    glVertex2f(-0.42f,0.22f);

    glEnd();


    glBegin(GL_POLYGON); // Window top left a
    glColor3ub(112,164,177);
    glVertex2f(-0.418f, 0.155f);
    glVertex2f(-0.392f, 0.155f);
    glVertex2f(-0.392f,0.218f);
    glVertex2f(-0.418f,0.218f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); // Window middle top middle border
    glColor3ub(241,220,203);
    glVertex2f(-0.405f,0.15f);
    glVertex2f(-0.405f,0.22f);

    glEnd();



    glBegin(GL_POLYGON); // Window bottom right
    glColor3ub(241,220,203);
    glVertex2f(-0.32f,-0.07f);
    glVertex2f(-0.29f,-0.07f);
    glVertex2f(-0.29f,0.00f);
    glVertex2f(-0.32f,0.00f);

    glEnd();


    glBegin(GL_POLYGON); // Window bottom right a
    glColor3ub(112,164,177);
    glVertex2f(-0.318f,-0.068f);
    glVertex2f(-0.292f,-0.068f);
    glVertex2f(-0.292f,-0.002f);
    glVertex2f(-0.318f,-0.002f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); // Window bottom right middle border
    glColor3ub(241,220,203);
    glVertex2f(-0.305f,-0.07f);
    glVertex2f(-0.305f,-0.00f);

    glEnd();

    glBegin(GL_POLYGON); // Window middle right
    glColor3ub(241,220,203);
    glVertex2f(-0.32f,0.05f);
    glVertex2f(-0.29f,0.05f);
    glVertex2f(-0.29f,0.12f);
    glVertex2f(-0.32f,0.12f);

    glEnd();


    glBegin(GL_POLYGON); // Window middle right a
    glColor3ub(112,164,177);
    glVertex2f(-0.318f, 0.054f);
    glVertex2f(-0.292f, 0.054f);
    glVertex2f(-0.292f,0.116f);
    glVertex2f(-0.318f,0.116f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); // Window middle right middle border
    glColor3ub(241,220,203);
    glVertex2f(-0.305f,0.05f);
    glVertex2f(-0.305f,0.12f);

    glEnd();



    glBegin(GL_POLYGON); // Window top right
    glColor3ub(241,220,203);
    glVertex2f(-0.32f,0.15f);
    glVertex2f(-0.29f,0.15f);
    glVertex2f(-0.29f,0.22f);
    glVertex2f(-0.32f,0.22f);

    glEnd();


    glBegin(GL_POLYGON); // Window top right a
    glColor3ub(112,164,177);
    glVertex2f(-0.318f, 0.152f);
    glVertex2f(-0.292f, 0.152f);
    glVertex2f(-0.292f,0.218f);
    glVertex2f(-0.318f,0.218f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); // Window right top middle border
    glColor3ub(241,220,203);
    glVertex2f(-0.305f,0.15f);
    glVertex2f(-0.305f,0.22f);

    glEnd();



}


void vcar()
{

    int i;

    GLfloat x=-0.606f;
    GLfloat y=-0.83f;
    GLfloat radius =.02f;
    int triangleAmount = 20;
    double twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(10, 10, 10);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    GLfloat p=-0.676f;
    GLfloat q=-0.95f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(10, 10, 10);
    glVertex2f(p, q); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            p + (radius * cos(i *  twicePi / triangleAmount)),
            q + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(214,33,38); //front

    glVertex2f(-0.65f,-0.80f);
    glVertex2f(-0.615f,-0.75f);
    glVertex2f(-0.58f,-0.80f);
    glVertex2f(-0.61,-0.85f);
    glEnd();

    glBegin(GL_POLYGON); //front glass
    glColor3ub(174, 209, 228);

    glVertex2f(-0.65f,-0.80f);
    glVertex2f(-0.61,-0.85f);
    glVertex2f(-0.63,-0.87f);
    glVertex2f(-0.67f,-0.82f);




    glEnd();


    glBegin(GL_POLYGON); //middle body top
    glColor3ub(214,33,38);

    glVertex2f(-0.67f,-0.82f);
    glVertex2f(-0.63,-0.87f);
    glVertex2f(-0.67,-0.93f);
    glVertex2f(-0.71f,-0.89f);




    glEnd();


    glBegin(GL_POLYGON); //back glass
    glColor3ub(174, 209, 228);

    glVertex2f(-0.71f,-0.89f);
    glVertex2f(-0.67,-0.93f);
    glVertex2f(-0.675,-0.95f);
    glVertex2f(-0.715f,-0.91f);

    glEnd();

    glBegin(GL_POLYGON);  //back part
    glColor3ub(214,33,38);

    glVertex2f(-0.715f,-0.91f);
    glVertex2f(-0.675,-0.95f);
    glVertex2f(-0.69,-0.98f);
    glVertex2f(-0.73f,-0.94f);



    glEnd();


    glBegin(GL_POLYGON);  //back part a
    glColor3ub(214,33,38);
    glVertex2f(-0.69,-0.98f);
    glVertex2f(-0.73f,-0.94f);
    glVertex2f(-0.73f,-0.955f);
    glVertex2f(-0.693,-0.99f);




    glEnd();


    glBegin(GL_POLYGON); //side under glass
    glColor3ub(144,32,37);

    glVertex2f(-0.693,-0.98f);
    glVertex2f(-0.68f,-0.98f);
    glVertex2f(-0.58f,-0.81f);

    glVertex2f(-0.58f,-0.80f);


    glEnd();


    glBegin(GL_POLYGON); //side glass
    glColor3ub(174, 209, 228);


    glVertex2f(-0.61,-0.85f);
    glVertex2f(-0.63,-0.87f);
    glVertex2f(-0.67,-0.93f);
    glVertex2f(-0.675,-0.955f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES); //front glass border
    glColor3ub(214,33,38);

    glVertex2f(-0.645f,-0.80f);
    glVertex2f(-0.67f,-0.827f);
    glEnd();


    glLineWidth(4);
    glBegin(GL_LINES); //front glass border
    glColor3ub(214,33,38);

    glVertex2f(-0.61,-0.85f);
    glVertex2f(-0.635,-0.87f);
    glEnd();




    glLineWidth(4);
    glBegin(GL_LINES); //front glass border
    glColor3ub(214,33,38);
    glVertex2f(-0.705f,-0.89f);
    glVertex2f(-0.715f,-0.915f);

    glVertex2f(-0.67,-0.925f);
    glVertex2f(-0.675,-0.955f);
    glEnd();


    glLineWidth(8);
    glBegin(GL_LINES); //front glass border
    glColor3ub(214,33,38);
    glVertex2f(-0.68f,-0.97f);
    glVertex2f(-0.693,-0.98f);
    glEnd();


}








void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON); // green background main
    glColor3ub(166, 210, 131);
    glVertex2f(-1.00f,-1.00f);
    glVertex2f(1.00f,-1.00f);
    glVertex2f(1.00f,0.40f);
    glVertex2f(-1.00f,0.40f);

    glEnd();

    glBegin(GL_POLYGON); // sky
    glColor3ub(152, 219, 248);
    glVertex2f(-1.00f,0.40f);
    glVertex2f(1.00f,0.40f);
    glVertex2f(1.00f,1.00f);
    glVertex2f(-1.00f,1.00f);

    glEnd();


    


    glBegin(GL_POLYGON); // road back 1
    glColor3ub(168, 169, 173);
    glVertex2f(-0.13f,0.40f);
    glVertex2f(-0.13f,0.38f);
    glVertex2f(-0.32f,0.31f);
    glVertex2f(-0.35f,0.33f);

    glEnd();


    glBegin(GL_POLYGON); // road back 2
    glColor3ub(168, 169, 173);
    glVertex2f(-0.32f,0.31f);
    glVertex2f(-0.29f,0.33f);
    glVertex2f(0.12f,0.20f);
    glVertex2f(0.00f,0.16f);
    glEnd();

    glBegin(GL_POLYGON); // road back 3
    glColor3ub(168, 169, 173);
    glVertex2f(0.12f,0.20f);
    glVertex2f(0.00f,0.20f);
    glVertex2f(-0.74f,-0.80f);
    glVertex2f(-0.49f,-0.81f);
    glEnd();

    glBegin(GL_POLYGON); // road back 4
    glColor3ub(168, 169, 173);
    glVertex2f(-0.74f,-0.80f);
    glVertex2f(-0.49f,-0.81f);
    glVertex2f(-0.40f,-1.00f);
    glVertex2f(-0.72f,-1.00f);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES); // road back 1 inside
    glColor3ub(129, 130, 134);
    glVertex2f(-0.13f,0.39f);
    glVertex2f(-0.313f,0.32f);

    glEnd();

    glBegin(GL_POLYGON); // road back 2 inside
    glColor3ub(129, 130, 134);
    glVertex2f(0.08f,0.19f);
    glVertex2f(0.05f,0.16f);
    glVertex2f(-0.31f,0.32f);
    glVertex2f(-0.31f,0.33f);
    glEnd();

    glBegin(GL_POLYGON); // road back 3 inside
    glColor3ub(129, 130, 134);
    glVertex2f(0.07f,0.19f);
    glVertex2f(0.03f,0.19f);
    glVertex2f(-0.66f,-0.80f);
    glVertex2f(-0.57f,-0.81f);
    glEnd();

    glBegin(GL_POLYGON); // road back 4 inside
    glColor3ub(129, 130, 134);
    glVertex2f(-0.66f,-0.80f);
    glVertex2f(-0.57f,-0.81f);
    glVertex2f(-0.50f,-1.00f);
    glVertex2f(-0.62f,-1.00f);
    glEnd();




    if (positionvcara <= 0.25f)
    {


        glPushMatrix();
        glTranslatef(positionvcara, positionvcar, 0.00f);
        glScalef(scaling1, scaling2, 0.00f);
        vcar();
        glPopMatrix();

    }
    else
    {
        positionvcara= 0;
        positionvcar= 0;
        scaling1=1.00;
        scaling2=1.00;
    }


    glPushMatrix();
    glTranslatef(-0.07f,0.05f, 0.00f);
    glScalef(.90,0.90, 0.00f);
    glPopMatrix();


    if (positionf1 <= 0.32f)
    {

        glPushMatrix();
        glTranslatef(positionf1,positionf2, 0.00f);
        glScalef(scalef1,scalef2, 0.00f);
        glPopMatrix();
    }
    else
    {
        positionf1= -0.16f;
        positionf2=-0.40f;
        scalef1=1.00;
        scalef2=1.00;
    }

    int i;

    GLfloat x=.82f;
    GLfloat y=-.31f;
    GLfloat radius =.04f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(56, 180, 232);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



    glPushMatrix();
    glTranslatef(-0.10f, -0.04f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    college();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(0.36f, 0.30f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    jhaugass1a();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(0.63f, 0.30f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.75f, 0.33f, 0.00f);
    glScalef(0.50f, 0.50f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.81f, 0.29f, 0.00f);
    glScalef(0.55f, 0.55f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.86f, 0.25f, 0.00f);
    glScalef(0.60f, 0.60f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1.03f, 0.35f, 0.00f);
    glScalef(0.50f, 0.50f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.00f, 0.35f, 0.00f);
    glScalef(0.53f, 0.53f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.03f, 0.25f, 0.00f);
    glScalef(0.55f, 0.55f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.06f, 0.28f, 0.00f);
    glScalef(0.53f, 0.53f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1.2f, 0.50f, 0.00f);
    glScalef(0.45f, 0.45f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1.13f, 0.49f, 0.00f);
    glScalef(0.43f, 0.43f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.06f, 0.49f, 0.00f);
    glScalef(0.41f, 0.41f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.45f, -0.11f, 0.00f);
    glScalef(0.70f, 0.75f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55f, -0.11f, 0.00f);
    glScalef(0.70f, 0.75f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.50f, -0.16f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    jhaugass1a();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.60f, -0.16f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.83f, -0.16f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.88f, -0.14f, 0.00f);
    glScalef(0.77f, 0.77f, 0.00f);
    jhaugass1();
    glPopMatrix();





    glPushMatrix();
    glTranslatef(-0.10f, -0.07f, 0.00f);
    glScalef(0.70f, 0.70f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.09f, -0.05f, 0.00f);
    glScalef(0.65f, 0.65f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.08f, -0.03f, 0.00f);
    glScalef(0.60f, 0.60f, 0.00f);
    jhaugass1();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(0.00f, 0.05f, 0.00f);
    glScalef(0.90f, 0.90f, 0.00f);
    prayerplace();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(0.22f, 0.28f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    tree1();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(0.45f, 0.00f, 0.00f);
    glScalef(0.65f, 0.80f, 0.00f);
    school();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(0.28f, 0.12f, 0.00f);
    glScalef(0.50f, 0.45f, 0.00f);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(0.50f, 0.30f, 0.00f);
    glScalef(0.65f, 0.65f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.44f, 0.30f, 0.00f);
    glScalef(0.55f, 0.55f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.42f, 0.33f, 0.00f);
    glScalef(0.50f, 0.50f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.97f, -0.07f, 0.00f);
    glScalef(0.60f, 0.60f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.89f, -0.07f, 0.00f);
    glScalef(0.55f, 0.55f, 0.00f);
    jhaugass1();
    glPopMatrix();



    glBegin(GL_POLYGON); //fly over
    glColor3ub(169, 170, 174);
    glVertex2f(-1.00f,-0.35f);
    glVertex2f(1.00f,-0.35f);
    glVertex2f(1.00f,-0.55f);
    glVertex2f(-1.00f,-0.55f);
    glEnd();


    glBegin(GL_POLYGON); //fly over  border
    glColor3ub(88, 86, 91);
    glVertex2f(-1.00f,-0.55f);
    glVertex2f(-1.00f,-0.56f);
    glVertex2f(1.00f,-0.56f);
    glVertex2f(1.00f,-0.55f);
    glEnd();

    glBegin(GL_POLYGON); //metro rail border
    glColor3ub(158, 158, 160);
    glVertex2f(-1.00f,-0.35f);
    glVertex2f(1.00f,-0.35f);
    glVertex2f(1.00f,-0.38f);
    glVertex2f(-1.00f,-0.38f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); //metro rail line
    glColor3ub(72, 74, 71);
    glVertex2f(-1.00f,-0.37f);
    glVertex2f(1.00f,-0.37f);
    glEnd();

    glBegin(GL_POLYGON); //road middle section
    glColor3ub(110, 157, 61);
    glVertex2f(-1.00f,-0.45f);
    glVertex2f(1.00f,-0.45f);
    glVertex2f(1.00f,-0.46f);
    glVertex2f(-1.00f,-0.46f);
    glEnd();


    glBegin(GL_POLYGON); //road piller 1
    glColor3ub(168, 169, 173);
    glVertex2f(-0.85f,-0.56f);
    glVertex2f(-.78f,-0.56f);
    glVertex2f(-.78f,-0.76f);
    glVertex2f(-0.85f,-0.76f);
    glEnd();

    glBegin(GL_POLYGON); //road piller 1a
    glColor3ub(95, 89, 95);
    glVertex2f(-.78f,-0.56f);
    glVertex2f(-.78f,-0.76f);
    glVertex2f(-.80f,-0.76f);
    glVertex2f(-.80f,-0.56f);
    glEnd();

    glBegin(GL_POLYGON); //road piller 2
    glColor3ub(168, 169, 173);
    glVertex2f(-0.32f,-0.56f);
    glVertex2f(-.25f,-0.56f);
    glVertex2f(-.25f,-0.76f);
    glVertex2f(-0.32f,-0.76f);
    glEnd();

    glBegin(GL_POLYGON); //road piller 2a
    glColor3ub(95, 89, 95);
    glVertex2f(-.25f,-0.56f);
    glVertex2f(-.25f,-0.76f);
    glVertex2f(-.27f,-0.76f);
    glVertex2f(-.27f,-0.56f);
    glEnd();

    glBegin(GL_POLYGON); //road piller 3
    glColor3ub(168, 169, 173);
    glVertex2f(0.18f,-0.56f);
    glVertex2f(0.24f,-0.56f);
    glVertex2f(0.24f,-0.76f);
    glVertex2f(0.18f,-0.76f);
    glEnd();

    glBegin(GL_POLYGON); //road piller 3a
    glColor3ub(95, 89, 95);
    glVertex2f(0.24f,-0.56f);
    glVertex2f(0.24f,-0.76f);
    glVertex2f(0.26f,-0.76f);
    glVertex2f(0.26f,-0.56f);
    glEnd();


    glBegin(GL_POLYGON); //road piller 4
    glColor3ub(168, 169, 173);
    glVertex2f(0.48f,-0.56f);
    glVertex2f(0.54f,-0.56f);
    glVertex2f(0.54f,-0.76f);
    glVertex2f(0.48f,-0.76f);
    glEnd();

    glBegin(GL_POLYGON); //road piller 4a
    glColor3ub(95, 89, 95);
    glVertex2f(0.54f,-0.56f);
    glVertex2f(0.54f,-0.76f);
    glVertex2f(0.56f,-0.76f);
    glVertex2f(0.56f,-0.56f);
    glEnd();


    glBegin(GL_POLYGON); //road piller 5
    glColor3ub(168, 169, 173);
    glVertex2f(0.94f,-0.56f);
    glVertex2f(1.00f,-0.56f);
    glVertex2f(1.00f,-0.76f);
    glVertex2f(0.94f,-0.76f);
    glEnd();

    glBegin(GL_POLYGON); //road piller 5a
    glColor3ub(95, 89, 95);
    glVertex2f(0.99f,-0.56f);
    glVertex2f(0.99f,-0.76f);
    glVertex2f(1.00f,-0.76f);
    glVertex2f(1.00f,-0.56f);
    glEnd();


    glPushMatrix();
    glTranslatef(0.91f, -0.12f, 0.00f);
    glScalef(0.72f, 0.72f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.94f, -0.10f, 0.00f);
    glScalef(0.68f, 0.68f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.97f, -0.08f, 0.00f);
    glScalef(0.65f, 0.65f, 0.00f);
    jhaugass1();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(-0.10f, -0.08f, 0.00f);
    glScalef(0.90f, 0.90f, 0.00f);
    university();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.12f, 0.26f, 0.00f);
    glScalef(0.60f, 0.60f, 0.00f);
    jhaugass1();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(0.15f, 0.29f, 0.00f);
    glScalef(0.57f, 0.57f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.18f, 0.33f, 0.00f);
    glScalef(0.54f, 0.54f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.20f, 0.37f, 0.00f);
    glScalef(0.51f, 0.51f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.22f, 0.40f, 0.00f);
    glScalef(0.48f, 0.48f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.24f, 0.43f, 0.00f);
    glScalef(0.45f, 0.45f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.26f, 0.46f, 0.00f);
    glScalef(0.42f, 0.42f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.28f, 0.49f, 0.00f);
    glScalef(0.39f, 0.39f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.28f, 0.505f, 0.00f);
    glScalef(0.36f, 0.36f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.36f, 0.17f, 0.00f);
    glScalef(0.15f, 0.25f, 0.00f);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.10f, -0.10f, 0.00f);
    glScalef(0.90f, 0.90f, 0.00f);
    Atikurhouse();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.40f, 0.25f, 0.00f);
    glScalef(0.30f, 0.35f, 0.00f);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.60f, 0.20f, 0.00f);
    glScalef(0.55f, 0.55f, 0.00f);
    Atikurhouse();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(1.45f, 0.05f, 0.00f);
    glScalef(0.70f, 0.70f, 0.00f);
    tree2();
    glPopMatrix();

    glPushMatrix(); //cloud
    glTranslatef(position2,0.0f, 0.0f);
    cloud1();
    cloud2();
    cloud3();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(position22,0.40f, 0.0f);
    glScalef(0.60,0.60,0.00);
    bird();
    bird2();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(position22a,0.35f, 0.00f);
    glScalef(0.60,0.60,0.00);
    bird3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position22b, 0.35f, 0.0f);
    glScalef(0.60,0.60,0.00);
    bird4();
    glPopMatrix();

 glPushMatrix();
    glTranslatef(-0.50f, 0.53f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.45f, 0.55f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    jhaugass1a();
    glPopMatrix();

glPushMatrix();
    glTranslatef(-1.15f, 0.13f, 0.00f);
    glScalef(0.45f, 0.45f, 0.00f);
    Atikurhousea();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.35f, 0.00f, 0.00f);
    glScalef(0.70f, 0.70f, 0.00f);
    tree1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position4, 0.0f, 0.0f);
    car1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    car2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    minibus();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position8,0.0f, 0.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.30f, -0.70f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.60f, -0.70f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    tree4();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position9,0.0f, 0.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position10,0.0f, 0.0f);
    jeep2();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.12f, -0.21f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    jhaugass2();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.22f, -0.19f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.60f, 0.53f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.55f, 0.52f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    jhaugass1a();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-0.40f, 0.56f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.35f, 0.57f, 0.00f);
    glScalef(0.37f, 0.37f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.30f, 0.58f, 0.00f);
    glScalef(0.36f, 0.36f, 0.00f);
    jhaugass1a();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.25f, 0.59f, 0.00f);
    glScalef(0.36f, 0.36f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.20f, 0.60f, 0.00f);
    glScalef(0.34f, 0.34f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.15f, 0.62f, 0.00f);
    glScalef(0.34f, 0.34f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.135f, 0.63f, 0.00f);
    glScalef(0.32f, 0.32f, 0.00f);
    jhaugass1a();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-0.22f, -0.08f, 0.00f);
    glScalef(0.75f, 0.75f, 0.00f);
    jhaugass3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.12f, -0.11f, 0.00f);
    glScalef(0.75f, 0.75f, 0.00f);
    jhaugass4();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(0.36f, 0.20f, 0.00f);
    glScalef(0.20f, 0.30f, 0.00f);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.70f, 0.22f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    tree1();
    glPopMatrix();






    glPushMatrix();
    glTranslatef(-0.48f, 0.22f, 0.00f);
    glScalef(0.30f, 0.35f, 0.00f);
    glPopMatrix();


    glFlush ();
}





void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1, -1, 1, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1280, 720);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("City Scenario");
    init ();
    glutDisplayFunc(display);
    glutTimerFunc(100, cloud, 0);
    glutTimerFunc(100, birdd, 0);
    glutTimerFunc(100, birdd3, 0);
    glutTimerFunc(100, birdd4, 0);
    glutTimerFunc(100, car3, 0);
    glutTimerFunc(100, car1, 0);
    glutTimerFunc(100, car2, 0);
    glutTimerFunc(100, jeep1, 0);
    glutTimerFunc(100, jeep2, 0);
    glutTimerFunc(100, minibus, 0);
    glutTimerFunc(100, minibus2, 0);
    glutTimerFunc(100, vcar, 0);
    glutTimerFunc(100, vcar1, 0);
    glutTimerFunc(100, vcar2, 0);
    glutTimerFunc(100, vcar3, 0);

    glutTimerFunc(100, vcar4x, 0);
    glutTimerFunc(100, vcar4xx, 0);
    glutTimerFunc(100, vcar4y, 0);
    glutTimerFunc(100, vcar4yy, 0);

    glutMainLoop();
    return 0;
}


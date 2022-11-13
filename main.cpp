#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstdio>
#define PI           3.14159265358979323846

GLfloat i = 0.0f;
GLfloat j = 0.0f;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.1f;

void dis();
void display();


void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(-4,4,-4,4);
}

void Idle()
{
    glutPostRedisplay();
}

GLfloat Rainposition = 0.0f;
GLfloat RainSpeed = 0.3f;

void update(int value)
{

    if(position <-6.5)
        position = 6.5f;

    position = position - speed;

    glutPostRedisplay();

    glutTimerFunc(100, update, 0.0);
}

void update2(int value)
{

    if(position2 > 12)
        position2 = -12;

    position2 += speed2;

    glutPostRedisplay();

    glutTimerFunc(100, update2, 0);
}


void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); //black
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(102, 204, 0);//base
    glVertex2f(-4.0f,2.0f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(4.0f,-1.0f);
    glVertex2f(4.0f,2.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 153, 255);//sky
    glVertex2f(-4.0f,2.0f);
    glVertex2f(-4.0f,4.0f);
    glVertex2f(4.0f,4.0f);
    glVertex2f(4.0f,2.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);//river
    glVertex2f(-4.0f,-4.0f);
    glVertex2f(4.0f,-4.0f);
    glVertex2f(4.0f,-1.0f);
    glVertex2f(-4.0f,-1.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 26, 0);//road
    glVertex2f(4.0f,-1.0f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-0.8f);
    glVertex2f(4.0f,-0.6f);
    glEnd();

    //sun
    GLfloat x=3.0f;
    GLfloat y=3.0f;
    GLfloat radius =.3f;
    int triangleAmount = 20; //# of triangles used to draw circle

    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(227, 39, 39);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //still clouds

    //cloud1
    x=-0.8f;
    y=3.6f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 1.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-0.6f;
    y=3.6f;
    radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 1.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    x=-0.4f;
    y=3.6f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 1.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //cloud3
    x=-2.8f;
    y=3.2f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 3.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-2.6f;
    y=3.2f;
    radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 3.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-2.4f;
    y=3.2f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 3.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //cloud4
    x=-1.9f;
    y=3.5f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 4.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-1.6f;
    y=3.5f;
    radius =.25f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 4.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-1.3f;
    y=3.5f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 4.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //cloud5
    x=-4.9f;
    y=2.7f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 5.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-4.6f;
    y=2.7f;
    radius =.25f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 5.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-4.3f;
    y=2.7f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 5.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //cloud6
    x=-6.8f;
    y=3.2f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 6.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-6.6f;
    y=3.2f;
    radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 6.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-6.4f;
    y=3.2f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 6.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //cloud7
    x=-5.9f;
    y=3.5f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 7.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-5.6f;
    y=3.5f;
    radius =.25f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 7.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-5.3f;
    y=3.5f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 7.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //cloud9
    x=1.6f;
    y=3.2f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 9.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=1.4f;
    y=3.2f;
    radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 9.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=1.2f;
    y=3.2f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 9.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //cloud10
    x=0.9f;
    y=2.7f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 10.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=0.6f;
    y=2.7f;
    radius =.25f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 10.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=0.3f;
    y=2.7f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 10.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //running clouds

    //cloud2
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    x=-1.8f;
    y=2.7f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 2.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-1.6f;
    y=2.7f;
    radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 2.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-1.4f;
    y=2.7f;
    radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 2.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //cloud8
    x=2.9f;
    y=3.2f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 8.1
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=2.6f;
    y=3.2f;
    radius =.25f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 8.2
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=2.3f;
    y=3.2f;
    radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 255, 255);
    glVertex2f(x, y); // Cloud 8.3
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    //back hills
    glBegin(GL_TRIANGLES);

    glColor3ub(45, 134, 45);//hill-1
    glVertex2f(-4.0f,2.0f);
    glVertex2f(-3.0f,2.0f);
    glVertex2f(-3.5f,2.5f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(45, 134, 45);//hill-2
    glVertex2f(-2.0f,2.0f);
    glVertex2f(-3.0f,2.0f);
    glVertex2f(-2.5f,2.2f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(45, 134, 45);//hill-3
    glVertex2f(-2.0f,2.0f);
    glVertex2f(0.0f,2.0f);
    glVertex2f(-1.0f,2.6f);
    glEnd();


    glBegin(GL_TRIANGLES);

    glColor3ub(45, 134, 45);//hill-4
    glVertex2f(1.0f,2.0f);
    glVertex2f(0.0f,2.0f);
    glVertex2f(0.5f,2.3f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(45, 134, 45);//hill-5
    glVertex2f(1.0f,2.0f);
    glVertex2f(1.5f,2.0f);
    glVertex2f(1.25f,2.2f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(45, 134, 45);//hill-6
    glVertex2f(3.0f,2.0f);
    glVertex2f(1.5f,2.0f);
    glVertex2f(2.0f,2.5f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(45, 134, 45);//hill-7
    glVertex2f(3.0f,2.0f);
    glVertex2f(4.0f,2.0f);
    glVertex2f(3.5f,2.5f);
    glEnd();



    //houses

    glBegin(GL_QUADS);
    glColor3ub(300, 55, 0);//house
    glVertex2f(-3.4f,-0.1f);
    glVertex2f(-1.6f,-0.1f);
    glVertex2f(-1.6f,1.0f);
    glVertex2f(-3.4f,1.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(145, 31, 0);//left window
    glVertex2f(-3.4f,0.9f);
    glVertex2f(-3.4f,0.6f);
    glVertex2f(-3.1f,0.6f);
    glVertex2f(-3.1f,0.9f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 31, 0);//right window
    glVertex2f(-1.6f,0.9f);
    glVertex2f(-1.6f,0.6f);
    glVertex2f(-1.9f,0.6f);
    glVertex2f(-1.9f,0.9f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 31, 0);//Door
    glVertex2f(-2.6f,-0.1f);//bottom left
    glVertex2f(-2.3f,-0.1f);//bottom right
    glVertex2f(-2.3f,0.2f);//top right
    glVertex2f(-2.6f,0.2f);//top left
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(453, 0, 0);//2nd house
    glVertex2f(-1.6f,0.2f);//bottom left
    glVertex2f(-0.4f,0.2f);//bottom right
    glVertex2f(-0.4f,1.3f);//top right
    glVertex2f(-1.6f,1.3f);//top left
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 77, 51);// 1st house top
    glVertex2f(-3.7f,1.0f);
    glVertex2f(-1.3f,1.0f);
    glVertex2f(-2.0f,1.5f);
    glVertex2f(-3.0f,1.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 255);//2nd home left window
    glVertex2f(-1.6f,1.0f);//bottom left
    glVertex2f(-1.6f,0.6f);//bottom right
    glVertex2f(-1.3f,0.6f);//top right
    glVertex2f(-1.3f,1.0f);//top left
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 255);//2nd home right window
    glVertex2f(-0.4,1.0f);//bottom left
    glVertex2f(-0.4f,0.6f);//bottom right
    glVertex2f(-0.7f,0.6f);//top right
    glVertex2f(-0.7f,1.0f);//top left
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 255);//2nd home door
    glVertex2f(-1.2f,0.2f);//bottom left
    glVertex2f(-0.8f,0.2f);//bottom right
    glVertex2f(-0.8f,0.5);//top right
    glVertex2f(-1.2f,0.5f);//top left
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(204, 51, 153);//2nd home top
    glVertex2f(-0.4f,1.3f);
    glVertex2f(-1.6f,1.3f);
    glVertex2f(-1.0f,1.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);//Tree 1 base
    glVertex2f(0.3f,1.0f);//bottom left
    glVertex2f(0.6f,1.0f);//bottom right
    glVertex2f(0.6f,0.0f);//top right
    glVertex2f(0.3f,0.0f);//top left
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);//tree 1  leaf
    glVertex2f(0.0f,0.8f);
    glVertex2f(0.9f,0.8f);
    glVertex2f(0.45f,1.8f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);//tree 1 top leaf
    glVertex2f(0.1f,1.3f);
    glVertex2f(0.8f,1.3f);
    glVertex2f(0.45f,2.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);//3rd house base
    glVertex2f(2.0f,1.5f);
    glVertex2f(2.0f,0.8f);
    glVertex2f(2.8f,0.8f);
    glVertex2f(2.8f,1.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);//3rd house top
    glVertex2f(1.7f,1.5f);
    glVertex2f(2.0f,1.8f);
    glVertex2f(2.8f,1.8f);
    glVertex2f(3.1f,1.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f,1.3f);
    glVertex2f(2.0f,1.1f);
    glVertex2f(2.2f,1.1f);
    glVertex2f(2.2f,1.3f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.8f,1.3f);
    glVertex2f(2.8f,1.1f);
    glVertex2f(2.6f,1.1f);
    glVertex2f(2.6f,1.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.3f,0.8f);
    glVertex2f(2.3f,1.0f);
    glVertex2f(2.5f,1.0f);
    glVertex2f(2.5f,0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 102, 0);
    glVertex2f(1.1f,0.2f);
    glVertex2f(1.2f,1.5f);
    glVertex2f(1.3f,1.5f);
    glVertex2f(1.4f,0.2f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.8f,1.2f);
    glVertex2f(1.7f,1.2f);
    glVertex2f(1.3f,2.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 102, 0);
    glVertex2f(3.3f,0.3f);
    glVertex2f(3.4f,1.2f);
    glVertex2f(3.5f,1.2f);
    glVertex2f(3.6f,0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(3.0f,0.7f);
    glVertex2f(3.9f,0.7f);
    glVertex2f(3.45f,1.5f);
    glEnd();


    //boats
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(55, 51, 0);
    glVertex2f(-3.0f,-1.5f);
    glVertex2f(-1.0f,-1.5f);
    glVertex2f(-1.4f,-1.8f);
    glVertex2f(-2.6f,-1.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 102, 0);
    glVertex2f(-2.6f,-1.5f);
    glVertex2f(-2.3f,-1.2f);
    glVertex2f(-1.7f,-1.2f);
    glVertex2f(-1.4f,-1.5f);
    glEnd();
    glPopMatrix();

    //boat2
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glScalef(1.0f,1.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(0.5f, 1.0f, 1.0f);
    glVertex2f(0.5f,-2.8f);
    glVertex2f(0.0f,-2.5f);
    glVertex2f(2.5f,-2.5f);
    glVertex2f(2.0f,-2.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 102, 0);
    glVertex2f(0.5f,-2.5f);
    glVertex2f(0.8f,-2.2f);
    glVertex2f(2.0f,-2.2f);
    glVertex2f(2.0f,-2.5f);
    glEnd();

    glLoadIdentity();
    glPopMatrix();



    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Roni's Village");
    glutInitWindowSize(320, 320);

    glutDisplayFunc(display);

    init();

    glutIdleFunc(Idle);

    glutTimerFunc(100, update, 0);

    glutTimerFunc(100, update2, 0);

    glutMainLoop();
    return 0;
}

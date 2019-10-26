#include<windows.h>

#include<GL/gl.h>

#include<GL/glu.h>

#include<GL/glut.h>

void display();

void reshape(int,int);

void timer(int);

void init()

{

    glClearColor(1.0,1.0,1.0,1.0);

}

int main(int argc, char **argv)

{

    glutInit(&argc,argv);

//glutInitDisplayMode(GLUT_TGB);

    glutInitWindowPosition(200,100);

    glutInitWindowSize(500,500);

    glutCreateWindow("window 1");

    glutDisplayFunc(display);

    glutReshapeFunc(reshape);

    glutTimerFunc(100,timer,0);

    init();

    glutMainLoop();

}

float x_position = -10.0;

int state=1;

void display()

{

    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();

    ////////////////////////////////////////////
    glColor3f(0.95f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLES);

    glVertex3f(0, x_position+1.0, 0.0);//left up

    glVertex3f(0, x_position-1.0, 0.0);//left down

    glVertex3f(2.0,x_position+1.0, 0.0);//right down
    glEnd();
            glColor3f(0.95f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLES);

    glVertex3f(0, x_position+1.0, 0.0);//left up

    glVertex3f(0, x_position-1.0, 0.0);//left down

    glVertex3f(-2.0,x_position+1.0, 0.0);//right down
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex3f(-2.0, x_position+2.0, 0.0);//left up

    glVertex3f(-2.0, x_position+1.0, 0.0);//left down

    glVertex3f(2.0,x_position+1.0, 0.0);//right down

    glVertex3f(2.0, x_position+2.0, 0.0);//right up

    glEnd();
        glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-2.0, x_position+6.0, 0.0);//left up

    glVertex3f(-2.0,x_position+ 2.0, 0.0);//left down

    glVertex3f(2.0,x_position+2.0, 0.0);//right down

    glVertex3f(2.0, x_position+6.0, 0.0);//right up

    glEnd();
            glBegin(GL_POLYGON);
    glColor3f(0.51,0.25,0.0);
    glVertex3f(-2.5, x_position+7.0, 0.0);//left up

    glVertex3f(-2.0, x_position+6.0, 0.0);//left down

    glVertex3f(2.0,x_position+6.0, 0.0);//right down

    glVertex3f(2.5, x_position+7.0, 0.0);//right up
    glEnd();
    /////////////////////Over Flow///////////////////////
            glBegin(GL_POLYGON);
    glColor3f(0.50f, 0.15f, 1.0f);
    glVertex3f(-15.0,-1.0, 0.0);//left up

    glVertex3f(-15.0,-17.0, 0.0);//left down

    glVertex3f(15.0,-17.0, 0.0);//right down

    glVertex3f(15.0, -1.0, 0.0);//right up

    glEnd();

    /////////////////SHIP///////////////////////

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_POLYGON);

    glVertex3f(x_position-1, 1.0, 0.0);//left up

    glVertex3f(x_position, -1.0, 0.0);//left down

    glVertex3f(x_position+7.0,-1.0, 0.0);//right down

    glVertex3f(x_position+8.0, 1.0, 0.0);//right up

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.51f, 0.51f);
    glVertex3f(x_position, 1.5, 0.0);//left up

    glVertex3f(x_position, 1.0, 0.0);//left down

    glVertex3f(x_position+2.0,1.0, 0.0);//right down

    glVertex3f(x_position+2.0, 1.5, 0.0);//right up

    glEnd();
        glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.15f, 0.51f);
    glVertex3f(x_position+2.5, 2.0, 0.0);//left up

    glVertex3f(x_position+2.5, 1.0, 0.0);//left down

    glVertex3f(x_position+4.5,1.0, 0.0);//right down

    glVertex3f(x_position+4.5, 2.0, 0.0);//right up

    glEnd();
            glBegin(GL_POLYGON);
    glColor3f(0.51,0.25,0.0);
    glVertex3f(x_position+5.0, 2.5, 0.0);//left up

    glVertex3f(x_position+5.0, 1.0, 0.0);//left down

    glVertex3f(x_position+7.0,1.0, 0.0);//right down

    glVertex3f(x_position+7.0, 2.5, 0.0);//right up
    glEnd();
            glBegin(GL_POLYGON);
    glColor3f(0.65,0.25,0.0);
    glVertex3f(x_position+5.5, 3.5, 0.0);//left up

    glVertex3f(x_position+5.5, 2.5, 0.0);//left down

    glVertex3f(x_position+6.5,2.5, 0.0);//right down

    glVertex3f(x_position+6.5, 3.5, 0.0);//right up
    glEnd();//x axis ship end
        /////////////////////////////////////////////////////////


    glFlush();

    glutSwapBuffers();

}

void reshape(int w,int h)

{

    glViewport(0,0,(GLsizei)w, (GLsizei)h);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glOrtho(-15,15,-15,15,-15,15);

    glMatrixMode(GL_MODELVIEW);

}

void timer(int)

{

    glutPostRedisplay();

    glutTimerFunc(1000/60,timer,0);

    x_position+= 0.10;

    switch(state)

    {

    case 1:

        if(x_position<8)

            x_position+= 0.15;

        else

            state=-1;

        break;

    case -1:

        if(x_position>-10)

            x_position-=0.15;

        else

            state=1;

        break;

    }

}

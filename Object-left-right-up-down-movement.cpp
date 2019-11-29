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

    glutCreateWindow(" © Copyright Sawrav Chowdhury");

    glutDisplayFunc(display);

    glutReshapeFunc(reshape);

    glutTimerFunc(100,timer,0);

    init();

    glutMainLoop();

}

float x_position = -5.0;

int state=1;

void display()

{

    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();



    glColor3f(0.15f, 0.45f, 0.21f);

    glBegin(GL_POLYGON);

    glVertex3f(-1, 1.0, 0.0);//left up

    glVertex3f(-1, -1.0, 0.0);//left down

    glVertex3f(+1.0,-1.0, 0.0);//right down

    glVertex3f(+1.0, 1.0, 0.0);//right up

    glEnd();


        glColor3f(0.21f, 0.41f, 0.53f);

    glBegin(GL_POLYGON);

    glVertex3f(+1, 1.0, 0.0);//left up

    glVertex3f(+1, -1.0, 0.0);//left down

    glVertex3f(+3,-1.0, 0.0);//right down

    glVertex3f(+3, 1.0, 0.0);//right up

    glEnd();
    //////
        glColor3f(0.71f, 0.14f, 0.18f);

    glBegin(GL_POLYGON);

    glVertex3f(x_position-3, 1.0, 0.0);//left up

    glVertex3f(x_position-3, -1.0, 0.0);//left down

    glVertex3f(x_position-1.0,-1.0, 0.0);//right down

    glVertex3f(x_position-1.0, 1.0, 0.0);//right up

    glEnd();


        glColor3f(0.14f, 0.71f, 0.45f);

    glBegin(GL_POLYGON);

    glVertex3f(-x_position+3, 1.0, 0.0);//left up

    glVertex3f(-x_position+3, -1.0, 0.0);//left down

    glVertex3f(-x_position+5,-1.0, 0.0);//right down

    glVertex3f(-x_position+5, 1.0, 0.0);//right up

    glEnd();

    ///////////////////////////////
        glColor3f(0.41f, 0.16f, 0.27f);

    glBegin(GL_POLYGON);

    glVertex3f(0.0, x_position-1.0, 0.0);//left up

    glVertex3f(0.0, x_position-3.0, 0.0);//left down

    glVertex3f(2.0,x_position-3.0, 0.0);//right down

    glVertex3f(2.0,x_position-1.0, 0.0);//right up

    glEnd();
        glColor3f(0.41f, 0.17f, 0.71f);

    glBegin(GL_POLYGON);

    glVertex3f(0.0, -x_position+3.0, 0.0);//left up

    glVertex3f(0.0, -x_position+1.0, 0.0);//left down

    glVertex3f(2.0,-x_position+1.0, 0.0);//right down

    glVertex3f(2.0, -x_position+3.0, 0.0);//right up

    glEnd();
    ////
    glColor3f(0.71f, 0.15f, 0.47f);

    glBegin(GL_POLYGON);

    glVertex3f(2.0, x_position-1.0, 0.0);//left up

    glVertex3f(2.0, x_position-3.0, 0.0);//left down

    glVertex3f(4.0,x_position-3.0, 0.0);//right down

    glVertex3f(4.0,x_position-1.0, 0.0);//right up

    glEnd();
        glColor3f(0.41f, 0.91f, 0.7f);

    glBegin(GL_POLYGON);

    glVertex3f(4.0, x_position-1.0, 0.0);//left up

    glVertex3f(4.0, x_position-3.0, 0.0);//left down

    glVertex3f(5.0,x_position-3.0, 0.0);//right down

    glVertex3f(5.0,x_position-1.0, 0.0);//right up

    glEnd();
        glColor3f(0.91f, 0.41f, 0.7f);

    glBegin(GL_POLYGON);

    glVertex3f(0.0, x_position-1.0, 0.0);//left up

    glVertex3f(0.0, x_position-3.0, 0.0);//left down

    glVertex3f(-2.0,x_position-3.0, 0.0);//right down

    glVertex3f(-2.0,x_position-1.0, 0.0);//right up

    glEnd();
            glColor3f(0.14f, 0.81f, 0.74f);

    glBegin(GL_POLYGON);

    glVertex3f(-2.0, x_position-1.0, 0.0);//left up

    glVertex3f(-2.0, x_position-3.0, 0.0);//left down

    glVertex3f(-3.0,x_position-3.0, 0.0);//right down

    glVertex3f(-3.0,x_position-1.0, 0.0);//right up

    glEnd();
    ////
            glColor3f(1.0f, 0.2f, 0.30f);

    glBegin(GL_POLYGON);

    glVertex3f(0.0, -x_position+3.0, 0.0);//left up

    glVertex3f(0.0, -x_position+1.0, 0.0);//left down

    glVertex3f(2.0,-x_position+1.0, 0.0);//right down

    glVertex3f(2.0, -x_position+3.0, 0.0);//right up

    glEnd();
                glColor3f(0.25f, 0.5f, 0.1f);

    glBegin(GL_POLYGON);

    glVertex3f(2.0, -x_position+3.0, 0.0);//left up

    glVertex3f(2.0, -x_position+1.0, 0.0);//left down

    glVertex3f(4.0,-x_position+1.0, 0.0);//right down

    glVertex3f(4.0, -x_position+3.0, 0.0);//right up

    glEnd();
                    glColor3f(0.41f, 0.41f, 0.1f);

    glBegin(GL_POLYGON);

    glVertex3f(4.0, -x_position+3.0, 0.0);//left up

    glVertex3f(4.0, -x_position+1.0, 0.0);//left down

    glVertex3f(5.0,-x_position+1.0, 0.0);//right down

    glVertex3f(5.0, -x_position+3.0, 0.0);//right up

    glEnd();
        glColor3f(0.71f, 0.11f, 0.31f);

    glBegin(GL_POLYGON);

    glVertex3f(0.0, -x_position+3.0, 0.0);//left up

    glVertex3f(0.0, -x_position+1.0, 0.0);//left down

    glVertex3f(-2.0,-x_position+1.0, 0.0);//right down

    glVertex3f(-2.0, -x_position+3.0, 0.0);//right up

    glEnd();
            glColor3f(0.81f, 0.41f, 0.21f);

    glBegin(GL_POLYGON);

    glVertex3f(-2.0, -x_position+3.0, 0.0);//left up

    glVertex3f(-2.0, -x_position+1.0, 0.0);//left down

    glVertex3f(-3.0,-x_position+1.0, 0.0);//right down

    glVertex3f(-3.0, -x_position+3.0, 0.0);//right up

    glEnd();




    glFlush();

    glutSwapBuffers();

}

void reshape(int w,int h)

{

    glViewport(0,0,(GLsizei)w, (GLsizei)h);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glOrtho(-16,16,-16,16,-16,16);

    glMatrixMode(GL_MODELVIEW);

}

void timer(int)

{

    glutPostRedisplay();

    glutTimerFunc(1000/60,timer,1);

    x_position+=0.07;

    switch(state)

    {

    case 1:

        if(x_position<-.01)

            x_position+= 0.02;

        else

            state=-1;

        break;

    case -1:

        if(x_position>-4)

            x_position-=0.10;

        else

            state=1;

        break;

    }

}

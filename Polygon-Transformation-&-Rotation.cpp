#include<windows.h>
#include<GL/glut.h>
float angle =0;
void myinit(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D (-600.0,1200.0,-600.0,1200.0);
}

void polySegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    //glTranslatef(50,50,0);
    //glScalef(1.5,1.5,0);
    //glRotatef(angle, 0.0, 0.0, 1.0);
    /*glBegin(GL_POLYGON);*/
    int p1[]= {100,100};
    int p2[]= {200,100};
    int p3[]= {200,300};
    int p4[]= {150,400};
    int p5[]= {100,300};


    /*glVertex2iv(p1);
    glVertex2iv(p2);
    glVertex2iv(p3);
    glVertex2iv(p4);
    glVertex2iv(p5);

    glEnd();*/

        glColor3f(1.0,0.0,0.0);
    //glTranslatef(50,0,0);
    glRotatef(90, 0.0, 0.0, 1.0);

    //glScalef(1.5,1.5,0);
    glRotatef(angle, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);


    glVertex2iv(p1);
    glVertex2iv(p2);
    glVertex2iv(p3);
    glVertex2iv(p4);
    glVertex2iv(p5);

    glEnd();
            glColor3f(1.0,0.0,0.0);
    glTranslatef(300,50,0);
    glRotatef(90, 0.0, 0.0, 1.0);

    //glScalef(1.5,1.5,0);
    glRotatef(angle+90, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);


    glVertex2iv(p1);
    glVertex2iv(p2);
    glVertex2iv(p3);
    glVertex2iv(p4);
    glVertex2iv(p5);

    glEnd();
                glColor3f(1.0,0.0,0.0);
    glTranslatef(150,170,0);
    glRotatef(90, 0.0, 0.0, 1.0);

    //glScalef(1.5,1.5,0);
    glRotatef(angle+180, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);


    glVertex2iv(p1);
    glVertex2iv(p2);
    glVertex2iv(p3);
    glVertex2iv(p4);
    glVertex2iv(p5);

    glEnd();
                    glColor3f(1.0,0.0,0.0);
    glTranslatef(300,-10,0);
    glRotatef(90, 0.0, 0.0, 1.0);

    //glScalef(1.5,1.5,0);
    glRotatef(angle+90, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);


    glVertex2iv(p1);
    glVertex2iv(p2);
    glVertex2iv(p3);
    glVertex2iv(p4);
    glVertex2iv(p5);

    glEnd();






    glFlush();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(600,600);
    glutCreateWindow("© Sawrav Chowdhury");
    myinit();
    glutDisplayFunc(polySegment);
    glutMainLoop();
}

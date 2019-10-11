#include<windows.h>
#include <GL/glut.h>

void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT);


    //Upper Lines///////
        glBegin(GL_LINES);
        glColor3f(0.1f, 0.1f, 0.1f);
		glVertex2f (-0.61, 0.0);//Left up
        glVertex2f (0.61, 0.0);//Right up
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.1f, 0.1f, 0.1f);
		glVertex2f (-0.62, -0.01);//Left up
        glVertex2f (0.62, -0.01);//Right up
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.1f, 0.1f, 0.1f);
		glVertex2f (-0.63, -0.02);//Left up
        glVertex2f (0.63, -0.02);//Right up
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.1f, 0.1f, 0.1f);
		glVertex2f (-0.64, -0.03);//Left up
        glVertex2f (0.64, -0.03);//Right up
        glEnd();
//Quad

        glBegin(GL_POLYGON);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.6, -0.04);//Left up
        glVertex2f (0.6, -0.04);//Right up
        glVertex2f (0.6, -0.7);//Right down
        glVertex2f (-0.6, -0.7);//Left down
        glEnd();

//Window left
    glBegin(GL_POLYGON);
        glColor3f(255,255,0);
		glVertex2f (-0.5, -0.25);//Left up
        glVertex2f (-0.3, -0.25);//Right up
        glVertex2f (-0.3, -0.45);//Right down
        glVertex2f (-0.5, -0.45);//Left down
        glEnd();

//Window left lines
            glBegin(GL_POLYGON);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.41, -0.25);//Left up
        glVertex2f (-0.39, -0.25);//Right up
        glVertex2f (-0.39, -0.45);//Right down
        glVertex2f (-0.41, -0.45);//Left down
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.35f, 0.16f, 0.14f);
        glVertex2f (-0.5, -0.34);//Left up
        glVertex2f (-0.3, -0.34);//Right up
        glVertex2f (-0.3, -0.36);//Right down
        glVertex2f (-0.5, -0.36);//Left down
        glEnd();

//Window right
    glBegin(GL_POLYGON);
        glColor3f(255,255,0);
		glVertex2f (0.3, -0.25);//Left up
        glVertex2f (0.5, -0.25);//Right up
        glVertex2f (0.5, -0.45);//Right down
        glVertex2f (0.3, -0.45);//Left down
        glEnd();

//Window right lines
            glBegin(GL_POLYGON);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (0.41, -0.25);//Left up
        glVertex2f (0.39, -0.25);//Right up
        glVertex2f (0.39, -0.45);//Right down
        glVertex2f (0.41, -0.45);//Left down
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.35f, 0.16f, 0.14f);
        glVertex2f (0.5, -0.34);//Left up
        glVertex2f (0.3, -0.34);//Right up
        glVertex2f (0.3, -0.36);//Right down
        glVertex2f (0.5, -0.36);//Left down
        glEnd();
//Window Door
    glBegin(GL_POLYGON);
        glColor3f(255,255,0);
		glVertex2f (-0.15, -0.15);//Left up
        glVertex2f (0.15, -0.15);//Right up
        glVertex2f (0.15, -0.7);//Right down
        glVertex2f (-0.15, -0.7);//Left down
        glEnd();
//Window Door 2
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
		glVertex2f (-0.15, -0.15);//Left up
        glVertex2f (0.07, -0.22);//Right up
        glVertex2f (0.07, -0.7);//Right down
        glVertex2f (-0.15, -0.7);//Left down
        glEnd();
//Triangle
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
		glVertex3f (-0.6, 0.0, 0.0);//Left
        glVertex3f (0.6, 0.0, 0.0);//Right
        glVertex3f (0.0, 0.7, 0.0);//Top
       glEnd();
    //Down Lines///////
        glBegin(GL_LINES);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.61, -0.71);//Left up
        glVertex2f (0.61, -0.71);//Right up
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.62, -0.72);//Left up
        glVertex2f (0.62, -0.72);//Right up
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.63, -0.73);//Left up
        glVertex2f (0.63, -0.73);//Right up
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.64, -0.74);//Left up
        glVertex2f (0.64, -0.74);//Right up
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.65, -0.75);//Left up
        glVertex2f (0.65, -0.75);//Right up
        glEnd();
                        glBegin(GL_LINES);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.66, -0.76);//Left up
        glVertex2f (0.66, -0.76);//Right up
        glEnd();
                        glBegin(GL_LINES);
        glColor3f(0.35f, 0.16f, 0.14f);
		glVertex2f (-0.67, -0.77);//Left up
        glVertex2f (0.67, -0.77);//Right up
        glEnd();

   glFlush();
}

void init (void)
{

   glClearColor (24, 24, 21,1);}



int main()
{
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);  //Mode for later glutCreateWindow() call
   glutInitWindowSize (700, 700);
   glutInitWindowPosition (400,400);
   glutCreateWindow(" © Copyright Sawrav Chowdhury");
   init();

   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}

#include<windows.h>
#include<GL/glut.h>
float angle=0;
static GLfloat spin = 0;

void myinit(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	    glMatrixMode(GL_PROJECTION);
    gluOrtho2D (-600.0,1200.0,-600.0,1200.0);
}


void polySegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1.0,0.0,0.0);



    glColor3f(1.0,1.0,1.0);
    glTranslatef(150,50,0);
  //glScalef(2.5,1.5,0);
    glRotatef(angle, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glClear(GL_COLOR_BUFFER_BIT);
	//glPushMatrix();
	//glRotatef(spin, 0.0, 0.0, 1.0);
	//glRotatef(spin, 0.0, 0.0, 2.0);

	glColor3f(1.0, 1.0, 1.0);


    glBegin(GL_POINTS);

	float x , y , r=60 , d=3/2-r ;
	x=10 ; y= r;
	while(x<=y)
    {

        glVertex3f (x , y, 0.0);
        glVertex3f (y, x, 0.0);
        glVertex3f (-y , x, 0.0);
        glVertex3f (-x , y, 0.0);
        glVertex3f (-x, -y, 0.0);
        glVertex3f (-y, -x, 0.0);
        glVertex3f (y, -x, 0.0);
        glVertex3f (x, -y, 0.0);

        if(d<0)
            d= d+4*x+6 ;
        else{
            d= d+ 4*(x-y)+10;
            y=y-1;
        }
        x=x+1 ;
    }

	glEnd();
	    glColor3f(2.0,1.0,1.0);
    glTranslatef(140,50,0);
    glRotatef(angle+90, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);
	x=10 ; y= r;
	while(x<=y)
    {

        glVertex3f (x , y, 0.0);
        glVertex3f (y, x, 0.0);
        glVertex3f (-y , x, 0.0);
        glVertex3f (-x , y, 0.0);
        glVertex3f (-x, -y, 0.0);
        glVertex3f (-y, -x, 0.0);
        glVertex3f (y, -x, 0.0);
        glVertex3f (x, -y, 0.0);

        if(d<0)
            d= d+4*x+6 ;
        else{
            d= d+ 4*(x-y)+10;
            y=y-1;
        }
        x=x+1 ;
    }

	glEnd();
		    glColor3f(2.0,1.0,1.0);
    glTranslatef(140,50,0);
    glRotatef(angle+180, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);
	x=10 ; y= r;
	while(x<=y)
    {

        glVertex3f (x , y, 0.0);
        glVertex3f (y, x, 0.0);
        glVertex3f (-y , x, 0.0);
        glVertex3f (-x , y, 0.0);
        glVertex3f (-x, -y, 0.0);
        glVertex3f (-y, -x, 0.0);
        glVertex3f (y, -x, 0.0);
        glVertex3f (x, -y, 0.0);

        if(d<0)
            d= d+4*x+6 ;
        else{
            d= d+ 4*(x-y)+10;
            y=y-1;
        }
        x=x+1 ;
    }

	glEnd();
		    glColor3f(2.0,1.0,1.0);
    glTranslatef(140,50,0);
    glRotatef(angle-90, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);
	x=10 ; y= r;
	while(x<=y)
    {

        glVertex3f (x , y, 0.0);
        glVertex3f (y, x, 0.0);
        glVertex3f (-y , x, 0.0);
        glVertex3f (-x , y, 0.0);
        glVertex3f (-x, -y, 0.0);
        glVertex3f (-y, -x, 0.0);
        glVertex3f (y, -x, 0.0);
        glVertex3f (x, -y, 0.0);

        if(d<0)
            d= d+4*x+6 ;
        else{
            d= d+ 4*(x-y)+10;
            y=y-1;
        }
        x=x+1 ;
    }

	glEnd();
		    glColor3f(2.0,1.0,1.0);
    glTranslatef(190,-90,0);
    glRotatef(angle+230, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);
	x=10 ; y= r;
	while(x<=y)
    {

        glVertex3f (x , y, 0.0);
        glVertex3f (y, x, 0.0);
        glVertex3f (-y , x, 0.0);
        glVertex3f (-x , y, 0.0);
        glVertex3f (-x, -y, 0.0);
        glVertex3f (-y, -x, 0.0);
        glVertex3f (y, -x, 0.0);
        glVertex3f (x, -y, 0.0);

        if(d<0)
            d= d+4*x+6 ;
        else{
            d= d+ 4*(x-y)+10;
            y=y-1;
        }
        x=x+1 ;
    }

	glEnd();









	//glPopMatrix();
	glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(600,600);
    glutCreateWindow("POLYGON");
    myinit();
    glutDisplayFunc(polySegment);

    glutMainLoop();
}

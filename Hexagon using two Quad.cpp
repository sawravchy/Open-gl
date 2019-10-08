#include<windows.h>
#include <GL/glut.h>

void display(void)
{
/*	clear all pixels  */
	glClear(GL_COLOR_BUFFER_BIT);

/*	draw white polygon (rectangle) with corners at
 *	(0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */

 /*glColor3f(1.0,.11,.68);*/
 glBegin(GL_QUADS);
 glColor3f(1.0,.11,.68);
 glVertex3f(0.0, 0.4, 0);
 glVertex3f(-0.3, 0.2, 0);
 glVertex3f(-0.3,-0.2, 0);
 glVertex3f(0.3, 0.2, 0);
 glEnd();//end the shape we are currently working on
 glBegin(GL_QUADS);
 glColor3f(1.0,.43,.78);
 glVertex3f(-0.3, -0.2, 0);
 glVertex3f(0.0, -0.4, 0);
 glVertex3f(0.3,-0.2, 0);
 glVertex3f(0.3, 0.2, 0);
 glEnd();//end
	//printf("mist");
/* don't wait!
 * start processing buffered OpenGL routines
 */
   glFlush();
}

void init (void)
{
/* select clearing color 	*/
   glClearColor (0.0, 0.0, 0.0, 0.0);

/* initialize viewing values  */
   //glLoadIdentity();
   glOrtho(-2, 2, -2, 2, -2, 2);
}

/*
 * Declare initial window size, position, and display mode
 * (single buffer and RGBA).  Open window with "hello"
 * in its title bar.  Call initialization routines.
 * Register callback function to display graphics.
 * Enter main loop and process events.
 */

int main()
{
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);  //Mode for later glutCreateWindow() call
   glutInitWindowSize (600, 600);
   glutInitWindowPosition (100,100);
   glutCreateWindow(" Hexagon using two Quad");
   init();

   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}

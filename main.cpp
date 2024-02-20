#include <windows.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <stdio.h>
#define PI 3.1416
#include <math.h>

void restart();
void display1();
void ship();
void water();

static int window;
static GLfloat red = 0.1, blue = 0.1, green = 0.1, alpha = 0;


GLint a = 0, w = 0;

void update(int value)
{
	glDisable(GL_LIGHTING);
	glDisable(GL_LIGHT0);
	a += 20.0;
	w -= 50;
	if (w <= -80)
		w = 0;

	if (a == 100 || a == 120 || a == 250 || a == 500 )
	{

		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glColor3f(1.0, 1.0, 1.0);

		glBegin(GL_POLYGON);  //coordinates for lightning
		glVertex2f(200.0, 700.0);
		glVertex2f(220.0, 700.0);
		glVertex2f(420.0, 550.0);
		glVertex2f(600.0, 450.0);
		glEnd();

		glFlush();
	}
	glutPostRedisplay();
	glutTimerFunc(200, update, 0);
}

void display()
{
	glClearColor(red, green, blue, alpha);
	glClear(GL_COLOR_BUFFER_BIT);
	display1();
	glFlush();
}

void restart(){
    a = 0; w = 0;
    glutPostRedisplay();
}

void display1()
{
	glPushMatrix();
	glTranslated(a, 70, 0.0);
	ship();
	glPopMatrix();
	water();
}

void draw_circle(GLfloat x, GLfloat y, GLfloat r)
{
	glBegin(GL_POLYGON);
    for(int p=0;p<360;p++)
    {
    GLfloat theta1;
    theta1=p*3.142/180;
    glVertex2f(x+r*cos(theta1),y+r*sin(theta1));
    }
glEnd();
}

/*To draw water*/
void water()
{
	glPushMatrix();
	glTranslated(w, 0, 0.0);
	glColor3f(0.1, 0.5, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(0, 100);
	glVertex2f(10, 96);
	glVertex2f(25, 98);
	glVertex2f(39, 94);
	glVertex2f(50, 92);
	glVertex2f(70, 98);
	glVertex2f(85, 95);
	glVertex2f(95, 96);
	glVertex2f(110, 99);
	glVertex2f(128, 97);
	glVertex2f(139, 95);
	glVertex2f(145, 97);
	glVertex2f(155, 99);
	glVertex2f(172, 95);
	glVertex2f(195, 96);
	glVertex2f(212, 95);
	glVertex2f(254, 92);
	glVertex2f(284, 96);
	glVertex2f(344, 98);
	glVertex2f(360, 93);
	glVertex2f(390, 94);
	glVertex2f(410, 99);
	glVertex2f(450, 94);
	glVertex2f(485, 100);
	glVertex2f(502, 92);
	glVertex2f(552, 92);
	glVertex2f(592, 96);
	glVertex2f(630, 105);
	glVertex2f(680, 93);
	glVertex2f(720, 97);
	glVertex2f(750, 93);
	glVertex2f(800, 95);
	glVertex2f(850, 97);
	glVertex2f(880, 108);
	glVertex2f(900, 96);
	glVertex2f(920, 93);
	glVertex2f(950, 99);
	glVertex2f(980, 92);
	glVertex2f(1000, 99);
	glVertex2f(1000, 0);
	glVertex2f(1600, 10);
	glVertex2f(3000, 280);
	glEnd();
	glPopMatrix();
}

/* TO DRAW SHIP */
void ship()
{

	glScaled(20, 20, 0);
	glColor3f(0.000, 0.000, 0.502);
	glBegin(GL_POLYGON); //middle_big_rectangle
	glVertex2f(3.5, 5.5);
	glVertex2f(3.5, 8.5);
	glVertex2f(19.5, 8.5);
	glVertex2f(19.5, 5.5);
	glEnd();
	glColor3f(1.000, 0.937, 0.835);
	glBegin(GL_POLYGON); //big_base_of_ship
	glVertex2f(1, 5.5);
	glVertex2f(4, 1);
	glVertex2f(19, 1);
	glVertex2f(21.5, 5.5);
	glEnd();
	glColor3f(0.7, 0.4, 0.2);
	glBegin(GL_POLYGON); //end of ship brown rectangle
	glVertex2f(4, 5.5);
	glVertex2f(4, 8);
	glVertex2f(5, 8);
	glVertex2f(5, 5.5);
	glEnd();
	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);  //first white window of ship
	glVertex2f(7, 7.5);
	glVertex2f(7, 8);
	glVertex2f(10, 8);
	glVertex2f(10, 7.5);
	glEnd();
	glBegin(GL_POLYGON);  //second white window of ship
	glVertex2f(11.5, 7.5);
	glVertex2f(11.5, 8);
	glVertex2f(15, 8);
	glVertex2f(15, 7.5);
	glEnd();
	glBegin(GL_POLYGON);  //third white window of ship
	glVertex2f(16, 7.5);
	glVertex2f(16, 8);
	glVertex2f(19, 8);
	glVertex2f(19, 7.5);
	glEnd();
	glColor3f(0.184, 0.310, 0.310);
	glBegin(GL_POLYGON); //top rectangle of ship(above window)
	glVertex2f(4.5, 8.5);
	glVertex2f(4.5, 10);
	glVertex2f(18.5, 10);
	glVertex2f(18.5, 8.5);
	glEnd();
	glColor3f(1.000, 0.937, 0.835);
	glBegin(GL_POLYGON);  //first rectangle
	glVertex2f(5.5, 10);
	glVertex2f(5.5, 11.9);
	glVertex2f(7, 11.9);
	glVertex2f(7, 10);
	glEnd();
	glColor3f(0.184, 0.310, 0.310);
	glBegin(GL_POLYGON);
	glVertex2f(5.5, 11.9);  //first rectangle's top
	glVertex2f(5.5, 12.5);
	glVertex2f(7, 12.5);
	glVertex2f(7, 11.9);
	glEnd();
	glColor3f(1.000, 0.937, 0.835);
	glBegin(GL_POLYGON);
	glVertex2f(8.5, 10);  //second
	glVertex2f(8.5, 12.9);
	glVertex2f(10, 12.9);
	glVertex2f(10, 10);
	glEnd();
	glColor3f(0.184, 0.310, 0.310);
	glBegin(GL_POLYGON);
	glVertex2f(8.5, 12.9);
	glVertex2f(8.5, 13.5);
	glVertex2f(10, 13.5);
	glVertex2f(10, 12.9);
	glEnd();
	glColor3f(1.000, 0.937, 0.835);
	glBegin(GL_POLYGON);  //third
	glVertex2f(11.5, 10);
	glVertex2f(11.5, 11.9);
	glVertex2f(13, 11.9);
	glVertex2f(13, 10);
	glEnd();
	glColor3f(0.184, 0.310, 0.310);
	glBegin(GL_POLYGON);
	glVertex2f(11.5, 11.9);
	glVertex2f(11.5, 12.5);
	glVertex2f(13, 12.5);
	glVertex2f(13, 11.9);
	glEnd();
	glColor3f(1.000, 0.937, 0.835);
	glBegin(GL_POLYGON); //fourth
	glVertex2f(14.5, 10);
	glVertex2f(14.5, 12.9);
	glVertex2f(16, 12.9);
	glVertex2f(16, 10);
	glEnd();
	glColor3f(0.184, 0.310, 0.310);
	glBegin(GL_POLYGON);
	glVertex2f(14.5, 12.9);
	glVertex2f(14.5, 13.5);
	glVertex2f(16, 13.5);
	glVertex2f(16, 12.9);
	glEnd();


	//india flag1
        glColor3f(0.22,0.49,0.01);
        glBegin(GL_POLYGON);
        glVertex2f(20, 15);
        glVertex2f(20, 16);
        glVertex2f(15, 16);
        glVertex2f(15, 15);
        glEnd();

        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(20, 17);
        glVertex2f(20, 16);
        glVertex2f(15, 16);
        glVertex2f(15, 17);
        glEnd();

        glColor3f(1.0,0.4,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(20, 18);
        glVertex2f(20, 17);
        glVertex2f(15, 17);
        glVertex2f(15, 18);
        glEnd();
        //pole
         glColor3f(0.38,0.20,0.07);
        glBegin(GL_POLYGON);
        glVertex2f(14.5,13.5);
        glVertex2f(14.5,18);
        glVertex2f(15,18);
        glVertex2f(15,13.5);
        glEnd();
        //chakra
        glColor3f(0.09,0.03,0.32);
	    draw_circle(17.3,16.5,0.5);



	    //india flag2
        glColor3f(0.22,0.49,0.01);
        glBegin(GL_POLYGON);
        glVertex2f(25, 8);
        glVertex2f(25, 9);
        glVertex2f(21.5, 9);
        glVertex2f(21.5, 8);
        glEnd();

        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(25, 10);
        glVertex2f(25, 9);
        glVertex2f(21.5, 9);
        glVertex2f(21.5, 10);
        glEnd();

        glColor3f(1.0,0.4,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(25, 11);
        glVertex2f(25, 10);
        glVertex2f(21.5, 10);
        glVertex2f(21.5, 11);
        glEnd();
        //pole
         glColor3f(0.38,0.20,0.07);
        glBegin(GL_POLYGON);
        glVertex2f(21,11);
        glVertex2f(21,5.5);
        glVertex2f(21.5,5.5);
        glVertex2f(21.5,11);
        glEnd();
        //chakra
        glColor3f(0.09,0.03,0.32);
	    draw_circle(23.3,9.5,0.5);


	glColor3f(1.0, 1.0, 1.0);  //fence
	glBegin(GL_LINE_LOOP);
	glVertex2f(1.5, 5.5);
	glVertex2f(1.5, 6.5);
	glVertex2f(2, 6.2);
	glVertex2f(3, 6.2);
	glVertex2f(3.5, 6.5);
	glVertex2f(3.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.5, 6.5);
	glVertex2f(4, 6.2);
	glVertex2f(5, 6.2);
	glVertex2f(5.5, 6.5);
	glVertex2f(5.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(5.5, 5.5);
	glVertex2f(5.5, 6.5);
	glVertex2f(6, 6.2);
	glVertex2f(7, 6.2);
	glVertex2f(7.5, 6.5);
	glVertex2f(7.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(7.5, 5.5);
	glVertex2f(7.5, 6.5);
	glVertex2f(8, 6.2);
	glVertex2f(9, 6.2);
	glVertex2f(9.5, 6.5);
	glVertex2f(9.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(9.5, 5.5);
	glVertex2f(9.5, 6.5);
	glVertex2f(10, 6.2);
	glVertex2f(11, 6.2);
	glVertex2f(11.5, 6.5);
	glVertex2f(11.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(11.5, 5.5);
	glVertex2f(11.5, 6.5);
	glVertex2f(12, 6.2);
	glVertex2f(13, 6.2);
	glVertex2f(13.5, 6.5);
	glVertex2f(13.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(13.5, 5.5);
	glVertex2f(13.5, 6.5);
	glVertex2f(14, 6.2);
	glVertex2f(15, 6.2);
	glVertex2f(15.5, 6.5);
	glVertex2f(15.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(15.5, 5.5);
	glVertex2f(15.5, 6.5);
	glVertex2f(16, 6.2);
	glVertex2f(17, 6.2);
	glVertex2f(17.5, 6.5);
	glVertex2f(17.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(17.5, 5.5);
	glVertex2f(17.5, 6.5);
	glVertex2f(18, 6.2);
	glVertex2f(19, 6.2);
	glVertex2f(19.5, 6.5);
	glVertex2f(19.5, 5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(19.5, 5.5);
	glVertex2f(19.5, 6.5);
	glVertex2f(20, 6.2);
	glVertex2f(20.5, 6.2);
	glVertex2f(21, 6.5);
	glVertex2f(21, 5.5);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);  //square on base of ship
	glBegin(GL_POLYGON);
	glVertex2f(4.5, 3.5);
	glVertex2f(4.5, 4.5);
	glVertex2f(5.5, 4.5);
	glVertex2f(5.5, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP); //second outer lines for window
	glVertex2f(4.6, 3.6);
	glVertex2f(4.6, 4.6);
	glVertex2f(5.6, 4.6);
	glVertex2f(5.6, 3.6);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(7, 3.5);
	glVertex2f(7, 4.5);
	glVertex2f(8, 4.5);
	glVertex2f(8, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(7.1, 3.6);
	glVertex2f(7.1, 4.6);
	glVertex2f(8.1, 4.6);
	glVertex2f(8.1, 3.6);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(9.5, 3.5);
	glVertex2f(9.5, 4.5);
	glVertex2f(10.5, 4.5);
	glVertex2f(10.5, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(9.6, 3.6);
	glVertex2f(9.6, 4.6);
	glVertex2f(10.6, 4.6);
	glVertex2f(10.6, 3.6);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(12, 3.5);
	glVertex2f(12, 4.5);
	glVertex2f(13, 4.5);
	glVertex2f(13, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(12.1, 3.6);
	glVertex2f(12.1, 4.6);
	glVertex2f(13.1, 4.6);
	glVertex2f(13.1, 3.6);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(14.5, 3.5);
	glVertex2f(14.5, 4.5);
	glVertex2f(15.5, 4.5);
	glVertex2f(15.5, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(14.6, 3.6);
	glVertex2f(14.6, 4.6);
	glVertex2f(15.6, 4.6);
	glVertex2f(15.6, 3.6);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(17, 3.5);
	glVertex2f(17, 4.5);
	glVertex2f(18, 4.5);
	glVertex2f(18, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(17.1, 3.6);
	glVertex2f(17.1, 4.6);
	glVertex2f(18.1, 4.6);
	glVertex2f(18.1, 3.6);
	glEnd();

	glColor3f(	0.698, 0.133, 0.133);
	glBegin(GL_LINE_LOOP);  //top fence
	glVertex2f(5, 10);
	glVertex2f(5, 11);
	glVertex2f(5.5, 10.8);
	glVertex2f(6.5, 10.8);
	glVertex2f(7, 11);
	glVertex2f(7, 10);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(7, 10);
	glVertex2f(7, 11);
	glVertex2f(7.5, 10.8);
	glVertex2f(8.5, 10.8);
	glVertex2f(9, 11);
	glVertex2f(9, 10);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(9, 10);
	glVertex2f(9, 11);
	glVertex2f(9.5, 10.8);
	glVertex2f(10.5, 10.8);
	glVertex2f(11, 11);
	glVertex2f(11, 10);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(11, 10);
	glVertex2f(11, 11);
	glVertex2f(11.5, 10.8);
	glVertex2f(12.5, 10.8);
	glVertex2f(13, 11);
	glVertex2f(13, 10);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(13, 10);
	glVertex2f(13, 11);
	glVertex2f(13.5, 10.8);
	glVertex2f(14.5, 10.8);
	glVertex2f(15, 11);
	glVertex2f(15, 10);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(15, 10);
	glVertex2f(15, 11);
	glVertex2f(15.5, 10.8);
	glVertex2f(16.5, 10.8);
	glVertex2f(17, 11);
	glVertex2f(17, 10);
	glEnd();
}


void myinit()
{
	glClearColor(red, green, blue, alpha);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 799.0);
}

void menu(int option)
{
	switch (option)
	{
		case 0: //yellow
			red = (float)229/255;
			green = (float)222/255;
			blue = (float)68/255;
			alpha = 0.4;
			break;
		case 1: //orange
			red = (float)239/255;
			green = (float)129/255;
			blue = (float)14/255;
			alpha = 0.6;
			break;
		case 2:  //blue
			red = (float)5/255;
			green = (float)55/255;
			blue = (float)82/255;
			alpha = 0.9;
			break;
		case 3:  //black
			alpha = blue = green = red = 0.1;
			break;
		case 4:
			restart();
			break;
		default:
			glutDestroyWindow(window);
			exit(0);
			break;
	}
	if(option>=0 && option<2){
			glutPostRedisplay();
	}
}

void createMenu(void)
{
	int subMenu = glutCreateMenu(menu);
	glutAddMenuEntry("Day - Morning", 0);
	glutAddMenuEntry("Day - Evening", 1);
	glutAddMenuEntry("Night", 2);
	glutAddMenuEntry("Midnight",3);
	glutCreateMenu(menu);
    glutAddMenuEntry("Restart", 4);
	glutAddSubMenu("Change Background", subMenu);
	glutAddMenuEntry("Quit", 5);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1024.0, 768.0);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Ship - Kruthika S Vasisht");
	glutDisplayFunc(display);
	myinit();
	createMenu();
	glutTimerFunc(100, update, 0);
	glutMainLoop();
}

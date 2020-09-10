#include <windows.h>
#include <GL/glut.h>
void pintar(){
	glClear(GL_COLOR_BUFFER_BIT);
	//Puntos
	glPushMatrix();
	glTranslatef(0, 0.7, 0);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 0);
	glVertex2f(-0.1, -0.1);
	glVertex2f(0.1, 0.1);
	glVertex2f(-0.2, -0.2);
	glEnd();
	glPopMatrix();
	//H
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 1);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 0.3);
	glVertex2f(0.0, 0.15);
	glVertex2f(0.1, 0.15);
	glVertex2f(0.1, 0.0);
	glVertex2f(0.1, 0.3);
	glEnd();
	//O
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.12, 0.0);
	glVertex2f(0.2, 0.0);
	glVertex2f(0.2, 0.3);
	glVertex2f(0.12, 0.3);
	glEnd();
	//L
	glBegin(GL_LINE_STRIP);
	glVertex2f(0.22, 0.3);
	glVertex2f(0.22, 0.0);
	glVertex2f(0.3, 0.0);
	glEnd();
	//A
	glBegin(GL_LINES);
	glVertex2f(0.32, 0.0);
	glVertex2f(0.36, 0.3);
	glVertex2f(0.36, 0.3);
	glVertex2f(0.4, 0.0);
	glVertex2f(0.33, 0.15);
	glVertex2f(0.38, 0.15);
	glEnd();
	glPopMatrix();
	
	glFlush();
}
void iniciar_ajustes(){
	glClearColor(0, 1, 1, 0);//Asignamos color a la pantalla
	glLineWidth(3.f);
	glPointSize(9);
	glOrtho(600, 0, 400, 0, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char ** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(600, 400);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Miscelaneas en OpenGL");
	glutDisplayFunc(pintar);
	iniciar_ajustes();
	glutMainLoop();
	return 0;
}

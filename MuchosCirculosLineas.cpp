#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void circulo(float radio){
	float posx, posy;
	for(float i = 0; i < 10; i += 0.01 ){
		posx = radio * cos(i);
		posy = radio * sin(i);
		glVertex2f(posx, posy);
	}
}

void dibujar(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(-1, -1, 0);
	//Circulo 1
	glBegin(GL_LINE_STRIP);
	glColor4f(0, 1, 1, 0);
	circulo(10); //Se introduce el radio
	glEnd();
	//Circulo 2
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 153);
	circulo (20);
	glEnd();
	//Circulo 3
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 0, 0);
	circulo (30);
	glEnd();
	//Circulo 4
	glBegin(GL_LINE_STRIP);
	glColor3f(255, 252, 0);
	circulo (40);
	glEnd();
	//Circulo 5
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 153, 0);
	circulo (50);
	glEnd();
	//Circulo 6
	glBegin(GL_LINE_STRIP);
	glColor4f(0, 1, 1, 0);
	circulo (60);
	glEnd();
	glPopMatrix();
	glFlush();
}

void iniciar(){
	glClearColor(0, 0, 0, 0);
	glLineWidth(2.f);
	glOrtho(800, 0, 600, 0, -1, 1);
	glMatrixMode(GL_PROJECTION); //Cambia para que funcione los circulos --------------------------------
	glLoadIdentity();
}

//Main del proyecto
int main(int argc, char ** argv){
	glutInit(&argc, argv); //Iniciamos glut
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //El modo de pantalla sera rgb
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Circulo en OpenGL");
	glutDisplayFunc(dibujar);
	iniciar();
	glutMainLoop();
	return 0;
}

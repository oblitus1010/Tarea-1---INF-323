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
	glBegin(GL_POLYGON);
	glColor3f(0, 153, 0);
	circulo(40); //Se introduce el radio
	glEnd();
	glPopMatrix();
	//Circulo 2
	glPushMatrix();
	glTranslatef(-1.25, -1, 0);
	glBegin(GL_POLYGON);
	glColor4f(1, 0, 0, 0);
	circulo(40); //Se introduce el radio
	glEnd();
	glPopMatrix();
	//Circulo 3
	glPushMatrix();
	glTranslatef(-1.12, -0.75, 0);
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 153);
	circulo(40); //Se introduce el radio
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

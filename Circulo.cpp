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
	glEnd();
}

void dibujar(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(-1, -1, 0);
	
	glBegin(GL_LINE_STRIP);
	glColor4f(1, 1, 0, 0);
	circulo(100); //Se introduce el radio
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

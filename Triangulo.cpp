//Importamos las librerias
#include <windows.h>
#include <GL/glut.h>

//Funcion Iniciar
void iniciar(){
	glClearColor(0, 1, 1, 0); //Establece el color de pantalla
	glLineWidth(2.f); //Grosor de la linea dibujada
	glColor3f(1, 0, 0);
	glOrtho(800, 0, 600, 0, -1, 1);
}

//Funcion Dibujar
void dibujar(){
	glClear(GL_COLOR_BUFFER_BIT); //Ordena limpiar la pantalla con el color establecido
	glBegin(GL_TRIANGLES); //Establece lo que se dibujara
	
	glVertex2i(400, 50); //Colocamos las coordenadas de donde se dibujara valores enterios si se quiere flotantes se debe poner glVertex2f(x, y);
	glVertex2i(600, 450);
	glVertex2i(200, 450);
	
	glEnd();
	glFlush();
}

//Main del proyecto
int main(int argc, char ** argv){
	glutInit(&argc, argv); //Iniciamos glut
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //El modo de pantalla sera rgb
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Triangulo en OpenGL");
	glutDisplayFunc(dibujar);
	iniciar();
	glutMainLoop();
	return 0;
}



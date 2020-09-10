//Importamos las librerias
#include <windows.h>
#include <GL/glut.h>

//Funcion Iniciar
void iniciar(){
	glClearColor(0, 1, 1, 0); //Establece el color de pantalla
	glLineWidth(2.f); //Grosor de la linea dibujada
	glPointSize(4);
	glOrtho(400, 0, 600, 0, -1, 1); //.
	glMatrixMode(GL_MODELVIEW); //Cambiamos a modo matriz 
	glLoadIdentity(); //Cargamos la identidad
}
//Estrella 1
void estrella1(){
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0); //color rojo
	//Triangulo 1
	glVertex2f(0.0, 0.4);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.0, -0.05);
	//Triangulo 2
	glVertex2f(0.6, 0.1);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.0, -0.05);
	//Triangulo 3
	glVertex2f(0.6, 0.1);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.0, -0.05);
	//Triangulo 4
	glVertex2f(0.4, -0.4);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.0, -0.05);
	//Triangulo 5
	glVertex2f(0.4, -0.4);
	glVertex2f(0.0, -0.2);
	glVertex2f(0.0, -0.05);
	//Triangulo 6
	glVertex2f(-0.4, -0.4);
	glVertex2f(0.0, -0.2);
	glVertex2f(0.0, -0.05);
	//Triangulo 7
	glVertex2f(-0.4, -0.4);
	glVertex2f(-0.3, -0.1);
	glVertex2f(0.0, -0.05);
	//Triangulo 8
	glVertex2f(-0.6, 0.1);
	glVertex2f(-0.3, -0.1);
	glVertex2f(0.0, -0.05);
	//Triangulo 9
	glVertex2f(-0.6, 0.1);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.0, -0.05);
	//Triangulo 10
	glVertex2f(0.0, 0.4);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.0, -0.05);
	
	/*glVertex2f(0.0, 0.4);//Pico 1
	
	glVertex2f(0.15, 0.1);
	
	glVertex2f(0.6, 0.1);//pico 2
	glVertex2f(0.3, -0.1);
	
	glVertex2f(0.4, -0.4);//pico 3
	
	glVertex2f(0.0, -0.2);
	
	glVertex2f(-0.4, -0.4); //pico 4
	glVertex2f(-0.3, -0.1);
	
	glVertex2f(-0.6, 0.1); //pico 5
	
	glVertex2f(-0.15, 0.1);
	*/
	glEnd();
}
//Estrella 2
void estrella2(){
	glBegin(GL_TRIANGLES); //Establece lo que se dibujara
	//glVertex2f(0.0, 0.0); //Centro
	//glVertex2f(0.0, -0.05); //Centro ajustado
	//Color azul
	//Triangulo 1
	glColor3f(0, 0, 1); //Establece el color azul
	glVertex2f(0.0, 0.4);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.0, -0.05);
	
	//Triangulo 3
	glVertex2f(0.6, 0.1);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.0, -0.05);
	
	//Triangulo 5
	glVertex2f(0.4, -0.4);
	glVertex2f(0.0, -0.2);
	glVertex2f(0.0, -0.05);
	
	//Triangulo 7
	glVertex2f(-0.4, -0.4);
	glVertex2f(-0.3, -0.1);
	glVertex2f(0.0, -0.05);
	
	//Triangulo 9
	glVertex2f(-0.6, 0.1);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.0, -0.05);
	
	//Color rojo
	//Triangulo 10
	glColor3f(1, 0, 0); //Establece el color rojo
	glVertex2f(0.0, 0.4);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.0, -0.05);
	
	//Triangulo 2
	glVertex2f(0.6, 0.1);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.0, -0.05);
	
	//Triangulo 4
	glVertex2f(0.4, -0.4);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.0, -0.05);
	
	//Triangulo 6
	glVertex2f(-0.4, -0.4);
	glVertex2f(0.0, -0.2);
	glVertex2f(0.0, -0.05);
	
	//Triangulo 8
	glVertex2f(-0.6, 0.1);
	glVertex2f(-0.3, -0.1);
	glVertex2f(0.0, -0.05);
	
	glEnd();
}

//Funcion Dibujar
void dibujar(){
	glClear(GL_COLOR_BUFFER_BIT); //Ordena limpiar la pantalla con el color establecido
	glPushMatrix();
	glTranslatef(0, 0.5, 0);
	estrella1();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, -0.5, 0);
	estrella2();
	glPopMatrix();
	glFlush();
}

//Main del proyecto
int main(int argc, char ** argv){
	glutInit(&argc, argv); //Iniciamos glut
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //El modo de pantalla sera rgb
	glutInitWindowSize(400, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Estrella con colores en OpenGL");
	glutDisplayFunc(dibujar);
	iniciar();
	glutMainLoop();
	return 0;
}



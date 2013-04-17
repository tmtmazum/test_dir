#include <iostream>
#include <GL/glut.h>


void handleKeypress(unsigned char key, //The key that was pressed
                    int x, int y) {    //The current mouse coordinates
    switch (key) 
    {
        case 27: //Escape key
            exit(0); //Exit the program
    }
}

void draw() 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0.2f, 0.2f, 0.0f);
		glVertex3f(0.8f, 0.2f, 0.0f);
		glVertex3f(0.2f, 0.5f, 0.0f);
		glVertex3f(0.8f, 0.5f, 0.0f);
		glVertex3f(0.2f, 0.8f, 0.0f);
		glVertex3f(0.8f, 0.8f, 0.0f);		
	glEnd();

	glBegin(GL_LINES);
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.8f, 0.0f, 0.0f);
	glEnd();
	glutSwapBuffers();

}

int main(int argC, char** argV)
{
	glutInit(&argC, argV);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(10,10);
	glutCreateWindow("MyScreen");

	glutDisplayFunc(draw);
	glutKeyboardFunc(handleKeypress);
	glutMainLoop();
	return 1;
}

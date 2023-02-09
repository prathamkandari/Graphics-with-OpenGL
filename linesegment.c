#include <GL/glut.h>

#include <stdio.h>

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);

    glClearColor(1.0, 0.0, 0.0, 0.0);

    glColor3f(0.0, 1.0, 0.0);

    glBegin(GL_LINES);

    glVertex2f(0.25, 0.25);

    glVertex2f(0.75, 0.75);

    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{

    glutInit(&argc, argv);

    glutCreateWindow("Line Example");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
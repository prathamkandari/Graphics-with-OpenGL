#include <GL/gl.h>
#include <GL/glut.h> //

void display()
{

    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.6f, 0.0f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(0.6f, 0.0f);
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("GL RGB Triangle");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

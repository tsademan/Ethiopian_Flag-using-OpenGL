#include <windows.h> 
#include <GL/glut.h>
void init() {

  glClearColor(1, 1, 1, 0);
  glMatrixMode(GL_PROJECTION);
  glOrtho(-30, 30, -30, 30, -30, 30);

}
void display() {

  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0, 0, 0);
  glLineWidth(100);
  glBegin(GL_LINES);
   glVertex2i(-12,-26);
   glVertex2i(-2,-26);
  glEnd();
  
   glLineWidth(100);
  glBegin(GL_LINES);
   glVertex2i(-7,-26);
   glVertex2i(-7,25);
  glEnd();
  
  glColor3f(0,1,0);//green
  glBegin(GL_QUADS);
   glVertex2i(-7,25);
   glVertex2i(6,25);
    glVertex2i(6,18);
    glVertex2i(-7,18);
      
  glColor3f(1,1,0);//yellow
   glVertex2i(-7,18);
   glVertex2i(6,18);
    glVertex2i(6,10);
     glVertex2i(-7,10);
     
     glColor3f(1,0,0);//red
   glVertex2i(-7,10);
   glVertex2i(6,10);
    glVertex2i(6,2);
     glVertex2i(-7,2);
    glEnd();
  glFlush();
}
int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
  glutInitWindowPosition(10, 10);
  glutInitWindowSize(600, 600);
  glutCreateWindow("Ethipian Flag");
  init();
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
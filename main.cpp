
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
void display();
float xRotated = 90.0, yRotated = 0.0, zRotated = 0.0;
float angle=0;
void timer(int);
float ix=0;


void keyboard(unsigned char Key,int x,int y)
    {
    if(Key=='x'){ix+=0.1;}
    glutPostRedisplay();
    }








void circle()
{
    glColor3f (0.7, 0.7, 0.7);
    glPushMatrix ();
    glTranslatef    (-8+ix, 12, 5);
    glRotatef       (60.0, 1,0,0);
    glutSolidSphere(1.3,10, 30);
    glPopMatrix ();

    glColor3f (0.7, 0.7, 0.7);
    glPushMatrix ();
    glTranslatef    (-7, 12, 5.3);
    glRotatef       (60.0, 1,0,0);
    glutSolidSphere(1.3,10, 30);
    glPopMatrix ();

    glColor3f (0.7, 0.7, 0.7);
    glPushMatrix ();
    glTranslatef    (-6, 12, 5);
    glRotatef       (60.0, 1,0,0);
    glutSolidSphere(1.3,10, 30);
    glPopMatrix ();
}


//------------------------------  reshapeFunc  ---------------------------------

void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (60.0,1,10, 50.0);
    glMatrixMode(GL_MODELVIEW);
}



//------------------------------  display   -------------------------------

void display (void)
{
    glClearColor(0,0.0,0.4,1.0);

    glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();
    glTranslatef    (0.0, 0.0, -15.0);




	//Your code is written here
   glTranslatef    (0.0, 0.0, -15);
   glRotatef(45,1.0,1.0,1.0);
    //front face
  glBegin (GL_QUADS) ;
  //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-1.0,4.0,2.0);
    glVertex3f(-1,1.0,2.0);
    glVertex3f(1.0,1.0,2.0);
    glVertex3f(1.0,4.0,2.0);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(1.0,4.0,-2.0);
    glVertex3f(1.0,1.0,-2.0);
    glVertex3f(-1.0,1.0,-2.0);
    glVertex3f(-1.0,4.0,-2.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1.0,4.0,2.0);
    glVertex3f(1.0,1.0,2.0);
    glVertex3f(1.0,1.0,-2.0);
    glVertex3f(1.0,4.0,-2.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(-1.0,4.0,-2.0);
    glVertex3f(-1.0,1.0,-2.0);
    glVertex3f(-1.0,1.0,2.0);
    glVertex3f(-1.0,4.0,2.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-1.0,4.0,-2.0);
    glVertex3f(-1.0,4.0,2.0);
    glVertex3f(1.0,4.0,2.0);
    glVertex3f(1.0,4.0,-2.0);
    //bottom
    glColor3f(1.0,0.5,1.0);
    glVertex3f(1.0,1.0,2.0);
    glVertex3f(1.0,1.0,-2.0);
    glVertex3f(-1.0,1.0,-2.0);
    glVertex3f(-1.0,1.0,2.0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.0,6.0,0.0);
     //front pyramid
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-1.0,4.0,2.0);
    glVertex3f(1.0,4.0,2.0);
    //pyramid back
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-1.0,4.0,-2.0);
    glVertex3f(1.0,4.0,-2.0);
    //pyramid right
    glColor3f(1.0,0.0,0.0);
    glVertex3f(1.0,4.0,2.0);
    glVertex3f(1.0,4.0,-2.0);
    //pyramid left
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-1.0,4.0,-2.0);
    glVertex3f(-1.0,4.0,2.0);
    glEnd();
    glBegin(GL_QUADS);
    //Road
    glColor3f(0.328412,0.329412,0.329412);
    glVertex3f(-25.0,0.0,0.0);
    glVertex3f(-25.0,-15.0,0.0);
    glVertex3f(30.0,-15.0,0.0);
    glVertex3f(30.0,0.0,0.0);
    glEnd();
     glBegin(GL_QUADS);
    //Road
    glColor3f(0.328412,0.329412,0.329412);
    glVertex3f(-25.0,0.0,0.0);
    glVertex3f(-25.0,-15.0,0.0);
    glVertex3f(30.0,-15.0,0.0);
    glVertex3f(30.0,0.0,0.0);
    glEnd();
    glBegin(GL_QUADS);
    //Road Strip
    glColor3f(1,1,1);
    glVertex3f(-15.0,-5.0,0.1);
    glVertex3f(-15.0,-8.0,0.1);
    glVertex3f(-5.0,-8.0,0.1);
    glVertex3f(-5.0,-5.0,0.1);

    glColor3f(1,1,1);
    glVertex3f(0.0,-5.0,0.1);
    glVertex3f(0.0,-8.0,0.1);
    glVertex3f(10.0,-8.0,0.1);
    glVertex3f(10.0,-5.0,0.1);

    glColor3f(1,1,1);
    glVertex3f(15.0,-5.0,0.1);
    glVertex3f(15.0,-8.0,0.1);
    glVertex3f(25.0,-8.0,0.1);
    glVertex3f(25.0,-5.0,0.1);

    glEnd();
    glBegin (GL_QUADS) ;
  //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-5+angle,-2,5.0);
    glVertex3f(-5+angle,-6.0,5.0);
    glVertex3f(5.0+angle,-6.0,5.0);
    glVertex3f(5.0+angle,-2.0,5.0);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(5.0+angle,-2.0,0.0);
    glVertex3f(5.0+angle,-6.0,0.0);
    glVertex3f(-5.0+angle,-6.0,0.0);
    glVertex3f(-5.0+angle,-2.0,0.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(5.0+angle,-2.0,5.0);
    glVertex3f(5.0+angle,-6,5.0);
    glVertex3f(5.0+angle,-6.0,0.0);
    glVertex3f(5.0+angle,-2.0,0.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(-5.0+angle,-2.0,0.0);
    glVertex3f(-5.0+angle,-6.0,0.0);
    glVertex3f(-5.0+angle,-6.0,5.0);
    glVertex3f(-5.0+angle,-2.0,5.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-5.0+angle,-2.0,0.0);
    glVertex3f(-5.0+angle,-2.0,5.0);
    glVertex3f(5.0+angle,-2.0,5.0);
    glVertex3f(5.0+angle,-2.0,0.0);
    //bottom
    glColor3f(1.0,0.5,1.0);
    glVertex3f(-5.0+angle,-6.0,0.0);
    glVertex3f(-5.0+angle,-6.0,5.0);
    glVertex3f(5.0+angle,-6.0,5.0);
    glVertex3f(5.0+angle,-6.0,0.0);
    glEnd();

    glBegin (GL_QUADS) ;
  //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-5+angle,-2,5.0);
    glVertex3f(-5+angle,-6.0,5.0);
    glVertex3f(5.0+angle,-6.0,5.0);
    glVertex3f(5.0+angle,-2.0,5.0);
    //back
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-8+angle,-4.0,5.0);
    glVertex3f(-8.0+angle,-6.0,5.0);
    glVertex3f(8.0+angle,-6.0,5.0);
    glVertex3f(8.0+angle,-4.0,5.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(8.0+angle,-4.0,5.0);
    glVertex3f(8.0+angle,-6,5.0);
    glVertex3f(8.0+angle,-6.0,0.0);
    glVertex3f(8.0+angle,-4.0,0.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(-8.0+angle,-4.0,0.0);
    glVertex3f(-8.0+angle,-6.0,0.0);
    glVertex3f(-8.0+angle,-6.0,5.0);
    glVertex3f(-8.0+angle,-4.0,5.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-8.0+angle,-4.0,0.0);
    glVertex3f(-8.0+angle,-4.0,5.0);
    glVertex3f(8.0+angle,-4.0,5.0);
    glVertex3f(8.0+angle,-4.0,0.0);
    //bottom
    glColor3f(1.0,0.5,1.0);
    glVertex3f(-8.0+angle,-6.0,0.0);
    glVertex3f(-8.0+angle,-6.0,5.0);
    glVertex3f(8.0+angle,-6.0,5.0);
    glVertex3f(8.0+angle,-6.0,0.0);
    glEnd();
    glBegin (GL_QUADS) ;
  //front
    glColor3f(0.0,0.0,0.5);
    glVertex3f(-12.0,6.0,2.0);
    glVertex3f(-12,1.0,2.0);
    glVertex3f(-4.0,1.0,2.0);
    glVertex3f(-4.0,6.0,2.0);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-4.0,6.0,-4.0);
    glVertex3f(-4.0,1.0,-4.0);
    glVertex3f(-12.0,1.0,-4.0);
    glVertex3f(-12.0,6.0,-4.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-4.0,6.0,2.0);
    glVertex3f(-4.0,1.0,2.0);
    glVertex3f(-4.0,1.0,-4.0);
    glVertex3f(-4.0,6.0,-4.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(-12.0,6.0,-4.0);
    glVertex3f(-12.0,1.0,-4.0);
    glVertex3f(-12.0,1.0,2.0);
    glVertex3f(-12.0,6.0,2.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-12.0,6.0,-4.0);
    glVertex3f(-12.0,6.0,2.0);
    glVertex3f(-4.0,6.0,2.0);
    glVertex3f(-4.0,6.0,-4.0);
    //bottom
    glColor3f(1.0,0.5,1.0);
    glVertex3f(-12.0,1.0,-4.0);
    glVertex3f(-12.0,1.0,2.0);
    glVertex3f(-4.0,1.0,2.0);
    glVertex3f(-4.0,1.0,-4.0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(-8,8.0,-1.0);
     //front pyramid
    glColor3f(0.0,0.5,0.0);
    glVertex3f(-12.0,6.0,2.0);
    glVertex3f(-4.0,6.0,2.0);
    //pyramid back
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-12.0,6.0,-4.0);
    glVertex3f(-4.0,6.0,-4.0);
    //pyramid right
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-4.0,6.0,2.0);
    glVertex3f(-4.0,6.0,-4.0);
    //pyramid left
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-12.0,6.0,-4.0);
    glVertex3f(-12.0,6.0,2.0);
    glEnd();

    glBegin (GL_QUADS) ;
    //RIGHT HOUSE
  //front
    glColor3f(0.0,0.0,0.5);
    glVertex3f(4.0,6.0,2.0);
    glVertex3f(4,1.0,2.0);
    glVertex3f(12.0,1.0,2.0);
    glVertex3f(12.0,6.0,2.0);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(12.0,6.0,-4.0);
    glVertex3f(12.0,1.0,-4.0);
    glVertex3f(4.0,1.0,-4.0);
    glVertex3f(4.0,6.0,-4.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(12.0,6.0,2.0);
    glVertex3f(12.0,1.0,2.0);
    glVertex3f(12.0,1.0,-4.0);
    glVertex3f(12.0,6.0,-4.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(4.0,6.0,-4.0);
    glVertex3f(4.0,1.0,-4.0);
    glVertex3f(4.0,1.0,2.0);
    glVertex3f(4.0,6.0,2.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(4.0,6.0,-4.0);
    glVertex3f(4.0,6.0,2.0);
    glVertex3f(12.0,6.0,2.0);
    glVertex3f(12.0,6.0,-4.0);
    //bottom
    glColor3f(1.0,0.5,1.0);
    glVertex3f(4.0,1.0,-4.0);
    glVertex3f(4.0,1.0,2.0);
    glVertex3f(12.0,1.0,2.0);
    glVertex3f(12.0,1.0,-4.0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(8,8.0,-1.0);
     //front pyramid
    glColor3f(0.0,0.5,0.0);
    glVertex3f(4.0,6.0,2.0);
    glVertex3f(12.0,6.0,2.0);
    //pyramid back
    glColor3f(1.0,0.0,1.0);
    glVertex3f(4.0,6.0,-4.0);
    glVertex3f(12.0,6.0,-4.0);
    //pyramid right
    glColor3f(1.0,0.0,0.0);
    glVertex3f(12.0,6.0,2.0);
    glVertex3f(12.0,6.0,-4.0);
    //pyramid left
    glColor3f(0.0,1.0,0.0);
    glVertex3f(4.0,6.0,-4.0);
    glVertex3f(4.0,6.0,2.0);
    glEnd();

//////////////////////////////////////







   circle();








    glutSwapBuffers();
}

//--------------------------------  idleFunc  ----------------------------------

void idleFunc (void)
{
    zRotated += 1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}

//----------------------------------  main  ------------------------------------


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // buffer mode
    glutInitWindowSize     (800, 700);
    glutInitWindowPosition (700, 200);
    glutCreateWindow       ("Refaat Alaa 20102156");
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glutDisplayFunc (display);
    glutReshapeFunc (reshapeFunc);
    glutTimerFunc(200,timer,0);
    glutIdleFunc (idleFunc);
    glClearColor(1,1,1,1);
    texture(); // Lighting and textures
    glutMainLoop();
    glutKeyboardFunc(keyboard);
    texture();
}
void timer(int)
{ glutPostRedisplay();
  glutTimerFunc(1000/60,timer,0);
  angle+=0.8;
  if(angle>100)
    angle=angle-100;
}


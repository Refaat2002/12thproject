#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
void display();
void reshape(int x,int y);
void timer(int);
void init(){

}
float z=0;
float y=0;
int main(int argc,char**argv)
{
    glutInit(&argc,argv);//initializes glut
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(1200,800);//adjust window size
    glutInitWindowPosition(200,0);//adjust window position
    glutCreateWindow("Refaat Alaa20102156");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(200,timer,0);
    glutMainLoop();//loops itself again and again
    init();}

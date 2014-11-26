#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

static bool player = false;
static bool one = false;
static bool two = false;
static bool three = false;
static bool four = false;
static bool five = false;
static bool six = false;
static bool seven = false;
static bool eight = false;
static bool nine = false;
static float x = 0;
static float y = 0;

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glShadeModel (GL_FLAT);
}

void gameBoard(void)
{
    //glColor3f(1.0, 1.0, 1.0);
    glBegin (GL_LINES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(200.0f, 200.0f);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(400.0f, 200.0f);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(200.0f, 300.0f);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(400.0f, 300.0f);
        glVertex2f(275.0f, 100.0f);
        glVertex2f(275.0f, 400.0f);
        glVertex2f(325.0f, 400.0f);
    glEnd();
}

void drawPlayer(void) 
{
     if (player == false)
     {
         //draw an x and translate it to x, y
     }
     else if (player == true)
     {
          //draw a torus and translate to x, y
     }
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    gameBoard ();
    drawPlayer ();
    glFlush ();
}

void keyboard (unsigned char key, int x, int y)
{
   switch (key) {
      case '7':
         if (seven == false)
         {  
            x = 100;
            y = 500;
            player = !player;
            seven = true;
            glutPostRedisplay();
            break;
         }
         else if (seven == true)
         {
              break;
         } 
      case 27:
         exit(0);
         break;
      default:
         break;
   }
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (600, 600); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("3D Tic Tac Toe");
   init ();
   glutDisplayFunc(display);
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}
    
//bushido_blade@hailmail.net

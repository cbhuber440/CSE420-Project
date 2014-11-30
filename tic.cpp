#include <GL/GL.h>
#include <GL/GLU.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

static bool player = false;
static bool AI = false;
static bool one = false;
static bool two = false;
static bool three = false;
static bool four = false;
static bool five = false;
static bool six = false;
static bool seven = false;
static bool eight = false;
static bool nine = false;
static GLfloat x = 0;
static GLfloat y = 0;
static string answer;

void init(void)
{
    glColorClear (1.0, 1.0, 1.0, 0.0);
    glShadeModel (GL_SMOOTH);
}

void gameBoard()
{
    glColor3f (0.0, 0.0, 0.0);
    
    glTranslatef (100, 200, 0);
    glScalef (400, 2, 2);
    glutSolidCube (1.0);
    
    glTranslatef (100, 400, 0);
    glScalef (400, 2, 2);
    glutSolidCube (1.0);
    
    glTranslatef (250, 100, 0);
    glScalef (2, 400, 2);
    glutSolidCube (1.0);
    
    glTranslatef (450, 100, 0);
    glScalef (2, 400, 2);
    glutSolidCube (1.0);
}

void drawPlayer(GLfloat x, GLfloat y) 
{
    if (player == false)
    {
        glColor3f (1.0, 0.0, 0.0);
        glTranslatef ((GLfloat) x,(GLfloat) y, 0);
        glScalef (10, 2, 2);
        glRotatef (45.0, 0, 1, 0);
        glutSolidCube ( 1.0);
           
        glColor3f (0.0, 0.0, 1.0);
        glTranslatef ((GLfloat) x,(GLfloat) y, 0);
        glScalef (10, 2, 2);
        glRotatef (-45.0, 0, 1, 0);
        glutSolidCube ( 1.0);
     }
     else if (player == true)
     {
        glTranslatef ((GLfloat) x,(GLfloat) y, 0);
        glutSolidTorus (0.275, 0.85, 8, 15);
     }
}

void drawAI ()
{
     if (AI == true)
     {
            if (one == false)
            {
                    glTranslatef (x, y, 0);
                    glutSolidTorus (0.275, 0.85, 8, 15);
            }
            else if (one == true && two == false)
            {
                 glTranslatef (x, y, 0);
                 glutSolidTorus (0.275, 0.85, 8, 15);
            }
            else if (two == true && three == false)
            {
                 glTranslatef ( x, y, 0);
                 glutSolidTorus (0.275, 0.85, 8, 15);
            }
            else if (three == true && four == false)
            {
                 glTranslatef ( x, y, 0);
                 glutSolidTorus (0.275, 0.85, 8, 15);
            }
            else if (four == true && five == false)
            {
                 glTranslatef ( x, y, 0);
                 glutSolidTorus (0.275, 0.85, 8, 15);
            }
            else if (five == true && six == false)
            {
                 glTranslatef ( x, y, 0);
                 glutSolidTorus (0.275, 0.85, 8, 15);
            }
            else if (six == true && seven == false)
            {
                glTranslatef ( x, y, 0);
                glutSolidTorus (0.275, 0.85, 8, 15); 
            }
            else if (seven == true && eight == false)
            {
                 glTranslatef ( x, y, 0);
                 glutSolidTorus (0.275, 0.85, 8, 15);
            }
            else if (eight == true && nine == false)
            {
                glTranslatef ((GLfloat) x,(GLfloat) y, 0);
                glutSolidTorus (0.275, 0.85, 8, 15); 
            }
     }
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    gameBoard ();
    glFlush ();
}

void keyboard (unsigned char key, int x, int y)
{
     if (player == false && AI == true)
     {
        case '1':
               if (one == false)
               {
                 drawPlayer(100.0,500.0);
                 one = true;
                 drawAI();
                 glutPostRedisplay();
                 break;
               }
               else if (one == true)
               {
                  break;
               }
               case '2':
               if (two == false)
               {  
                drawPlayer(100.0, 500.0);
                two = true;
                drawAI();
                glutPostRedisplay();
                break;
               }
               else if (two == true)
               {
                break;
               } 
               case '3':
               if (three == false)
               {  
                drawPlayer(100.0, 500.0);
                three = true;
                drawAI();
                glutPostRedisplay();
                break;
               }
               else if (three == true)
               {
                break;
               }   
               case '4':
               if (four == false)
               {  
                drawPlayer(100.0, 500.0);
                four = true;
                drawAI();
                glutPostRedisplay();
                break;
               }
               else if (four == true)
               {
                break;
               } 
               case '5':
               if (five == false)
               {  
                drawPlayer(100.0, 500.0);
                five = true;
                drawAI();
                glutPostRedisplay();
                break;
               }
               else if (five == true)
               {
                break;
               } 
               case '6':
               if (six == false)
               {  
                drawPlayer(100.0, 500.0);
                six = true;
                drawAI();
                glutPostRedisplay();
                break;
               }
               else if (six == true)
               {
                break;
               } 
               case '7':
               if (seven == false)
               {  
                drawPlayer(100.0, 500.0);
                seven = true;
                drawAI();
                glutPostRedisplay();
                break;
               }
               else if (seven == true)
               {
                break;
               } 
               case '8':
               if (eight == false)
               {  
                drawPlayer(100.0, 500.0);
                eight = true;
                drawAI();
                glutPostRedisplay();
                break;
               }
               else if (eight == true)
               {
                break;
               } 
               case '9':
               if (nine == false)
               {  
                drawPlayer(100.0, 500.0);
                nine = true;
                drawAI();
                glutPostRedisplay();
                break;
               }
               else if (nine == true)
               {
                break;
               } 
               case 27:
               exit(0);
               break;
               default:
               break;
     }
     else if (player = false && AI == false)
     {
        switch (key) 
        {
               case '1':
               if (one == false)
               {
                 drawPlayer(100.0, 500.0);
                 player = !player;
                 one = true;
                 glutPostRedisplay();
                 break;
               }
               else if (one == true)
               {
                  break;
               }
               case '2':
               if (two == false)
               {  
                drawPlayer(100.0, 500.0);
                player = !player;
                two = true;
                glutPostRedisplay();
                break;
               }
               else if (two == true)
               {
                break;
               } 
               case '3':
               if (three == false)
               {  
                drawPlayer(100.0, 500.0);
                player = !player;
                three = true;
                glutPostRedisplay();
                break;
               }
               else if (three == true)
               {
                break;
               }   
               case '4':
               if (four == false)
               {  
                drawPlayer(100.0, 500.0);
                player = !player;
                four = true;
                glutPostRedisplay();
                break;
               }
               else if (four == true)
               {
                break;
               } 
               case '5':
               if (five == false)
               {  
                drawPlayer(100.0, 500.0);
                player = !player;
                five = true;
                glutPostRedisplay();
                break;
               }
               else if (five == true)
               {
                break;
               } 
               case '6':
               if (six == false)
               {  
                drawPlayer(100.0, 500.0);
                player = !player;
                six = true;
                glutPostRedisplay();
                break;
               }
               else if (six == true)
               {
                break;
               } 
               case '7':
               if (seven == false)
               {  
                drawPlayer(100.0, 500.0);
                player = !player;
                seven = true;
                glutPostRedisplay();
                break;
               }
               else if (seven == true)
               {
                break;
               } 
               case '8':
               if (eight == false)
               {  
                drawPlayer(100.0, 500.0);
                player = !player;
                eight = true;
                glutPostRedisplay();
                break;
               }
               else if (eight == true)
               {
                break;
               } 
               case '9':
               if (nine == false)
               {  
                drawPlayer(100.0, 500.0);
                player = !player;
                nine = true;
                glutPostRedisplay();
                break;
               }
               else if (nine == true)
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
}

int main(int argc, char** argv)
{
    cout << "Play with 2 players or against an AI? " << endl;
    cin >> answer;
    if (cin == "AI")
    {
            AI = true;
    } 
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

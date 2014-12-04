#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
static int x = 0;
static int y = 0;
static string answer;

GLfloat ambient[] = { 0.1, 0.1, 1.0 };
GLfloat diffuse[] = { 0.0, 0.0, 0.0, 1.0 };
GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat shine[] = { 50.0 };
GLfloat low_shine[] = { 5.0 };
GLfloat position[] = { 2.0, 2.0, 1.0, 0.0 };

GLfloat mat_diffuse1[] = { 1.0, 0.0, 0.0, 1.0 };
GLfloat mat_diffuse2[] = { 0.0, 0.0, 1.0, 1.0 };

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
    glLightfv(GL_LIGHT0, GL_SHININESS, shine);
    glLightfv(GL_LIGHT0, GL_POSITION, position);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);   
}

void gameBoard()
{
    glColor3f (0.0, 0.0, 0.0);
    glPushMatrix();

    glPushMatrix();
    glTranslatef (0, 1, 0);
    glScalef (7, .1, .5);
    glutSolidCube (1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef (0, -1, 0);
    glScalef (7, .1, .5);
    glutSolidCube (1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef (-1, 0, 0);
    glScalef (.1, 7, .5);
    glutSolidCube (1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef (1, 0, 0);
    glScalef (.1, 7, .5);
    glutSolidCube (1.0);
    glPopMatrix();

    glPopMatrix();
}

void drawPlayer() 
{
    if (player == false)
    {
        glPushMatrix();
        /*
        glMaterialfv(GL_FRONT, GL_AMBIENT, mat_diffuse1);
        glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
        glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
        glMaterialfv(GL_FRONT, GL_SHININESS, low_shine);
        */
        glRotatef (45, 0, 0, 1);
        glScalef (2, .1, .5);
        glutSolidCube (1.0);
        glPopMatrix();
           
        glPushMatrix();
        /*
        glMaterialfv(GL_FRONT, GL_AMBIENT, mat_diffuse1);
        glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
        glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
        glMaterialfv(GL_FRONT, GL_SHININESS, low_shine);
        */
        glRotatef (-45, 0, 0, 1);
        glScalef (2, .1, .5);
        glutSolidCube (1.0);
        glPopMatrix();
        
        glPopMatrix();
     }
     else if (player == true)
     {
        glPushMatrix();
        /*
        glMaterialfv(GL_FRONT, GL_AMBIENT, mat_diffuse2);
        glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
        glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
        glMaterialfv(GL_FRONT, GL_SHININESS, low_shine);
        */
        glutSolidTorus (0.1, 0.75, 2, 20);
        glPopMatrix();
     }
}

void drawAI()
{
     if (AI == true)
     {
            if (one == false)
            {
                glTranslatef (-2, -2, 0);
                glutSolidTorus (0.1, 0.75, 2, 20);
            }
            else if (one == true && two == false)
            {
                 glTranslatef (0, -2, 0);
                 glutSolidTorus (0.1, 0.75, 2, 20);
            }
            else if (two == true && three == false)
            {
                 glTranslatef ( 2, -2, 0);
                 glutSolidTorus (0.1, 0.75, 2, 20);
            }
            else if (three == true && four == false)
            {
                 glTranslatef ( -2, 0, 0);
                 glutSolidTorus (0.1, 0.75, 2, 20);
            }
            else if (four == true && five == false)
            {
                 glTranslatef ( 0, 0, 0);
                 glutSolidTorus (0.1, 0.75, 2, 20);
            }
            else if (five == true && six == false)
            {
                 glTranslatef ( 2, 0, 0);
                 glutSolidTorus (0.1, 0.75, 2, 20);
            }
            else if (six == true && seven == false)
            {
                glTranslatef ( -2, 2, 0);
                glutSolidTorus (0.1, 0.75, 2, 20); 
            }
            else if (seven == true && eight == false)
            {
                 glTranslatef ( 0, 2, 0);
                 glutSolidTorus (0.1, 0.75, 2, 20);
            }
            else if (eight == true && nine == false)
            {
                glTranslatef (2, 2, 0);
                glutSolidTorus (0.1, 0.75, 2, 20); 
            }
     }
}

void check()
{
    if (player == false)
    {
        if (one == true && two == true && three == true)
        {
            cout << "Player one wins" << endl;
        }
        else if (four == true && five == true && six == true)
        {
        	cout << "Player one wins" << endl;
        }
        else if (seven == true && eight == true && nine == true)
        {
        	cout << "Player one wins" << endl;
        }
        else if (one == true && four == true && seven == true)
        {
        	cout << "Player one wins" << endl;
        }
        else if (two == true && five == true && eight == true)
        {
			cout << "Player one wins" << endl;
		}
		else if (three == true && six == true && nine == true)
		{
			cout << "Player one wins" << endl;
		}
		else if (three == true && five == true && seven == true)
		{
			cout << "Player one wins" << endl;
		}
		else if (one == true && five == true && nine == true)
		{
			cout << "Player one wins" << endl;
		}
	}
}

void check2()
{
    if (player == true)
    {
        if (one == true && two == true && three == true)
        {
            cout << "Player two wins" << endl;
        }
        else if (four == true && five == true && six == true)
        {
        	cout << "Player two wins" << endl;
        }
        else if (seven == true && eight == true && nine == true)
        {
        	cout << "Player two wins" << endl;
        }
        else if (one == true && four == true && seven == true)
        {
        	cout << "Player two wins" << endl;
        }
        else if (two == true && five == true && eight == true)
        {
			cout << "Player two wins" << endl;
		}
		else if (three == true && six == true && nine == true)
		{
			cout << "Player two wins" << endl;
		}
		else if (three == true && five == true && seven == true)
		{
			cout << "Player two wins" << endl;
		}
		else if (one == true && five == true && nine == true)
		{
			cout << "Player two wins" << endl;
		}
	}
}
/*
void checkAI()
{
    if (player == false && drawAI == true)
    {
        if (one == true && two == true && three == true)
        {
            cout << "Computer wins" << endl;
        }
        else if (four == true && five == true && six == true)
        {
        	cout << "Computer wins" << endl;
        }
        else if (seven == true && eight == true && nine == true)
        {
        	cout << "Computer wins" << endl;
        }
        else if (one == true && four == true && seven == true)
        {
        	cout << "Computer wins" << endl;
        }
        else if (two == true && five == true && eight == true)
        {
			cout << "Computer wins" << endl;
		}
		else if (three == true && six == true && nine == true)
		{
			cout << "Computer wins" << endl;
		}
		else if (three == true && five == true && seven == true)
		{
			cout << "Computer wins" << endl;
		}
		else if (one == true && five == true && nine == true)
		{
			cout << "Computer wins" << endl;
		}
	}
}*/

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    gluLookAt(0.0, 2.0, -2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glEnable(GL_LIGHT0);
    gameBoard();
    drawPlayer();

    glutSwapBuffers();
}

void keyboard (unsigned char key, int x, int y)
{
     if (player == false && AI == true)
     {
        switch (key)
        {
               case '1':
               if (one == false)
               {
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
     }
    else //if (player = false && AI == false)
    {
        switch (key) 
        {
            case '1':
                //if (one == false)
                //{
                    player = !player;
                    one = true;
                    glutPostRedisplay();
                    break;
               //}
               //else if (one == true)
               //{
                    //break;
               //}
            case '2':
                if (two == false)
                {
                    glTranslatef (-2, -2, 0);
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

void reshape (int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef (0.0, 0.0, -5.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (600, 600); 
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("3D Tic Tac Toe");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}  
//bushido_blade@hailmail.net

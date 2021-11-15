#include <GL/glut.h>
#include <cmath>
#include"drawLibFamRyabiy.h"

/*
float pos_x=0, pos_y=0;
bool isRight = true;

*/
float pos_x=0;
float pos_y=0;
bool isRight = true;

/*

    @return void;
    Рисует кота
*/


void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна здесь жить


/*
    glPushMatrix();

    drawSky();

    drawEarth();

    drawGrass();

    drawRoad(0,0);

    drawRotateRoad();

    drawRoad(0.8,0);

    //for(int i=0;i<360;i+=10)
       //drawSun(1*sin(i*M_PI/180),0.2*cos(i*M_PI/180),0.2,0.2);   //drawSun(0,0.9,0.2,0.2); солнце начальная координата + функция

    drawShrabs(-.5-0.10,-.3,0.7,0.7);

    drawCar(1.5,0.3,0.2-0.1,0.2-0.1);

    //for(int i=0;i<4;i++)
    //drawBonny(0.3*i+0.9,-0.2*i+0.4,0.1,0.1);                 //drawBonny(1,0-0.53,0.3,0.3);начальная координата зайца+ фунцкция



    drawHouse(1-0.04,1.5-0.35,1,1);

   // for(int i=0;i<4;i++)

       // drawCat(-0.5*i/2+0.6,0.45*i/2+0.9,0.3,0.3);             //drawCat(0-0.2,0+0.5,0.5,0.5); начальная координата кота+ функция
        drawCat(0-0.2,0+0.5,0.5,0.5);

    drawHeart(0,0-0.2,0.2,0.2);
    drawHeart(0-0.12,0-0.43,0.2,0.2);
    drawHeart(0+0.2,0-0.5,0.2,0.2);
    drawHeart(0+0.4,0-0.23,0.2,0.2);
    drawHeart(0+0.65,0-0.33,0.2,0.2);
    drawHeart(0+0.75,0-0.2,0.2,0.2);
    drawHeart(0+0.2,0-0.22,0.2,0.2);
    drawHeart(0+0.48,0-0.51,0.2,0.2);

    drawSunLight(1.1,1.6,0.3,0.3);

    drawTree(1.5-0.04,1-0.045,1,1);

    drawBonny(1,0-0.53,0.3,0.3);

    drawCat(0-0.2,0+0.5,0.5,0.5);

    //drawSun(0,0.9,0.2,0.2);

    for(int i=0;i<3;i++)
    drawBonny(i*0.1+1.1,i*0.2-0.8,0.1,0.1);

    glPopMatrix();

    // эта функция должна здесь жить



    //гарфики

   glPushMatrix();

   drawGraphixs();


   glPopMatrix();
*/
    glPushMatrix();
    if(isRight)
        glRotatef(0,0,0,1);
    drawCat(pos_x,pos_y,1,1);

    glPopMatrix();

    glutSwapBuffers();
}
void processKeys(unsigned char key, int x, int y);

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lesson - 0, Start");
    glutDisplayFunc(renderScene);
    glutKeyboardFunc(processKeys);
    glutMainLoop();
    return 0;
}

void processKeys(unsigned char key, int x, int y){
// вправо В
    /*if(key == 100){
        pos_x = pos_x + 0.1;
    }
    if(key == 97){
        pos_x = pos_x - 0.1;

    }//влево Ф
*/
    if(key == 100 || key == 68){
        pos_x = pos_x + 0.1;
        isRight = true;
    }
    if(key == 97) {
        pos_x = pos_x - 0.1;
        isRight = false;
    }

    if(key == 13)
        exit(0); // close app

    glutPostRedisplay(); // отрисовка
}

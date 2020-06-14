///This is final
#include<windows.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>

//////water
int waterStatus = 0;
float waterX = 0;
float waterY = 0;
//////car
int carStatus = 0;
float carX = 0;
float carY = 0;
//////cloud
int meghStatus = 0;
float meghX = 0;
float meghY = 0;
/////sun
int sunStatus = 0;
float sunX = 0;
float sunY = 0;
//////bird
int birdsStatus = 0;
float birdsX = 0;
float birdsY = 0;
//////
int snowStatus = 0;
int  CloudmeghStatus =0;
GLfloat cloudSpeed=5.0f;
GLfloat Position3= 330;





void DrawCircle(float cx, float cy, float r, int num_segments) {

	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < num_segments; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle

		float x = r * cosf(theta);//calculate x
		float y = r * sinf(theta);//calculate y

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
	glFlush();
}

/// rain start and stop
void update3(int value){
    if(Position3<-300)
    {
        Position3=30.0f;
    }
    if(Position3>300)
       {
           Position3=3;
       }
      Position3 -= cloudSpeed;
      glutPostRedisplay();
      glutTimerFunc(25, update3, 0);
}

/// sun movement
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.7f;

void update2(int value){
    if(position2 >300)
    position2 = -300;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, update2, 0);
}
void sky(){
    glColor3ub (84, 153, 199);
    glBegin(GL_QUADS);
    glVertex2f(0, 480);
    glVertex2f(0, 255);
    glVertex2f(640, 255);
    glVertex2f(640, 480);
    glEnd();
}
void hills(){
    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);////// from left
    glVertex2f(80, 255);
    glVertex2f(120, 290);
    glVertex2f(160, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2f(140, 255);
    glVertex2f(170, 280);
    glVertex2f(200, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2f(180, 255);
    glVertex2f(270, 320);
    glVertex2f(360, 255);
    glEnd();
    //////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(180, 255);
    glVertex2f(270, 320);

    glVertex2f(270, 320);
    glVertex2f(360, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2f(260, 255);
    glVertex2f(320, 300);
    glVertex2f(380, 255);
    glEnd();
    //////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(260, 255);
    glVertex2f(320, 300);

    glVertex2f(320, 300);
    glVertex2f(380, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2f(370, 255);
    glVertex2f(420, 275);
    glVertex2f(470, 255);

    glEnd();
    glFlush();
}
void mountain(){
    glColor3ub (19, 141, 117);
    glBegin(GL_QUADS);
    glVertex2f(0, 255);
    glVertex2f(500, 255);
    glVertex2f(500, 258);
    glVertex2f(0, 258);
    glEnd();
}
void oposite_village(){
    //////tree 1st(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(110, 255);
    glVertex2f(110, 270);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(110, 270, 5, 5000);
    DrawCircle(110, 274, 3, 5000);
    glEnd();
    glFlush();
    //////tree 2nd(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(200, 255);
    glVertex2f(200, 270);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(200, 270, 5, 5000);
    DrawCircle(200, 274, 3, 5000);
    glEnd();
    glFlush();
    //////tree 3rd(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(250, 255);
    glVertex2f(250, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(250, 275, 5, 5000);
    DrawCircle(250, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tee 4th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(270, 255);
    glVertex2f(270, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(270, 275, 5, 5000);
    DrawCircle(270, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 5th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(300, 255);
    glVertex2f(300, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(300, 275, 5, 6000);
    DrawCircle(300, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 6th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(310, 255);
    glVertex2f(310, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(310, 275, 5, 6000);
    DrawCircle(310, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 7th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(355, 255);
    glVertex2f(355, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(355, 275, 5, 6000);
    DrawCircle(355, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 8th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(360, 255);
    glVertex2f(360, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(360, 275, 5, 6000);
    DrawCircle(360, 279, 3, 6000);
    glEnd();
    glFlush();

    //////house 1st
    glColor3ub (144, 164, 174);
    glBegin(GL_POLYGON);//roof
    glVertex2f(150, 260);
    glVertex2f(165, 260);
    glVertex2f(163, 265);
    glVertex2f(152, 265);
    glEnd();

    glColor3ub(153, 153, 153);
    glBegin(GL_QUADS);//body
    glVertex2f(152, 255);
    glVertex2f(163, 255);
    glVertex2f(163, 260);
    glVertex2f(152, 260);
    glEnd();
    glFlush();
    //////house 2nd
    glColor3ub (144, 164, 174);
    glBegin(GL_POLYGON);//roof
    glVertex2f(220, 260);
    glVertex2f(235, 260);
    glVertex2f(233, 265);
    glVertex2f(222, 265);
    glEnd();

    glColor3ub(153, 153, 153);
    glBegin(GL_QUADS);//body
    glVertex2f(222, 255);
    glVertex2f(233, 255);
    glVertex2f(233, 260);
    glVertex2f(222, 260);
    glEnd();
    glFlush();
}
void land(){
    glColor3ub (14, 102, 85);
    glBegin(GL_QUADS);
    glVertex2f(0, 60);
    glVertex2f(640, 60);
    glVertex2f(640, 180);
    glVertex2f(0, 180);
    glEnd();
}
void river(){
    glColor3ub (118, 215, 196);
    glBegin(GL_QUADS);
    glVertex2f(0, 180);
    glVertex2f(640, 180);
    glVertex2f(640, 255);
    glVertex2f(0, 255);
    glEnd();
}
void road(){
    //////road
    glColor3ub (126, 81, 9);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(640, 0);
    glVertex2f(640, 50);
    glVertex2f(0, 50);
    glEnd();
    glFlush();
    //////roads i-land
    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2f(0, 50);
    glVertex2f(640, 50);
    glVertex2f(640, 60);
    glVertex2f(0, 60);
    glEnd();

    glFlush();
}
void nightRoad(){
    //////road
    glColor3ub (121, 85, 72    );
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(640, 0);
    glVertex2f(640, 50);
    glVertex2f(0, 50);
    glEnd();
    glFlush();
    //////roads i-land
    glColor3ub (153, 102, 102  );
    glBegin(GL_QUADS);
    glVertex2f(0, 50);
    glVertex2f(640, 50);
    glVertex2f(640, 60);
    glVertex2f(0, 60);
    glEnd();

    glFlush();
}
void house(){
    //////left home
    //////left triangle or chal
    glColor3ub (49, 27, 146);
    glBegin(GL_TRIANGLES);
    glVertex2f(50, 200);
    glVertex2f(70, 250);
    glVertex2f(90, 200);
    glEnd();
    //////line of chal
    glColor3ub (170, 140, 70);
    glBegin(GL_LINES);
    glVertex2f(55, 200);
    glVertex2f(75, 250);
    glEnd();
    //////right  chal
    glColor3ub (69, 39, 160);
    glBegin(GL_QUADS);
    glVertex2f(90, 200);
    glVertex2f(170, 200);
    glVertex2f(150, 250);
    glVertex2f(70, 250);
    glEnd();
    ////// left body
    glColor3ub (97, 97, 97);
    glBegin(GL_QUADS);
    glVertex2f(55, 150);
    glVertex2f(90, 150);
    glVertex2f(90, 200);
    glVertex2f(55, 200);
    glEnd();
    //////right body
    glColor3ub (117, 117, 117);
    glBegin(GL_QUADS);
    glVertex2f(90, 150);
    glVertex2f(165, 150);
    glVertex2f(165, 200);
    glVertex2f(90, 200);
    glEnd();
    //////right body janala (left)
    glColor3ub (78, 52, 46);
    glBegin(GL_QUADS);
    glVertex2f(95, 160);
    glVertex2f(110, 160);
    glVertex2f(110, 187);
    glVertex2f(95, 187);
    glEnd();
    //////right body janala (right)
    glColor3ub (78, 52, 46);
    glBegin(GL_QUADS);
    glVertex2f(145, 160);
    glVertex2f(160, 160);
    glVertex2f(160, 187);
    glVertex2f(145, 187);
    glEnd();
    //////left body janala
    glColor3ub (78, 52, 46);
    glBegin(GL_QUADS);
    glVertex2f(65, 160);
    glVertex2f(80, 160);
    glVertex2f(80, 187);
    glVertex2f(65, 187);
    glEnd();
    //////right body door
    glColor3ub (78, 52, 46);
    glBegin(GL_QUADS);
    glVertex2f(120, 155);
    glVertex2f(135, 155);
    glVertex2f(135, 190);
    glVertex2f(120, 190);
    glEnd();

    //////left home shadow
    glColor3ub (0, 77, 64);
    glBegin(GL_QUADS);
    glVertex2f(30, 100);
    glVertex2f(140, 100);
    glVertex2f(165, 150);
    glVertex2f(55, 150);
    glEnd();
     //second House
    //front wall
    glColor3ub (140, 140, 140);
    glBegin(GL_QUADS);
    glVertex2f(480, 190);
    glVertex2f(480, 110);
    glVertex2f(590, 110);
    glVertex2f(590, 220);
    glEnd();

    //cilling
    glColor3ub (117, 117, 117);
    glBegin(GL_QUADS);
    glVertex2f(470, 200);
    glVertex2f(470, 180);
    glVertex2f(600, 210);
    glVertex2f(600, 230);
    glEnd();

    //Door
    glColor3ub (150, 93, 0);
    glBegin(GL_QUADS);
    glVertex2f(490, 110);
    glVertex2f(520, 110);
    glVertex2f(520, 150);
    glVertex2f(490, 150);
    glEnd();

    //window1
    glColor3ub (4, 0, 122);
    glBegin(GL_QUADS);
    glVertex2f(540, 140);
    glVertex2f(540, 180);
    glVertex2f(580, 180);
    glVertex2f(580, 140);
    glEnd();

    //window2
    glColor3ub (0, 200, 250);
    glBegin(GL_QUADS);
    glVertex2f(545, 145);
    glVertex2f(545, 175);
    glVertex2f(575, 175);
    glVertex2f(575, 145);
    glEnd();

    //shadow
    glColor3ub (0, 77, 64);
    glBegin(GL_QUADS);
    glVertex2f(480, 110);
    glVertex2f(590, 110);
    glVertex2f(560, 70);
    glVertex2f(430, 70);
    glEnd();

    glFlush();
}

void nightHouse(){
    //////left home
    //////left triangle or chal
    glColor3ub (49, 27, 146);
    glBegin(GL_TRIANGLES);
    glVertex2f(50, 200);
    glVertex2f(70, 250);
    glVertex2f(90, 200);
    glEnd();
    //////line of chal
    glColor3ub (170, 140, 70);
    glBegin(GL_LINES);
    glVertex2f(55, 200);
    glVertex2f(75, 250);
    glEnd();
    //////right  chal
    glColor3ub (69, 39, 160);
    glBegin(GL_QUADS);
    glVertex2f(90, 200);
    glVertex2f(170, 200);
    glVertex2f(150, 250);
    glVertex2f(70, 250);
    glEnd();
    ////// left body
    glColor3ub (97, 97, 97);
    glBegin(GL_QUADS);
    glVertex2f(55, 150);
    glVertex2f(90, 150);
    glVertex2f(90, 200);
    glVertex2f(55, 200);
    glEnd();
    //////right body
    glColor3ub (117, 117, 117);
    glBegin(GL_QUADS);
    glVertex2f(90, 150);
    glVertex2f(165, 150);
    glVertex2f(165, 200);
    glVertex2f(90, 200);
    glEnd();
    //////right body janala (left)
    glColor3ub (253, 216, 53);
    glBegin(GL_QUADS);
    glVertex2f(95, 160);
    glVertex2f(110, 160);
    glVertex2f(110, 187);
    glVertex2f(95, 187);
    glEnd();
    //////right body janala (right)
    glColor3ub (253, 216, 53);
    glBegin(GL_QUADS);
    glVertex2f(145, 160);
    glVertex2f(160, 160);
    glVertex2f(160, 187);
    glVertex2f(145, 187);
    glEnd();
    //////left body janala
    glColor3ub (253, 216, 53);
    glBegin(GL_QUADS);
    glVertex2f(65, 160);
    glVertex2f(80, 160);
    glVertex2f(80, 187);
    glVertex2f(65, 187);
    glEnd();
    //////right body door
    glColor3ub (253, 216, 53);
    glBegin(GL_QUADS);
    glVertex2f(120, 155);
    glVertex2f(135, 155);
    glVertex2f(135, 190);
    glVertex2f(120, 190);
    glEnd();


     //second House
    //front wall
    glColor3ub (140, 140, 140);
    glBegin(GL_QUADS);
    glVertex2f(480, 190);
    glVertex2f(480, 110);
    glVertex2f(590, 110);
    glVertex2f(590, 220);
    glEnd();

    //cilling
    glColor3ub (117, 117, 117);
    glBegin(GL_QUADS);
    glVertex2f(470, 200);
    glVertex2f(470, 180);
    glVertex2f(600, 210);
    glVertex2f(600, 230);
    glEnd();

    //Door
    glColor3ub (0, 200, 250);
    glBegin(GL_QUADS);
    glVertex2f(490, 110);
    glVertex2f(520, 110);
    glVertex2f(520, 150);
    glVertex2f(490, 150);
    glEnd();

    //window1
    glColor3ub (4, 0, 122);
    glBegin(GL_QUADS);
    glVertex2f(540, 140);
    glVertex2f(540, 180);
    glVertex2f(580, 180);
    glVertex2f(580, 140);
    glEnd();

    //window2
    glColor3ub (0, 200, 250);
    glBegin(GL_QUADS);
    glVertex2f(545, 145);
    glVertex2f(545, 175);
    glVertex2f(575, 175);
    glVertex2f(575, 145);
    glEnd();


    glFlush();
}

void shipyard(){
    /////////////////bot body
    glColor3ub (150, 129, 117);
    glBegin(GL_QUADS);
    glVertex2f(350, 195);
    glVertex2f(360, 183);
    glVertex2f(410, 183);
    glVertex2f(420, 195);
    glEnd();
    /////////////////boat roof
    glColor3ub (220, 118, 51);
    glBegin(GL_QUADS);
    glVertex2f(370, 195);
    glVertex2f(400, 195);
    glVertex2f(400, 210);
    glVertex2f(370, 210);
    glEnd();
    ////////////////////khuti and dori
    glColor3ub (46, 64, 83);
    glBegin(GL_LINES);
    glVertex2f(340, 170);
    glVertex2f(340, 250);

    glVertex2f(340, 200);
    glVertex2f(350, 195);
    glEnd();
    //////////////////////////////////khutir shadow
    glColor3ub (0, 77, 64);

    glBegin(GL_LINES);
    glVertex2f(340, 170);
    glVertex2f(310, 100);
    glEnd();
    /////////////////////////////////////nouka er shadow
    glColor3ub (0, 77, 64);
    glBegin(GL_QUADS);
    glVertex2f(350, 170);
    glVertex2f(402, 170);
    glVertex2f(410, 180);
    glVertex2f(360, 180);
    glEnd();
}

void nightShipyard(){
    /////////////////bot body
    glColor3ub (150, 129, 117);
    glBegin(GL_QUADS);
    glVertex2f(350, 195);
    glVertex2f(360, 183);
    glVertex2f(410, 183);
    glVertex2f(420, 195);
    glEnd();
    /////////////////boat roof
    glColor3ub (220, 118, 51);
    glBegin(GL_QUADS);
    glVertex2f(370, 195);
    glVertex2f(400, 195);
    glVertex2f(400, 210);
    glVertex2f(370, 210);
    glEnd();
    ////////////////////khuti and dori
    glColor3ub (46, 64, 83);
    glBegin(GL_LINES);
    glVertex2f(340, 170);
    glVertex2f(340, 250);

    glVertex2f(340, 200);
    glVertex2f(350, 195);
    glEnd();

    glFlush();
}
void tree(){

    glColor3ub (46, 125, 50);
    DrawCircle(50, 320, 35, 3000);//1
    glColor3ub (27, 94, 32);
    DrawCircle(50, 280, 50, 2000);//1
    glEnd();
    ////////////////////////////////majher daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2f(40, 155);
    glVertex2f(60, 155);
    glVertex2f(60, 245);
    glVertex2f(40, 245);
    glEnd();
    //////////////////////////////////bam daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2f(40, 245);
    glVertex2f(50, 245);
    glVertex2f(40, 270);
    glVertex2f(30, 270);
    glEnd();
    /////////////////////////////////right daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2f(50, 245);
    glVertex2f(60, 245);
    glVertex2f(70, 270);
    glVertex2f(60, 270);
    glEnd();
    glFlush();
        /////////////////////tree shadow
    glColor3ub (0, 77, 64);
    glBegin(GL_QUADS);
    glVertex2f(15, 120);
    glVertex2f(35, 120);
    glVertex2f(55, 155);
    glVertex2f(40, 155);
    glEnd();

    glColor3ub (0, 77, 64);
    DrawCircle(20,100,30,1000);
    glEnd();

    /////////////////////////////right tree
        glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2f(490, 155);
    glVertex2f(510, 155);
    glVertex2f(510, 245);
    glVertex2f(490, 245);
    glEnd();

    glColor3ub (27, 94, 32);
    glBegin(GL_TRIANGLES);
    glVertex2f(460, 230);
    glVertex2f(540, 230);
    glVertex2f(500, 280);
    glEnd();

    glColor3ub (46, 125, 50);
    glBegin(GL_TRIANGLES);
    glVertex2f(470, 260);
    glVertex2f(530, 260);
    glVertex2f(500, 300);
    glEnd();

    glFlush();

}
void daywater(){
    glColor3ub (169, 242, 242);
    glBegin(GL_LINES);
    glVertex2f(200, 220);
    glVertex2f(220, 220);

    glVertex2f(210, 230);
    glVertex2f(220, 230);

    glVertex2f(300, 220);
    glVertex2f(320, 220);

    glVertex2f(400, 220);
    glVertex2f(420, 220);

    glVertex2f(100, 240);
    glVertex2f(120, 240);

    glVertex2f(150, 180);
    glVertex2f(150, 180);

    glVertex2f(0, 190);
    glVertex2f(10, 190);

    glVertex2f(0, 200);
    glVertex2f(10, 200);

    glVertex2f(30, 185);
    glVertex2f(40, 185);

    glVertex2f(100, 250);
    glVertex2f(125, 250);

    glVertex2f(150,240);
    glVertex2f(165,240);

    glVertex2f(90,200);
    glVertex2f(100,200);

    glVertex2f(300,190);
    glVertex2f(320,190);

    glVertex2f(270,235);
    glVertex2f(275,235);

    glVertex2f(500,200);
    glVertex2f(510,200);

    glVertex2f(600,220);
    glVertex2f(615,220);

    glVertex2f(550,200);
    glVertex2f(555,200);

    glVertex2f(520,225);
    glVertex2f(540,225);

    glVertex2f(370,215);
    glVertex2f(380,215);

    glEnd();
   //////boat

    ////////////////////////////////noukar body
    glColor3ub (150, 129, 117);
    glBegin(GL_QUADS);
    glVertex2f(20, 220);
    glVertex2f(60, 220);
    glVertex2f(70, 230);
    glVertex2f(10, 230);
    glEnd();
    ///////////////////////////////noukar soi
    glColor3ub (206, 175, 109);
    glBegin(GL_POLYGON);
    glVertex2f(27, 230);
    glVertex2f(57, 230);
    glVertex2f(57, 240);
    glVertex2f(27, 240);
    glEnd();
    //glFlush();
    ////////////////////////////////pal er chera kapor
    glColor3ub (209, 102, 27);
    glBegin(GL_TRIANGLES);
    glVertex2f(57, 230);
    glVertex2f(90, 280);
    glVertex2f(50, 290);
    glEnd();
        ///////////////////////////noukar pal er khuda :D
    glColor3ub (206, 175, 109);
    glBegin(GL_LINES);
    glVertex2f(57, 230);
    glVertex2f(73, 290);
    glEnd();

    /////////////////////////////////gach er guri
    glColor3ub (206, 175, 109);
    glBegin(GL_POLYGON);
    glVertex2f(300, 200);
    glVertex2f(330, 200);
    glVertex2f(330, 210);
    glVertex2f(300, 210);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(310, 210);
    glVertex2f(315, 210);
    glVertex2f(310, 217);
    glVertex2f(305, 217);
    glEnd();
    glFlush();
    /////////////////////////////////gach er gurir shadow
    glColor3ub (149, 187, 198);
    glBegin(GL_POLYGON);
    glVertex2f(295, 190);
    glVertex2f(325, 190);
    glVertex2f(330, 200);
    glVertex2f(300, 200);
    glEnd();
    glFlush();
    ///////////////////////////////noukar shadow
    glColor3ub (149, 187, 198);
    glBegin(GL_QUADS);
    glVertex2f(15, 210);
    glVertex2f(55, 210);
    glVertex2f(60, 220);
    glVertex2f(20, 220);
    glEnd();
}
////////////////////////////////////////////////////move  the  water
void nightwater(){
    glColor3ub (169, 242, 242);
    glBegin(GL_LINES);
    glVertex2f(200, 220);
    glVertex2f(220, 220);

    glVertex2f(210, 230);
    glVertex2f(220, 230);

    glVertex2f(300, 220);
    glVertex2f(320, 220);

    glVertex2f(400, 220);
    glVertex2f(420, 220);

    glVertex2f(100, 240);
    glVertex2f(120, 240);

    glVertex2f(150, 180);
    glVertex2f(150, 180);

    glVertex2f(0, 190);
    glVertex2f(10, 190);

    glVertex2f(0, 200);
    glVertex2f(10, 200);

    glVertex2f(30, 185);
    glVertex2f(40, 185);

    glVertex2f(100, 250);
    glVertex2f(125, 250);

    glVertex2f(150,240);
    glVertex2f(165,240);

    glVertex2f(90,200);
    glVertex2f(100,200);

    glVertex2f(300,190);
    glVertex2f(320,190);

    glVertex2f(270,235);
    glVertex2f(275,235);

    glVertex2f(500,200);
    glVertex2f(510,200);

    glVertex2f(600,220);
    glVertex2f(615,220);

    glVertex2f(550,200);
    glVertex2f(555,200);

    glVertex2f(520,225);
    glVertex2f(540,225);

    glVertex2f(370,215);
    glVertex2f(380,215);

    glEnd();

    glFlush();

}
void moveWater(int x){
    if (waterStatus ==1)
    {
        waterX += .5;
    }
    if (waterX>640)
    {
        waterX = -200;
    }
    glPushMatrix();
    glTranslatef(waterX, waterY, 0);
    if(x==1)
        {
    daywater();
    }
    else{
        nightwater();
    }
    glPopMatrix();
    glFlush();
}
void car(int x){

void megh(){
    glColor3ub (200, 220, 220);
	DrawCircle(170, 400, 25, 2000);
	DrawCircle(200, 400, 35, 2000);
	DrawCircle(230, 400, 25, 2000);

    glColor3ub (200, 220, 220);
	DrawCircle(300, 420, 25, 2000);
	DrawCircle(330, 420, 35, 2000);
	DrawCircle(360, 420, 25, 2000);

	 glColor3ub (200, 220, 220);
	DrawCircle(500, 400, 25, 2000);
	DrawCircle(530, 400, 35, 2000);
	DrawCircle(560, 400, 25, 2000);
	glFlush();
}

void Cloudmegh(){
    glColor3ub (112, 123, 124  );
	DrawCircle(170, 400, 25, 2000);
	DrawCircle(200, 400, 35, 2000);
	DrawCircle(230, 400, 25, 2000);

    glColor3ub (112, 123, 124  );
	DrawCircle(300, 420, 25, 2000);
	DrawCircle(330, 420, 35, 2000);
	DrawCircle(360, 420, 25, 2000);

    glColor3ub (112, 123, 124 );
	DrawCircle(500, 400, 25, 2000);
	DrawCircle(530, 400, 35, 2000);
	DrawCircle(560, 400, 25, 2000);

	glFlush();
}
void moveMegh(int x){
	if (meghStatus == 1)
        {
            meghX +=.5;
        }
	if (meghX>2000)
        {
            meghX = -200;
        }
	glPushMatrix();
	glTranslatef(meghX, meghY, 0);


      if(x==1)
    {
       megh();
    }
    else{
        Cloudmegh();
    }

	glPopMatrix();
	glFlush();
}
void drawSun(){
    glPushMatrix();
    glTranslatef(0,position2, 0.0f);
    glColor3ub (243, 156, 18);
	DrawCircle(550, 275, 15, 1000);
	//////////////////ray of sun
    glColor3ub (243, 156, 18);
    glBegin(GL_LINES);
    glVertex2f(550, 290);//up
    glVertex2f(550, 300);

    glVertex2f(565, 275);//right
    glVertex2f(575, 275);

    glVertex2f(550, 260);//down
    glVertex2f(550, 250);

    glVertex2f(535, 275);//left
    glVertex2f(525, 275);
    glEnd();
    glPopMatrix();
    //glFlush();

}

void drawMoon(){
    //
    //glTranslatef(0,position4, 0.0f);
    glColor3ub (243, 156, 18);
	DrawCircle(550, 400, 15, 1000);
	//////////////////ray of sun

    //glPopMatrix();
    glFlush();

}
///////////////////////////// birds
void birds(int x){
    //////////////////////1st bird
    glColor3ub (0, 0, 0);
	DrawCircle(60, 300, 3, 1000);
	DrawCircle(63, 300, 2, 1000);
	glBegin(GL_LINES);
	glLineWidth(5);
	glVertex2f(60, 300);
    glVertex2f(65, 307);

    glVertex2f(60, 300);
    glVertex2f(55, 307);
    glEnd();
	///////////////////////2nd bird
	DrawCircle(70, 310, 3, 1000);
	DrawCircle(73, 310, 2, 1000);
	glBegin(GL_LINES);
	glVertex2f(70, 310);
    glVertex2f(75, 317);

    glVertex2f(70, 310);
    glVertex2f(65, 317);
    glEnd();
	//////////////////////////3rd bird
	DrawCircle(75, 290, 3, 1000);
	DrawCircle(78, 290, 2, 1000);
	glBegin(GL_LINES);
	glVertex2f(75, 290);
    glVertex2f(80, 297);

    glVertex2f(75, 290);
    glVertex2f(70, 297);
    glEnd();
	//////////////////////////////4th bird
	DrawCircle(90, 300, 3, 1000);
	DrawCircle(93, 300, 2, 1000);
	glBegin(GL_LINES);
	glVertex2f(90, 300);
    glVertex2f(95, 307);

    glVertex2f(90, 300);
    glVertex2f(85, 307);
    glEnd();
	/////////////////////////////5th bird
	DrawCircle(75, 320, 3, 1000);
	DrawCircle(78, 320, 2, 1000);
	glBegin(GL_LINES);
	glVertex2f(75, 320);
    glVertex2f(80, 327);

    glVertex2f(75, 320);
    glVertex2f(70, 327);
    glEnd();
}
//////////////////////////////move bird
void movebirds(){
	if (birdsStatus == 1)
        {
            birdsX += 2;
        }
	if (birdsX>2000)
        {
            birdsX = -200;
        }
	glPushMatrix();
	glTranslatef(birdsX, birdsY, 0);
	birds(1);
	glPopMatrix();
}


////////////////// vera
void vera(){
   ////1st vera
    glColor3ub (208, 216, 219);////////body
	DrawCircle(200, 150, 10, 1000);
	glEnd();
	glColor3ub (20, 50, 10);//////head
	DrawCircle(212, 150, 5, 1000);
	glEnd();

	glColor3ub (0, 0, 10);//////////mouth
	DrawCircle(212, 145, 2, 1000);
	glEnd();

	glColor3ub (0, 0, 0);
	DrawCircle(215, 155, 2, 1000);//////////right ear
	glEnd();
	glColor3ub (0, 0, 0);////////////left ear
	DrawCircle(209, 155, 2, 1000);
	glEnd();
	glColor3ub (0, 0, 10);////////legs from L.H.S
	glBegin(GL_LINES);
	glVertex2f(193, 130);
	glVertex2f(193, 142);

	glVertex2f(196, 130);
	glVertex2f(196, 140);

	glVertex2f(203, 130);
	glVertex2f(203, 140);

	glVertex2f(206, 130);
	glVertex2f(206, 142);
    glEnd();
    glFlush();
    glColor3ub (255, 255, 255);////////eyes
	glBegin(GL_POINTS);
	glVertex2f(210, 150);
	glVertex2f(214, 150);
    glEnd();
    glFlush();
    ////////////2nd vera
    glColor3ub (208, 216, 219);////////body
	DrawCircle(240, 150, 10, 1000);
	glEnd();
	glColor3ub (20, 50, 10);//////head
	DrawCircle(230, 150, 5, 1000);
	glEnd();

	glColor3ub (0, 0, 10);//////////mouth
	DrawCircle(230, 145, 2, 1000);
	glEnd();

	glColor3ub (0, 0, 0);
	DrawCircle(233, 155, 2, 1000);//////////right ear
	glEnd();
	glColor3ub (0, 0, 0);////////////left ear
	DrawCircle(227, 155, 2, 1000);
	glEnd();
	glColor3ub (0, 0, 10);////////legs from L.H.S
	glBegin(GL_LINES);
	glVertex2f(235, 130);
	glVertex2f(235, 142);

	glVertex2f(238, 130);
	glVertex2f(238, 140);

	glVertex2f(245, 130);
	glVertex2f(245, 140);

	glVertex2f(248, 130);
	glVertex2f(248, 143);
    glEnd();
    glFlush();
    glColor3ub (255, 255, 255);////////eyes
	glBegin(GL_POINTS);
	glVertex2f(228, 150);
	glVertex2f(232, 150);
    glEnd();
    glFlush();
    ///////////////////////////////////////////////verar shadow
    glColor3ub (0, 77, 64);////////body
	DrawCircle(180, 110, 15, 1000);

	glColor3ub (0, 77, 64);////////body
	DrawCircle(220, 110, 15, 1000);
	glEnd();

}

void nightTree(){
        glColor3ub (46, 125, 50);
    DrawCircle(50, 320, 35, 3000);//1
    glColor3ub (27, 94, 32);
    DrawCircle(50, 280, 50, 2000);//1
    glEnd();
    ////////////////////////////////majher daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2f(40, 155);
    glVertex2f(60, 155);
    glVertex2f(60, 245);
    glVertex2f(40, 245);
    glEnd();
    //////////////////////////////////bam daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2f(40, 245);
    glVertex2f(50, 245);
    glVertex2f(40, 270);
    glVertex2f(30, 270);
    glEnd();
    /////////////////////////////////right daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2f(50, 245);
    glVertex2f(60, 245);
    glVertex2f(70, 270);
    glVertex2f(60, 270);
    glEnd();
    glFlush();


    /////////////////////////////right tree
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2f(490, 155);
    glVertex2f(510, 155);
    glVertex2f(510, 245);
    glVertex2f(490, 245);
    glEnd();

    glColor3ub (27, 94, 32);
    glBegin(GL_TRIANGLES);
    glVertex2f(460, 230);
    glVertex2f(540, 230);
    glVertex2f(500, 280);
    glEnd();

    glColor3ub (46, 125, 50);
    glBegin(GL_TRIANGLES);
    glVertex2f(470, 260);
    glVertex2f(530, 260);
    glVertex2f(500, 300);
    glEnd();

    glFlush();
}
///rain

void snow(){
  if(snowStatus ==1){
    glPushMatrix();
    glTranslatef(0.0f,Position3, 0.0f);

    glTranslatef(0.0f,Position3, 0.0f);

    glColor3ub(28, 40, 51);
    DrawCircle(400, 480, 1, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, 1, 2000);
    glColor3ub(28, 40, 51);
	DrawCircle(420, 480, 1, 2000);
	DrawCircle(440, 480, .5, 2000);
	DrawCircle(460, 500, 1, 2000);
	glColor3ub(28, 40, 51);
	DrawCircle(480, 490, 1, 2000);
	DrawCircle(500, 480, .5, 2000);
	DrawCircle(520, 480, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(570, 500, .5, 2000);
	DrawCircle(580, 480, 1, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(100, 480, .8, 2000);
	DrawCircle(120, 490, .5, 2000);
	DrawCircle(140, 480, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(160, 480, .5, 2000);
	DrawCircle(180, 480, .5, 2000);
	DrawCircle(200, 490, 1, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(220, 490, 1, 2000);
	DrawCircle(240, 480, .5, 2000);
	DrawCircle(260, 480, 1, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(280, 500, .5, 2000);
	DrawCircle(300, 480, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(340, 480, .5, 2000);
	DrawCircle(360, 490, .5, 2000);
	DrawCircle(380, 480, 1, 2000);

    glTranslatef(0.0f,Position3, 0.0f);

    glColor3ub(28, 40, 51);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
	DrawCircle(650, 680, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);
    glColor3ub(28, 40, 51);
    DrawCircle(410, 480, .5, 2000);
	DrawCircle(510, 490, .5, 2000);
	DrawCircle(610, 480, 1, 2000);
    glColor3ub(28, 40, 51);
	DrawCircle(410, 480, .5, 2000);
	DrawCircle(430, 490, .5, 2000);
	DrawCircle(450, 480, 1, 2000);
	glColor3ub(28, 40, 51);
	DrawCircle(470, 480, .5, 2000);
	DrawCircle(490, 480, .5, 2000);
	DrawCircle(530, 490, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(570, 500, .5, 2000);
	DrawCircle(580, 480, 1, 2000);
	DrawCircle(590, 490, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 490, .5, 2000);
	DrawCircle(150, 480, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(170, 480, .5, 2000);
	DrawCircle(190, 490, .5, 2000);
	DrawCircle(210, 480, 1, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(230, 500, .5, 2000);
	DrawCircle(250, 490, .5, 2000);
	DrawCircle(270, 480, 1, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(290, 500, .5, 2000);
	DrawCircle(310, 490, .5, 2000);
	DrawCircle(330, 480, .5, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(350, 500, .5, 2000);
	DrawCircle(370, 480, .5, 2000);
	DrawCircle(390, 490, .5, 2000);

    glTranslatef(Position3,Position3, 0.0f);

    glColor3ub(28, 40, 51);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
	DrawCircle(650, 680, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);
    glColor3ub(28, 40, 51);
    DrawCircle(400, 500, .7, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, .7, 2000);
    glColor3ub(28, 40, 51);
	DrawCircle(420, 500, .7, 2000);
	DrawCircle(440, 490, .7, 2000);
	DrawCircle(460, 480, .7, 2000);
	glColor3ub(28, 40, 51);
	DrawCircle(480, 500, .5, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(520, 480, .5, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(570, 500, .7, 2000);
	DrawCircle(580, 490, .7, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(100, 500, .8, 2000);
	DrawCircle(120, 490, .8, 2000);
	DrawCircle(140, 480, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(160, 500, .7, 2000);
	DrawCircle(180, 490, .7, 2000);
	DrawCircle(200, 480, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(220, 500, 1, 2000);
	DrawCircle(240, 490, .5, 2000);
	DrawCircle(260, 480, .5, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(280, 500, 1, 2000);
	DrawCircle(300, 490, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(340, 500, .5, 2000);
	DrawCircle(360, 490, 1, 2000);
	DrawCircle(380, 480, .5, 2000);
    glColor3ub(28, 40, 51);
    DrawCircle(410, 500, 1, 2000);
	DrawCircle(510, 490, .7, 2000);
	DrawCircle(610, 480, .6, 2000);
    glColor3ub(28, 40, 51);
	DrawCircle(410, 480, .7, 2000);
	DrawCircle(430, 490, .6, 2000);
	DrawCircle(450, 500, .5, 2000);
	glColor3ub(28, 40, 51);
	DrawCircle(470, 500, 1, 2000);
	DrawCircle(490, 490, .5, 2000);
	DrawCircle(530, 489, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(570, 500, 1, 2000);
	DrawCircle(580, 481, .7, 2000);
	DrawCircle(590, 491, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 490, .5, 2000);
	DrawCircle(150, 480, .8, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(170, 500, 1, 2000);
	DrawCircle(190, 481, .5, 2000);
	DrawCircle(210, 490, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(230, 500, .5, 2000);
	DrawCircle(250, 498, .7, 2000);
	DrawCircle(270, 480, 1, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(290, 500, .5, 2000);
	DrawCircle(310, 490, .7, 2000);
	DrawCircle(330, 480, 1, 2000);
	glColor3ub(28, 40, 51 );
    DrawCircle(350, 500, .5, 2000);
	DrawCircle(370, 490, 1, 2000);
	DrawCircle(390, 480, .7, 2000);
    glColor3ub(28, 40, 51);
    DrawCircle(400, 500, 1, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, .7, 2000);
    glColor3ub(28, 40, 51);
	DrawCircle(420, 500, 1, 2000);
	DrawCircle(440, 490, 1, 2000);
	DrawCircle(460, 480, 1, 2000);
	glColor3ub(28, 40, 51);
	DrawCircle(480, 500, .7, 2000);
	DrawCircle(500, 490, 1, 2000);
	DrawCircle(520, 480, .7, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(570, 500, 1, 2000);
	DrawCircle(580, 490, .5, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(100, 500, .8, 2000);
	DrawCircle(120, 490, .5, 2000);
	DrawCircle(140, 480, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(160, 500, .7, 2000);
	DrawCircle(180, 490, 1, 2000);
	DrawCircle(200, 480, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(220, 500, 1, 2000);
	DrawCircle(240, 490, .5, 2000);
	DrawCircle(260, 480, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(280, 500, 1, 2000);
	DrawCircle(300, 490, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(340, 500, .5, 2000);
	DrawCircle(360, 490, .7, 2000);
	DrawCircle(380, 480, 1, 2000);
    glColor3ub(28, 40, 51);
    DrawCircle(410, 500, 1, 2000);
	DrawCircle(510, 490, .7, 2000);
	DrawCircle(610, 480, 1, 2000);
    glColor3ub(28, 40, 51);
	DrawCircle(410, 480, 1, 2000);
	DrawCircle(430, 490, .7, 2000);
	DrawCircle(450, 500, 1, 2000);
	glColor3ub(28, 40, 51);
	DrawCircle(470, 600, 1, 2000);
	DrawCircle(490, 690, .5, 2000);
	DrawCircle(530, 689, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(570, 600, 1, 2000);
	DrawCircle(580, 681, .5, 2000);
	DrawCircle(590, 691, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 690, .5, 2000);
	DrawCircle(150, 680, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(170, 600, .5, 2000);
	DrawCircle(190, 681, .5, 2000);
	DrawCircle(210, 690, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(230, 600, 1, 2000);
	DrawCircle(250, 698, .7, 2000);
	DrawCircle(270, 680, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(290, 600, 1, 2000);
	DrawCircle(310, 690, .5, 2000);
	DrawCircle(330, 680, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(350, 600, 1, 2000);
	DrawCircle(370, 690, .7, 2000);
	DrawCircle(390, 680, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
    DrawCircle(650, 680, .8, 2000);
	glColor3ub(28, 40, 51);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);

    glPopMatrix();

    }
}
void lamp(){
    ///left lamp
    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2i(150, 60);
    glVertex2i(160, 60);
    glVertex2i(160, 110);
    glVertex2i(150, 110);
    glEnd();

    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2i(145, 110);
    glVertex2i(165, 110);
    glVertex2i(162, 130);
    glVertex2i(147, 130);
    glEnd();

    ///right lamp
    glColor3ub (153, 153, 102 );
    glBegin(GL_QUADS);
    glVertex2i(370, 60);
    glVertex2i(380, 60);
    glVertex2i(380, 110);
    glVertex2i(370, 110);
    glEnd();

    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2i(365, 110);
    glVertex2i(385, 110);
    glVertex2i(382, 130);
    glVertex2i(367, 130);
    glEnd();
}
void nightLamp(){
    ///left lamp
    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2i(150, 60);
    glVertex2i(160, 60);
    glVertex2i(160, 110);
    glVertex2i(150, 110);
    glEnd();

    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2i(145, 110);
    glVertex2i(165, 110);
    glVertex2i(162, 130);
    glVertex2i(147, 130);
    glEnd();

    glColor3ub (236, 240, 241 );
    glBegin(GL_QUADS);
    glVertex2i(145, 110);
    glVertex2i(165, 110);
    glVertex2i(185, 60);
    glVertex2i(120, 60);
    glEnd();



    ///right lamp
    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2i(370, 60);
    glVertex2i(380, 60);
    glVertex2i(380, 110);
    glVertex2i(370, 110);
    glEnd();

    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2i(365, 110);
    glVertex2i(385, 110);
    glVertex2i(382, 130);
    glVertex2i(367, 130);
    glEnd();

    glColor3ub (236, 240, 241  );
    glBegin(GL_QUADS);
    glVertex2i(365, 110);
    glVertex2i(385, 110);
    glVertex2i(415, 60);
    glVertex2i(335, 60);
    glEnd();
}

void myDisplay(void){
    sky();
    hills();
    mountain();
    oposite_village();
    //moveSun();
    snow();
    drawSun();
    land();
    vera();
    river();
    moveWater(1);
    shipyard();
    movebirds();
    tree();
    road();
    moveMegh(1);
    house();
    lamp();
    movecar();
    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();
}
void displaynight(){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient[] = {0.41,1.31,1.88, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
    sky();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient2[] = {1.29,1.29,1.29, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
    hills();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient3[] = {1.9,1.9,1.9, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);
    mountain();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient1[] = {.60,1.90,2.76, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
    river();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient4[] = {4.0,4.0,4.0, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);
    drawMoon();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient5[] = {0.0,1.50,1.25, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient5);
    land();
    glDisable(GL_LIGHTING);

    moveWater(2);
    nightShipyard();
    nightTree();
    nightLamp();
    nightRoad();
    nightHouse();
    moveMegh(2);
	glFlush();
    glutPostRedisplay();
    glutSwapBuffers();

}


//////////////moving algorithms
void keyboard(unsigned char key, int x, int y){

    if (key == 'N' || key == 'n'){
		glutDisplayFunc(displaynight);
	}
	if (key == 'd'){		//day
		glutDisplayFunc(myDisplay);
	}
	if (key == 'S' || key == 's'){		//sun start
		sunStatus = 1;
	}
	else if (key == 'C' || key == 'c'){		//megh start
		meghStatus = 1;
	}
	else if (key == 'e' || key == 'E'){		//megh STOP
		meghStatus = 0;
	}
	else if (key == 'R' || key == 'r'){		////water strt
		waterStatus = 1;
	}
	else if (key == 'T' || key == 't'){		//water stop
		waterStatus = 0;
	}
    else if (key == 'X' || key == 'x'){		////car strt
		carStatus = 1;
	}
	else if (key == 'Y' || key == 'y'){		//car stop
		carStatus = 0;
	}
    else if (key == 'B' || key == 'b'){		////bird strt
		birdsStatus = 1;
	}
	else if (key == 'G' || key == 'g'){		//bird stop
		birdsStatus = 0;
	}
	else if (key == 'V' || key == 'v'){		////snow strt
		snowStatus = 1;
	}
	else if (key == 'Q' || key == 'q'){		//snow stop
		snowStatus = 0;
	}
}

void myInit(void){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glColor3f(.0f,.0f,.0f);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Village Scene");
    glutPostRedisplay();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(keyboard);
    myInit();
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(25,update3,0);
    glutMainLoop();
    return 0;
}

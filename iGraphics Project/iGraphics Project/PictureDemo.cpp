# include "iGraphics.h"

int pic_x, pic_y;

int menu_x=800,menu_y=350;
/*
	function iDraw() is called again and again by the system.
*/
int c_a=130,c_b=173,c_c=253,c_d=16,c_e=79,c_f=197;
int l=2;


void iDraw()
{
	
	iClear();

	iShowBMP(0,0, "G.bmp");

	//MENU

	//play
	//play-background-rectangle
	iSetColor(c_d,c_e,c_f);
	iFilledRectangle(menu_x-5,menu_y-5,130+10,40+10);
	iRectangle(menu_x-5,menu_y-5,130+10,40+10);
	//play-background-circle
	iFilledCircle(menu_x-5,menu_y+20,25,1000);
	iCircle(menu_x-5,menu_y+20,25,1000);
	iFilledCircle(menu_x+140-10,menu_y+20,25,1000);
	iCircle(menu_x+140-10,menu_y+20,25,1000);
	//play-rectangle
	iSetColor(c_a,c_b,c_c);
	iFilledRectangle(menu_x,menu_y,130,40);
	iRectangle(menu_x,menu_y,130,40);
	//play-circle
	iFilledCircle(menu_x-5,menu_y+20,20,1000);
	iCircle(menu_x-5,menu_y+20,20,1000);
	iFilledCircle(menu_x+130,menu_y+20,20,1000);
	iCircle(menu_x+130,menu_y+20,20,1000);
	//play-text
	iSetColor(255,255,214);
	iText(835,362,"PLAY",GLUT_BITMAP_TIMES_ROMAN_24);

	//guide
	//y is less by 70 then menu_y
	//guide-background-rectangle
	iSetColor(c_d,c_e,c_f);
	iFilledRectangle(menu_x-5,menu_y-5-70,130+10,40+10);
	iRectangle(menu_x-5,menu_y-5-70,130+10,40+10);
	//guide-background-circle
	iFilledCircle(menu_x,menu_y+20-70,25,1000);
	iCircle(menu_x,menu_y+20-70,25,1000);
	iFilledCircle(menu_x+140-10,menu_y+20-70,25,1000);
	iCircle(menu_x+140-10,menu_y+20-70,25,1000);
	//guide-rectangle
	iSetColor(c_a,c_b,c_c);
	iFilledRectangle(menu_x,menu_y-70,130,40);
	iRectangle(menu_x,menu_y-70,130,40);
	//guide-circle
	iFilledCircle(menu_x,menu_y-70+20,20,1000);
	iCircle(menu_x,menu_y+20-70,20,1000);
	iFilledCircle(menu_x+130,menu_y+20-70,20,1000);
	iCircle(menu_x+130,menu_y+20-70,20,1000);
	//guide-text
	iSetColor(255,255,214);
	iText(828,361-70,"GUIDE",GLUT_BITMAP_TIMES_ROMAN_24);

	//highscore
	//y is less by 140 then menu_y
	//highscore-background-rectangle
	iSetColor(c_d,c_e,c_f);
	iFilledRectangle(menu_x-5,menu_y-5-140,130+10,40+10);
	iRectangle(menu_x-5,menu_y-5-140,130+10,40+10);
	//background-background-circle
	iFilledCircle(menu_x,menu_y+20-140,25,1000);
	iCircle(menu_x,menu_y+20-140,25,1000);
	iFilledCircle(menu_x+140-10,menu_y+20-140,25,1000);
	iCircle(menu_x+140-10,menu_y+20-140,25,1000);
	//highscore-rectangle
	iSetColor(c_a,c_b,c_c);
	iFilledRectangle(menu_x,menu_y-140,130,40);
	iRectangle(menu_x,menu_y-140,130,40);
	//highscore-circle
	iFilledCircle(menu_x,menu_y-140+20,20,1000);
	iCircle(menu_x,menu_y+20-140,20,1000);
	iFilledCircle(menu_x+130,menu_y+20-140,20,1000);
	iCircle(menu_x+130,menu_y+20-140,20,1000);
	//guide-text
	iSetColor(255,255,214);
	iText(790,362-140,"HIGHSCORE",GLUT_BITMAP_TIMES_ROMAN_24);

	//quit
	//y is less by 210 then menu_y
	//quit-background-rectangle
	iSetColor(c_d,c_e,c_f);
	iFilledRectangle(menu_x-5,menu_y-5-210,130+10,40+10);
	iRectangle(menu_x-5,menu_y-5-210,130+10,40+10);
	//quit-background-circle
	iFilledCircle(menu_x,menu_y+20-210,25,1000);
	iCircle(menu_x,menu_y+20-210,25,1000);
	iFilledCircle(menu_x+140-10,menu_y+20-210,25,1000);
	iCircle(menu_x+140-10,menu_y+20-210,25,1000);
	//quit-rectangle
	iSetColor(c_a,c_b,c_c);
	iFilledRectangle(menu_x,menu_y-210,130,40);
	iRectangle(menu_x,menu_y-210,130,40);
	//quit-circle
	iFilledCircle(menu_x,menu_y-210+20,20,1000);
	iCircle(menu_x,menu_y+20-210,20,1000);
	iFilledCircle(menu_x+130,menu_y+20-210,20,1000);
	iCircle(menu_x+130,menu_y+20-210,20,1000);
	//quit-text
	iSetColor(255,255,214);
	iText(836,362-210,"QUIT",GLUT_BITMAP_TIMES_ROMAN_24);
	
	
}

	
/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

void iPassiveMouse(int n, int m)
{
	//place your codes here
	if(n>=800 && 930>=n && m>=350 && 400>=m){
	c_a=152;
	c_b=103;
	c_c=238;
	c_d=135;
	c_e=0;
	c_f=255;
	}

	else if(n>=800 && 930>=n && m>=350-70 && 400-70>=m){
	c_a=152;
	c_b=103;
	c_c=238;
	c_d=135;
	c_e=0;
	c_f=255;
	}

	else if(n>=800 && 930>=n && m>=350-140 && 400-140>=m){
	c_a=152;
	c_b=103;
	c_c=238;
	c_d=135;
	c_e=0;
	c_f=255;
	}

	else if(n>=800 && 930>=n && m>=350-210 && 400-210>=m){
	c_a=152;
	c_b=103;
	c_c=238;
	c_d=135;
	c_e=0;
	c_f=255;
	}

	else{
	c_d=16;
	c_e=79;
	c_f=197;
	c_a=130;
	c_b=173;
	c_c=253;
	}

}


/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
/*void iMouse(int button, int state, int m, int n)
{
	if(button == GLUT_LEFT_BUTTON  ){
		if(n>=800 && 930>=n && m>=350 && 400>=m){
			l=5;
		}
		printf("%d %d",m,n);
		}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}*/

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key == 'x')
	{
		//do something with 'x'
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	if(key == GLUT_KEY_LEFT)
	{
		pic_x--;
	}
	if(key == GLUT_KEY_RIGHT)
	{
		pic_x++;
	}
	if(key == GLUT_KEY_UP)
	{
		pic_y++;
	}
	if(key == GLUT_KEY_DOWN)
	{
		pic_y--;
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here.
	pic_x = 30;
	pic_y = 20;
	iInitialize(1200, 600, "PictureDemo");
//	iStart();
	return 0;
}

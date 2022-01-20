# include "iGraphics.h"

typedef struct file f;

//save data from file here
struct file{
	char fname[10];
	char fscore[5];
};
f arr[30];
int u=0;

int bullet=0;

	int horizontal = 0;
    int vertical = 0;
void GetDesktopResolution(int& horizontal, int& vertical)
{
   RECT desktop;

   const HWND hDesktop = GetDesktopWindow();

   GetWindowRect(hDesktop, &desktop);


   horizontal = desktop.right;
   vertical = desktop.bottom;
}

int width=570;

void showScore(int k,int d){
	int mod=0;
	int l=4,p=0;
	int count=k;
	char score[5]={'0','0','0','0','0'};
	while(count>0){
		mod=count%10;
		p+=mod;
		score[l]='p';
		l--;
		p-=mod;
	}
	//return score;
}


int pic_x, pic_y;

int menu_x=800,menu_y=350;
int menu_x1=185,menu_y1=450;
/*
	function iDraw() is called again and again by the system.
*/
int c_a=130,c_b=173,c_c=253,c_d=16,c_e=79,c_f=197;
int c1_a=130,c1_b=173,c1_c=253,c1_d=16,c1_e=79,c1_f=197;
int c2_a=130,c2_b=173,c2_c=253,c2_d=16,c2_e=79,c2_f=197;
int c3_a=130,c3_b=173,c3_c=253,c3_d=16,c3_e=79,c3_f=197;
int c11_a=130,c11_b=173,c11_c=253,c11_d=16,c11_e=79,c11_f=197;
int c12_a=130,c12_b=173,c12_c=253,c12_d=16,c12_e=79,c12_f=197;
int c13_a=130,c13_b=173,c13_c=253,c13_d=16,c13_e=79,c13_f=197;
int mx,my,n,m;
int k=1,o=1;
int x=570,y=0;

int xi=width+10;
int yi=y+20;
int xf=width+10;
int yf=y+20;

int ybi=y+10;
int xbi=width+10;
int ybf=ybi;

int eyi=0;
int exi=width+12;
int eyf=0;

void d(int k){
	
	if(k==2){
	iClear();
	iShowBMP(0,0,"play.bmp");
	//newgame-background-rectangle
	iSetColor(c11_d,c11_e,c11_f);
	iFilledRectangle(menu_x1-5,menu_y1-5,130+10,40+10);
	iRectangle(menu_x1-5,menu_y1-5,130+10,40+10);
	//newgame-background-circle
	iFilledCircle(menu_x1-5,menu_y1+20,25,1000);
	iCircle(menu_x1-5,menu_y1+20,25,1000);
	iFilledCircle(menu_x1+140-10,menu_y1+20,25,1000);
	iCircle(menu_x1+140-10,menu_y1+20,25,1000);
	//newgame-rectangle
	iSetColor(c11_a,c11_b,c11_c);
	iFilledRectangle(menu_x1,menu_y1,130,40);
	iRectangle(menu_x1,menu_y1,130,40);
	//newgame-circle
	iFilledCircle(menu_x1-5,menu_y1+20,20,1000);
	iCircle(menu_x1-5,menu_y1+20,20,1000);
	iFilledCircle(menu_x1+130,menu_y1+20,20,1000);
	iCircle(menu_x1+130,menu_y1+20,20,1000);
	//newgame-text
	iSetColor(255,255,214);
	iText(182,460,"NEW GAME",GLUT_BITMAP_TIMES_ROMAN_24);
	//iText(835,362,"PLAY",GLUT_BITMAP_TIMES_ROMAN_24);
	
	//loadgame-background-rectangle
	iSetColor(c12_d,c12_e,c12_f);
	iFilledRectangle(menu_x1-5,menu_y1-5-70,130+10,40+10);
	//iRectangle(menu_x1-5,menu_y1-5,130+10,40+10);
	//loadgame-background-circle
	iFilledCircle(menu_x1-5,menu_y1+20-70,25,1000);
	//iCircle(menu_x1-5,menu_y1+20,25,1000);
	iFilledCircle(menu_x1+140-10,menu_y1+20-70,25,1000);
	//iCircle(menu_x1+140-10,menu_y1+20-70,25,1000);
	//loadgame-rectangle
	iSetColor(c12_a,c12_b,c12_c);
	iFilledRectangle(menu_x1,menu_y1-70,130,40);
	//iRectangle(menu_x1,menu_y1-70,130,40);
	//loadgame-circle
	iFilledCircle(menu_x1-5,menu_y1-70+20,20,1000);
	iCircle(menu_x1-5,menu_y1+20-70,20,1000);
	iFilledCircle(menu_x1+130,menu_y1-70+20,20,1000);
	iCircle(menu_x1+130,menu_y1-70+20,20,1000);
	//loadgame-text
	iSetColor(255,255,214);
	iText(175,460-70,"LOAD GAME",GLUT_BITMAP_TIMES_ROMAN_24);
	
	//back-background-rectangle
	iSetColor(c13_d,c13_e,c13_f);
	iFilledRectangle(menu_x1-5+900,menu_y1-5-70-300,130+10,40+10);
	//iRectangle(menu_x1-5+500,menu_y1-5,130+10,40+10);
	//back-background-circle
	iFilledCircle(menu_x1-5+900,menu_y1+20-70-300,25,1000);
	//iCircle(menu_x1-5+500,menu_y1+20,25,1000);
	iFilledCircle(menu_x1+900+140-10,menu_y1+20-70-300,25,1000);
	//iCircle(menu_x1+140-10+500,menu_y1+20-70,25,1000);
	//back-rectangle
	iSetColor(c13_a,c13_b,c13_c);
	iFilledRectangle(menu_x1+900,menu_y1-70-300,130,40);
	//iRectangle(menu_x1+500,menu_y1-70,130,40);
	//back-circle
	iFilledCircle(menu_x1-5+900,menu_y1-300-70+20,20,1000);
	iCircle(menu_x1-5+900,menu_y1-300+20-70,20,1000);
	iFilledCircle(menu_x1+130+900,menu_y1-70-300+20,20,1000);
	iCircle(menu_x1+130+900,menu_y1-70-300+20,20,1000);
	//back-text
	iSetColor(255,255,214);
	iText(197+900,460-70-300,"RETURN",GLUT_BITMAP_TIMES_ROMAN_24);



	}
    if(k==6){
	iClear();
	
	
	//iSetColor(230,236,179);
	//iFilledRectangle(0,0,1500,1000
	//if(ybf!=ybi)
	//	iShowBMP(xi,yi,"boss1.bmp");

	//if((xi>width+10 || yi>y+20) && (xi<=xf || yi<=yf)){
	
		//iShowBMP2(xi,yi,"boss1.bmp",0);
	//}

	iShowBMP(0,0,"be.bmp");
	iSetColor(182,205,209);
	iFilledRectangle(0,0,horizontal,80);
	iFilledRectangle(0,80,horizontal,20);
	iSetColor(29,148,171);
	iLine(0,80,horizontal,80);
	int z;
	int zx=horizontal/25;
	for(z=1;z<=25;z++){
	iLine(zx,0,zx,80);
	zx+=horizontal/25;
	}

	iShowBMP2(width,y,"Z.bmp",0);

	/*if((xi>width+10 || yi>y+20) && (xi<=xf || yi<=yf)){
		iShowBMP2(xi,yi,"bullet.bmp",0);
	}
	else{
		//iClear();
	}
	*/
	//for bullet
	if(eyf!=eyi ){
		exi=width+12;
		iShowBMP2(exi,eyi,"boss1.bmp",0);
	}

	}
	//for highscore
	else if(k==3){
	iClear();
	iSetColor(56,26,182);
	iFilledRectangle(0,0,horizontal,vertical);
	iShowBMP(0,0,"highscore.bmp");
	//FILE *f=fopen("highscore.bin","r");
	//FILE *f2=fopen("highscore.txt","r");
	
	char name[20];
	int score=0;
	//int count=0;
	int distance=0;
	iSetColor(230,231,255);
	iText(150,700-distance-80,"NAME",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(850,700-distance-80,"HIGHSCORE",GLUT_BITMAP_TIMES_ROMAN_24);
	/*while(fscanf(f,"%s %d",name,score)!=EOF){
		iSetColor(195,207,233);
		iText(150,700-distance,name,GLUT_BITMAP_TIMES_ROMAN_24);
		//showScore(score,distance);
		//iText(600,700-distance,score,GLUT_BITMAP_TIMES_ROMAN_24);
		distance+=80;
	}*/


	//showing data from file
	int h_y=500;
	int y;
	for(y=0;y<=u;y++){
		iText(150,h_y,arr[y].fname,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(850,h_y,arr[y].fscore,GLUT_BITMAP_TIMES_ROMAN_24);
		h_y-=60;
	}
	h_y=500;

	//back-background-rectangle
	iSetColor(c13_d,c13_e,c13_f);
	iFilledRectangle(menu_x1-5+900,menu_y1-5-70-300,130+10,40+10);
	//iRectangle(menu_x1-5+500,menu_y1-5,130+10,40+10);
	//back-background-circle
	iFilledCircle(menu_x1-5+900,menu_y1+20-70-300,25,1000);
	//iCircle(menu_x1-5+500,menu_y1+20,25,1000);
	iFilledCircle(menu_x1+900+140-10,menu_y1+20-70-300,25,1000);
	//iCircle(menu_x1+140-10+500,menu_y1+20-70,25,1000);
	//back-rectangle
	iSetColor(c13_a,c13_b,c13_c);
	iFilledRectangle(menu_x1+900,menu_y1-70-300,130,40);
	//iRectangle(menu_x1+500,menu_y1-70,130,40);
	//back-circle
	iFilledCircle(menu_x1-5+900,menu_y1-300-70+20,20,1000);
	iCircle(menu_x1-5+900,menu_y1-300+20-70,20,1000);
	iFilledCircle(menu_x1+130+900,menu_y1-70-300+20,20,1000);
	iCircle(menu_x1+130+900,menu_y1-70-300+20,20,1000);
	//back-text
	iSetColor(255,255,214);
	iText(197+900,460-70-300,"RETURN",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	//guide
	else if(k==4){
	iClear();
	iShowBMP(0,0,"guide.bmp");
	//iSetColor(108,106,222);
	//iFilledRectangle(0,0,horizontal,vertical);
	//iSetColor(240,240,255);
	//iFilledRectangle(0+100,0+100,horizontal-200,vertical-200);
	iSetColor(108,106,222);
	iText(170,vertical-150,"GUIDE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(170,vertical-270,"Press 'w' to move forward",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(170,vertical-350,"Press 's' to move back",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(170,vertical-430,"Press 'a' to move left",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(170,vertical-510,"Press 'd' to move right",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(170,vertical-590,"Press 'e' to shoot",GLUT_BITMAP_TIMES_ROMAN_24);

	//iShowBMP2(0,300,"text.bmp",0);
	

	//back-background-rectangle
	iSetColor(c13_d,c13_e,c13_f);
	iFilledRectangle(menu_x1-5+900,menu_y1-5-70-300,130+10,40+10);
	//iRectangle(menu_x1-5+500,menu_y1-5,130+10,40+10);
	//back-background-circle
	iFilledCircle(menu_x1-5+900,menu_y1+20-70-300,25,1000);
	//iCircle(menu_x1-5+500,menu_y1+20,25,1000);
	iFilledCircle(menu_x1+900+140-10,menu_y1+20-70-300,25,1000);
	//iCircle(menu_x1+140-10+500,menu_y1+20-70,25,1000);
	//back-rectangle
	iSetColor(c13_a,c13_b,c13_c);
	iFilledRectangle(menu_x1+900,menu_y1-70-300,130,40);
	//iRectangle(menu_x1+500,menu_y1-70,130,40);
	//back-circle
	iFilledCircle(menu_x1-5+900,menu_y1-300-70+20,20,1000);
	iCircle(menu_x1-5+900,menu_y1-300+20-70,20,1000);
	iFilledCircle(menu_x1+130+900,menu_y1-70-300+20,20,1000);
	iCircle(menu_x1+130+900,menu_y1-70-300+20,20,1000);
	//back-text
	iSetColor(255,255,214);
	iText(197+900,460-70-300,"RETURN",GLUT_BITMAP_TIMES_ROMAN_24);
	}
}
void ex(int o){
	if(o=0){
	exit(0);
	}
}
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
	iSetColor(c1_d,c1_e,c1_f);
	iFilledRectangle(menu_x-5,menu_y-5-70,130+10,40+10);
	iRectangle(menu_x-5,menu_y-5-70,130+10,40+10);
	//guide-background-circle
	iFilledCircle(menu_x,menu_y+20-70,25,1000);
	iCircle(menu_x,menu_y+20-70,25,1000);
	iFilledCircle(menu_x+140-10,menu_y+20-70,25,1000);
	iCircle(menu_x+140-10,menu_y+20-70,25,1000);
	//guide-rectangle
	iSetColor(c1_a,c1_b,c1_c);
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
	iSetColor(c2_d,c2_e,c2_f);
	iFilledRectangle(menu_x-5,menu_y-5-140,130+10,40+10);
	iRectangle(menu_x-5,menu_y-5-140,130+10,40+10);
	//background-background-circle
	iFilledCircle(menu_x,menu_y+20-140,25,1000);
	iCircle(menu_x,menu_y+20-140,25,1000);
	iFilledCircle(menu_x+140-10,menu_y+20-140,25,1000);
	iCircle(menu_x+140-10,menu_y+20-140,25,1000);
	//highscore-rectangle
	iSetColor(c2_a,c2_b,c2_c);
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
	iSetColor(c3_d,c3_e,c3_f);
	iFilledRectangle(menu_x-5,menu_y-5-210,130+10,40+10);
	iRectangle(menu_x-5,menu_y-5-210,130+10,40+10);
	//quit-background-circle
	iFilledCircle(menu_x,menu_y+20-210,25,1000);
	iCircle(menu_x,menu_y+20-210,25,1000);
	iFilledCircle(menu_x+140-10,menu_y+20-210,25,1000);
	iCircle(menu_x+140-10,menu_y+20-210,25,1000);
	//quit-rectangle
	iSetColor(c3_a,c3_b,c3_c);
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

	//game-name
	iSetColor(235,255,151);
	iText(270,vertical-150,"DEFEND YOUR BASE!",GLUT_BITMAP_TIMES_ROMAN_24);

	d(k);
	
	
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
	c1_a=152;
	c1_b=103;
	c1_c=238;
	c1_d=135;
	c1_e=0;
	c1_f=255;
	}

	else if(n>=800 && 930>=n && m>=350-140 && 400-140>=m){
	c2_a=152;
	c2_b=103;
	c2_c=238;
	c2_d=135;
	c2_e=0;
	c2_f=255;
	}

	else if(n>=800 && 930>=n && m>=350-210 && 400-210>=m){
	c3_a=152;
	c3_b=103;
	c3_c=238;
	c3_d=135;
	c3_e=0;
	c3_f=255;
	}
	
	//new-game
	else if(n>=185 && 185+130>=n && m>=450 && 450+50>=m){
	c11_a=152;
	c11_b=103;
	c11_c=238;
	c11_d=135;
	c11_e=0;
	c11_f=255;
	}
	//load-game
	else if(n>=185 && 185+130>=n && m>=450-70 && 450-70+50>=m){
	c12_a=152;
	c12_b=103;
	c12_c=238;
	c12_d=135;
	c12_e=0;
	c12_f=255;
	}
	//back
	else if(n>=185+900 && 185+130+900>=n && m>=450-70-300 && 450-70+50-300>=m){
	c13_a=152;
	c13_b=103;
	c13_c=238;
	c13_d=135;
	c13_e=0;
	c13_f=255;
	}

	else{
	
	c_a=130;c_b=173;c_c=253;c_d=16;c_e=79;c_f=197;
	c1_a=130;c1_b=173;c1_c=253;c1_d=16;c1_e=79;c1_f=197;
	c2_a=130;c2_b=173;c2_c=253;c2_d=16;c2_e=79;c2_f=197;
	c3_a=130;c3_b=173;c3_c=253;c3_d=16;c3_e=79;c3_f=197;
	c11_a=130;c11_b=173;c11_c=253;c11_d=16;c11_e=79;c11_f=197;
	c12_a=130;c12_b=173;c12_c=253;c12_d=16;c12_e=79;c12_f=197;
	c13_a=130;c13_b=173;c13_c=253;c13_d=16;c13_e=79;c13_f=197;

	}

}


/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if(mx>=800 && 930>=mx && my>=350 && 400>=my){
		k=2;
		}
		if(mx>=800 && 930>=mx && my>=350-210 && 400-210>=my){
		exit(0);
		}

		if(mx>=800 && 930>=mx && my>=350-140 && 400-140>=my ){
		//if(k==2)
			//k=6;
		//else
			k=3;
		
		}
	    if(mx>=800 && 930>=mx && my>=350-70 && 400-70>=my){
		k=4;
		}
		if(k==2){
		if(mx>=185 && 185+130>=mx && my>=450 && 450+50>=my)
			k=6;
		else if(mx>=185 && 185+130>=mx && my>=450-70 && 450+50-70>=my)
			k=6;
		}
		if(mx>=185+900 && 185+130+900>=mx && my>=450-70-300 && 450-70+50-300>=my){
		k=1;
		}
	}
	
		/*if(k==6 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		xf=mx;
		yf=my;
		}*/

	
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
	if(key == 'w'){
		y+=7;
	if(y>40)
		y=40;
	
	}
	if(key == 'a'){
	width-=30;
	if(width<0)
		width=0;
	}
	if(key == 'd'){
	width+=30;
		if(width>horizontal-80)
			width=horizontal-80;
	}
	if(key == 's'){
	y-=7;
	if(y<0)
		y=0;
	}
	if(key == 'e'){
	eyf=vertical-60;
	//for counting bullet
	bullet++;
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
		//exit(0);
		k=1;
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

void c(){
	if(xf!=(x+10) || yf!=(y+20)){
		xi=xi+(xf/10);
		yi=yi+(yf/10);
	}
	else if(xi>xf || yi>yf){
	xi=width+10;
	yi=y+20;
	xf=width+10;
	yf=y+20;
	}
}

/*void ye(){
	if(ybf!=ybi)
ybi+=ybf/10;
if(ybi>vertical)
	ybf=y+10;
}*/

//for bullet
void ey(){
	
	eyi+=eyf/20;
	if(eyi>vertical){
	eyi=0;
	eyf=0;
	}
}

int main()
{
	//place your own initialization codes here.

    GetDesktopResolution(horizontal, vertical);
	pic_x = 30;
	pic_y = 20;
	PlaySound("nm.wav",NULL,SND_LOOP||SND_ASYNC);

	//open file
	FILE *e=fopen("hs.txt","r");
	while(fscanf(e,"%s %s\n",&arr[u].fname,&arr[u].fscore)!=EOF){
		u++;
	}
	iSetTimer(150,c);
	//iSetTimer(50,t);
	//iSetTimer(150,ye);
	iSetTimer(10,ey);
	iInitialize(horizontal, vertical-60, "new");
	iStart();
	return 0;
}

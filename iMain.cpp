/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"

int page=0,x=-248,y=0;

int fx=x+16,fy=y+64;

int ex=230,ey=800,a=190,b=800,c=150,d=800,e=270,f=800,g=310,h=800,i=66,j=1100,k=198,l=1200,m=330,n=1300;

int o=462,p=1400,q=600,r=600,u=800,v=500,w=600,z=700;

int point=0;

int gx=40,gy=900,rx=350,ry=900,ix=350,iy=900,zx=350,zy=900,dx=0,dy=900;

int exx=ey,aa=b,cc=d,ee=f,gg=h;

int bx=0,by=0,cx=216,cy=-500;

int dr=1,lx=cx+64,ly=cy,mx=cx+34,my=cy+135,nx=cx+94,ny=cy+135,ox=cx+119,oy=cy+210,px=cx+9,py=cy+210;

int kill=0,t=60;

int chx=0,chy=0;

char score[10],tim[10];

/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here	
	iClear();
	if(page==0)
	{
		iShowBMP(0,0,"start.bmp");

		sprintf(tim,"%d",t);

		iSetColor(255,100,100);

	iText(230,540,"TIME:",GLUT_BITMAP_HELVETICA_18);

	iText(290,540,tim,GLUT_BITMAP_HELVETICA_18);

    iText(150,570,"Hurry Up!!!! Hurry Up!!!!",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if(page==1)
	{
      //  iShowBMP(0,0,"gam.bmp");

		iSetColor(255,0,0);

		iFilledCircle(fx,fy,3);    // here fx and fy are co-ordinates of bullet of your plane

        iFilledCircle(fx,fy-61,3);

	    iFilledCircle(fx,fy-122,3);

		iShowBMP(x,y,"plane.bmp"); // here x and y are co-ordinates of your plane

			iShowBMP(ex,ey,"en1.bmp");

	iShowBMP(a,b,"en1.bmp");

    iShowBMP(c,d,"en1.bmp");

	iShowBMP(e,f,"en1.bmp");

	iShowBMP(g,h,"en1.bmp");

	iSetColor(0,0,255);

    iFilledCircle(ex+16,exx,4);

	iFilledCircle(a+16,aa,4);

	iFilledCircle(c+16,cc,4);

	iFilledCircle(e+16,ee,4);

	iFilledCircle(g+16,gg,4);

	iShowBMP(i,j,"en5.bmp");

	iShowBMP(k,l,"en8.bmp");

	iShowBMP(m,n,"en6.bmp");

	iShowBMP(o,p,"en9.bmp");

	iShowBMP(q,r,"en1.bmp");

	iShowBMP(u,v,"en3.bmp");

	iShowBMP(w,z,"en2.bmp");

    iShowBMP(dx,dy,"died.bmp");

	iShowBMP(gx,gy,"gameover.bmp");

    iShowBMP(rx,ry,"restart.bmp");

	iShowBMP(ix,iy,"exit.bmp");

	sprintf(score,"%d",point);

	iSetColor(255,100,100);

	iText(10,780,"SCORE:",GLUT_BITMAP_HELVETICA_18);

	iText(90,780,score,GLUT_BITMAP_HELVETICA_18);

	sprintf(tim,"%d",t);

	iText(470,780,"TIME:",GLUT_BITMAP_HELVETICA_18);

	iText(530,780,tim,GLUT_BITMAP_HELVETICA_18);

	}





	if(page==2)
	{

    iShowBMP(dx,dy,"died.bmp");

	iShowBMP(gx,gy,"gameover.bmp");

    iShowBMP(rx,ry,"restart.bmp");

	iShowBMP(zx,zy,"back.bmp");

	iShowBMP(ix,iy,"exit.bmp");

	iSetColor(255,100,100);

	iText(10,780,"SCORE:",GLUT_BITMAP_HELVETICA_18);

	iText(90,780,score,GLUT_BITMAP_HELVETICA_18);

	iSetColor(255,100,100);

	sprintf(tim,"%d",t);

	iText(230,640,"TIME:",GLUT_BITMAP_HELVETICA_18);

	iText(290,640,tim,GLUT_BITMAP_HELVETICA_18);

    iText(150,670,"Hurry Up!!!! Hurry Up!!!!",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(100,360," Your Score:",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(300,360,score,GLUT_BITMAP_TIMES_ROMAN_24);



	}


	if(page==3)
	{
		iShowBMP(bx,by,"bo.bmp");

			iShowBMP(ex,ey,"en1.bmp");

	iShowBMP(a,b,"en1.bmp");

    iShowBMP(c,d,"en1.bmp");

	iShowBMP(e,f,"en1.bmp");

	iShowBMP(g,h,"en1.bmp");

	iSetColor(100,255,0);

    iFilledCircle(ex+16,exx,4);

	iFilledCircle(a+16,aa,4);

	iFilledCircle(c+16,cc,4);

	iFilledCircle(e+16,ee,4);

	iFilledCircle(g+16,gg,4);


	    iShowBMP(cx,cy,"boss.bmp");

		iSetColor(250,200,0);

	    iFilledCircle(lx,ly,5);

        iFilledCircle(mx,my,5);

	    iFilledCircle(nx,ny,5);

	    iFilledCircle(ox,oy,5);

	    iFilledCircle(px,py,5);

			iSetColor(255,0,0);

			iFilledCircle(fx,fy,3);    // here fx and fy are co-ordinates of bullet of your plane

        iFilledCircle(fx,fy-61,3);

	    iFilledCircle(fx,fy-122,3);

		iShowBMP(x,y,"plane.bmp");

		iSetColor(255,100,100);

	iText(10,780,"SCORE:",GLUT_BITMAP_HELVETICA_18);

	iText(90,780,score,GLUT_BITMAP_HELVETICA_18);

	}


	if(page==4)
	{

		iShowBMP(dx,dy,"died.bmp");

    	iShowBMP(gx,gy,"gameover.bmp");

        iShowBMP(rx,ry,"restart.bmp");

	    iShowBMP(zx,zy,"back.bmp");

	    iShowBMP(ix,iy,"exit.bmp");

		iSetColor(255,100,100);

	iText(10,780,"SCORE:",GLUT_BITMAP_HELVETICA_18);

	iText(90,780,score,GLUT_BITMAP_HELVETICA_18);

		iSetColor(255,100,100);

	sprintf(tim,"%d",t);

	iText(230,640,"TIME:",GLUT_BITMAP_HELVETICA_18);

	iText(290,640,tim,GLUT_BITMAP_HELVETICA_18);

    iText(150,670,"Hurry Up!!!! Hurry Up!!!!",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(100,360," Your Score:",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(300,360,score,GLUT_BITMAP_TIMES_ROMAN_24);


	}


	if(page==5)
	{
		
        iShowBMP(gx,500,"gameover.bmp");

		iShowBMP(rx,ry,"restart.bmp");

	    iShowBMP(zx,zy,"back.bmp");

	    iShowBMP(ix,iy,"exit.bmp");

		iSetColor(255,100,100);

		 iText(50,400,"Congratulation!! You are a new Champion!!!!",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(100,360," Your Score:",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(300,360,score,GLUT_BITMAP_TIMES_ROMAN_24);


	}

	if(page==6)
	{
		iShowBMP(0,0,"help.bmp");
        iShowBMP(zx,zy,"back.bmp");
	}

	if(page==7)
	{
        iShowBMP(0,0,"about.bmp"); 
		iShowBMP(zx,zy,"back.bmp");
	}



}







void fire()    // function of firing of main plane
{
	fy+=20;
	
	if(fy>=y+400)
		fy=y+125;
}






void boss() // function of movementing and firing of boss
{
		
	if(dr==1)
	   cx+=3;

	if(dr==0)
		cx-=3;

	if(cx+128>=560)
		dr=0;

	if(cx<=3)
		dr=1;







	// firing code of boss

	ly-=8;

	my-=8;mx-=2;

	ny-=8;nx+=2;

	oy-=8;ox+=2;
		
	py-=8;px-=2;
		
	if(ly<=0)
		  lx=cx+64,ly=cy;

	if(mx<=0 || my<=0)
		  mx=cx+34,my=cy+135;

	if(nx>=560 || ny<=0)
	      nx=cx+94,ny=cy+135;

	if(ox>=560 || oy<=0)
		  ox=cx+119,oy=cy+210;

	if(px<=0 || py<=0)
		  px=cx+9,py=cy+210;








	// boss plane's bullet touching main plane

		if(lx+5>=x && lx-5<=x+32 && ly-5<=y+64 && ly+5>=y)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=4;
			t=60;
		}

		if(mx+5>=x && mx-5<=x+32 && my-5<=y+64 && my+5>=y)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=4;
			t=60;
		}

		if(nx+5>=x && nx-5<=x+32 && ny-5<=y+64 && ny+5>=y)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=4;
			t=60;
		}

		if(ox+5>=x && ox-5<=x+32 && oy-5<=y+64 && oy+5>=y)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=4;
			t=60;
		}

		if(px+5>=x && px-5<=x+32 && py-5<=y+64 && py+5>=y)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=4;
			t=60;
		}







		//collision between main plane & boss plane
			if(cy<=y+64 && y<cy+256 && x+32>=cx && x<=cx+128)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=4;
			t=60;
		}






        //bullet touching the boss plane
        if(fx>=cx+54 && fx<=cx+74 && fy>=cy+50 && fy<=cy+256)
		{
			kill++;
			point+=50;

			if(kill>=4)
			{
				  y=900;
				  cy=-500;
				  gy=500;
				  ry=260;
				  iy=160;
				  zy=60;
				  point+=1000;
				  page=5;
			}

		}






}










void enimy()
{

	// enimy planes movement
	ey-=3;a-=1;b-=3;c-=1;d-=3;e+=1;f-=3;g+=1;h-=3;

		if(ey<=-64)
		{
			ey=800;
		}

    	if(b<=-64 || a<=-32)
		{
			b=800;
	        a=190;
		}

     	if(d<=-64 || c<=-32)
		{
			d=800;
			c=150;
		}

	    if(f<=-64 || e>=560)
		{
			f=800;
			e=270;
		}
	    if(h<=-64 || g>=560)
		{
			g=310;
		    h=800;
		}






      // enimy plane's bullet
		exx-=5;aa-=5;cc-=5;ee-=5;gg-=5;
	
		if(exx<=0)
		{
			exx=ey;
		}

	    if(aa<=0)
		{
			aa=b;
		}

	    if(cc<=0)
		{
			cc=d;
		}

	    if(ee<=0)
		{
			ee=f;
		}
	
		if(gg<=0)
		{
			gg=h;
		}







       // enimy planes movement
		if(page==1 || page==2)
		{
		j-=3;l-=3;n-=3;p-=3;

	    if(j<=-64)
		    j=1100;
    
		if(l<=-64)
		    l=1200;
    
		if(n<=-64)
		    n=1300;
	
		if(p<=-64)
		    p=1400;
		}




		
		
		// enimy planes movement
		if(page==1 || page==2)
		{
		q-=2;r-=2;u-=2;v-=2;w-=2;z-=1;

		if(q+32<=0 || r+64<=0)
		{
			q=600;
			r=600;
		}

		if(u+32<=0 || v+64<=0)
		{
			u=800;
			v=500;
		}

		if(w+32<=0 || z+64<=0)
		{
			w=600;
			z=700;
		}
		}







		// bullet touching the enimy plane
		if(fx>=ex && fx<=ex+32 && fy>=ey && fy<=ey+64)
		{	
			ey=800;
			exx=ey;
			ex=230;
			point+=100;
	    }

	   if(fx>=a && fx<=a+32 && fy>=b && fy<=b+64)
	   {	
		   b=800;
		   aa=b;
		   point+=100;
	       a=190;
	   }

	   if(fx>=c && fx<=c+32 && fy>=d && fy<=d+64)
	   {	
		   d=800;
		   cc=d;
		   point+=100;
	       c=150;
	   }

	   if(fx>=e && fx<=e+32 && fy>=f && fy<=f+64)
	   {	
		   f=800;
		   ee=f;
		   point+=100;
	       e=270;
	   }

       if(fx>=g && fx<=g+32 && fy>=h && fy<=h+64)
	   {	
		   h=800;
		   gg=h;
		   point+=100;
		   g=310;
	   }

	   if(fx>=i && fx<=i+32 && fy>=j && fy<=j+64)
	   {
		   j=1100;
		   point+=100;
	   }

       if(fx>=k && fx<=k+32 && fy>=l && fy<=l+64)
	   {
		   l=1200;
		   point+=100;
	   }

       if(fx>=m && fx<=m+32 && fy>=n && fy<=n+64)
	   {
		   n=1300;
		   point+=100;
	   }

	   if(fx>=o && fx<=o+32 && fy>=p && fy<=p+64)
	   {
		   p=1400;
		   point+=100;
	   }

	   if(fx>=q && fx<=q+32 && fy>=r && fy<=r+64)
	   {	
		   q=600;
		   point+=100;
		   r=600;
	   }

	   if(fx>=u && fx<=u+32 && fy>=v && fy<=v+64)
	   {	
		   u=800;
		   point+=100;
		   v=500;
	   }

	   if(fx>=w && fx<=w+32 && fy>=z && fy<=z+64)
	   {	
		   w=600;
		   point+=100;
		   z=700;
	   }






		// collision between main plane & enimy plane
	   if(ey<=y+64 && y<ey+64 && x+32>=ex && x<=ex+32)
	   {
	       dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }

	   if(b<=y+64 && y<b+64 && x+32>=a && x<=a+32)
	   {
	       dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }
		
	   if(d<=y+64 && y<d+64 && x+32>=c && x<=c+32)
	   {
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }

	   if(f<=y+64 && y<f+64 && x+32>=e && x<=e+32)
	   {
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }
		
	   if(h<=y+64 && y<h+64 && x+32>=g && x<=g+32)
	   {
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }

	   if(j<=y+64 && y<j+64 && x+32>=i && x<=i+32)
	   {
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=2;
			t=60;
			
		}
			
		if(l<=y+64 && y<l+64 && x+32>=k && x<=k+32)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=2;
			t=60;
		}
			
		if(n<=y+64 && y<n+64 && x+32>=m && x<=m+32)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=2;
			t=60;
		}

     	if(p<=y+64 && y<p+64 && x+32>=o && x<=o+32)
		{
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
		}

		if(r<=y+64 && y<r+64 && x+32>=q && x<=q+32)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=2;
			t=60;
		}

        if(v<=y+64 && y<v+64 && x+32>=u && x<=u+32)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=2;
			t=60;
		}

        if(z<=y+64 && y<z+64 && x+32>=w && x<=w+32)
		{
			dx=x,dy=y+30,y=900;
			gy=500,ry=260,iy=160,zy=60;
			page=2;
			t=60;
		}








		//enimy plane's bullet touching main plane
	   if(ex+16>=x && ex+16<=x+32 && exx>=y && exx<=y+64)
	   {	
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }

       if(a+16>=x && a+16<=x+32 && aa>=y && aa<=y+64)
	   {	
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }

       if(c+16>=x && c+16<=x+32 && cc>=y && cc<=y+64)
	   {	
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }

       if(e+16>=x && e+16<=x+32 && ee>=y && ee<=y+64)
	   {	
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }

       if(g+16>=x && g+16<=x+32 && gg>=y && gg<=y+64)
	   {
		   dx=x,dy=y+30,y=900;
		   gy=500,ry=260,iy=160,zy=60;
		   page=2;
		   t=60;
	   }




}

void time()
{
   t--;
   if(t==0 && page==0)
   {
	   exit(0);
   }

   if(t==0 && page==1)
   {
       cy=500;

	   page=3;
   }

   if(t==0 && page==2)
   {
	   exit(0);
   }

   if(t==0 && page==4)
   {
	   exit(0);
   }
}
/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	printf("%d %d",mx,my);
	//place your codes here
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
		if(mx>=190 && mx<=350 && my>=484 && my<=524)
		{
			page=1;

			kill=0;

			cy=-500;

			t=60;

			x=248,y=0;
			
			fx=x+16,fy=y+64;

            ex=230,ey=800,a=190,b=800,c=150,d=800,e=270,f=800,g=310,h=800,i=66,j=1100,k=198,l=1200,m=330,n=1300;

            o=462,p=1400,q=600,r=600,u=800,v=500,w=600,z=700;

			exx=ey,aa=b,cc=d,ee=f,gg=h;

            point=0;

			gx=40,gy=900,rx=350,ry=900,ix=350,iy=900,dx=0,dy=900;

		}



		if(mx>=rx && mx<=rx+160 && my>=ry && my<=ry+40)
		{
			page=1;

			kill=0;

			cy=-500;

			t=60;

			x=248,y=0;
			
			fx=x+16,fy=y+64;

            ex=230,ey=800,a=190,b=800,c=150,d=800,e=270,f=800,g=310,h=800,i=66,j=1100,k=198,l=1200,m=330,n=1300;

            o=462,p=1400,q=600,r=600,u=800,v=500,w=600,z=700;

			exx=ey,aa=b,cc=d,ee=f,gg=h;

            point=0;

			gx=40,gy=900,rx=350,ry=900,ix=350,iy=900,dx=0,dy=900;
		}

		if(mx>=190 && mx<=350 && my>=198 && my<=238)
			exit(0);

		if(mx>=ix && mx<=ix+160 && my>=iy && my<=iy+40)
			exit(0);

		if(mx>=zx && mx<=zx+160 && my>=zy && my<=zy+40)
		{
			x=-248;
			page=0;

			t=60;
		}

		if(mx>=190 && mx<=350 && my>=384 && my<=424)
		{
			page=6;
			zy=760;
			t=-1;

		}

		if(mx>=190 && mx<=350 && my>=292 && my<=332)
		{
			page=7;
			zy=760;
			t=-1;
		}


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
	if(key == 'q')
	{
		//do something with 'q'
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
	//place your codes for other keys here
	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
  	if(key == GLUT_KEY_LEFT)
	{
	  if(x>0)
	  { x-=8;
	  fx-=8;}
		}

	
	if(key == GLUT_KEY_RIGHT)
	{
		if(x<528)
		{  x+=8;
		fx+=8;}
	}

	if(key == GLUT_KEY_UP)
	{
		if(y<736)
		{	y+=8;
		fy+=8;}
	}

	
	if(key == GLUT_KEY_DOWN)
	{
		if(y>0)
		{	y-=8;
		fy-=8;}
	}
}

int main()
{
	//place your own initialization codes here.
	
	iSetTimer(30,fire);
	
	iSetTimer(20,enimy);

	iSetTimer(40,boss);

	iSetTimer(1000,time);
	
	
	iInitialize(560, 800, "AIR FIGHTER");

	return 0;
}	
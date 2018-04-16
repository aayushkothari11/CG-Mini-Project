
  #include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>
  #include <math.h>
  #include<stdlib.h>
  int main() {
	/* request auto detection */
	int gdriver = DETECT, gmode, err;
	int radius = 10, x, y, midy,k,i,r,n=4,x1=getmaxx()/2,y1=50,k1=200,r1,x3,y3;
	float u,p1,p2;
	int px[4],py[4];
	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
	err = graphresult();

	if (err != grOk) {
		/* error occurred */
		printf("Graphics Error: %s\n",
				grapherrormsg(err));
		return 0;
	}

	x = 50;
	midy = getmaxy() / 2;
	y = midy + 100;

	k =200;
	while (x < getmaxx()/2 - 170) {
		/* clears graphic screen */
		cleardevice();
		/* goal post */
		line(getmaxx()/2-150,0,getmaxx()/2+150,0);
		line(getmaxx()/2-150,0,getmaxx()/2-150,150);
		line(getmaxx()/2+150,0,getmaxx()/2+150,150);
		/* ball initial */
		circle(getmaxx()/2-170+20, getmaxy()/2+90, radius);
		/* keeper - first position of stick man */
		circle(getmaxx()/2, 50, radius);
		line(getmaxx()/2, 50 + radius, getmaxx()/2, 50 + radius + 50);

		/* keeper - leg design */
		line(getmaxx()/2, 50 + radius + 50, getmaxx()/2 - 10, 150);
		line(getmaxx()/2, 50 + radius + 50, getmaxx()/2 + 10, 150);

		/* keeper - hand motion */
		line(getmaxx()/2, 50 + radius + 10, getmaxx()/2 - 15, 50 + radius + 30);
		line(getmaxx()/2, 50 + radius + 10, getmaxx()/2 + 15, 50 + radius + 30);


		/* Striker first position */

		/* image 1  - first position of stick man */
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x - 10, midy+k);
		line(x, y + radius + 50, x + 10, midy+k);

		/* hand motion */
		line(x, y + radius + 10, x - 15, y + radius + 30);
		line(x, y + radius + 10, x + 15, y + radius + 30);
		delay(25);
		x++;
		y--;
		k--;
	}
	randomize();
	r = rand() % 2;
	r1 = rand() % 2;
	if(r==0){
		px[0]= getmaxx()/2-150;
		px[1]= getmaxx()/2-75;
		px[2]= getmaxx()/2;
		px[3]= getmaxx()/2 + 120;
		py[0]= getmaxy()/2+90;
		py[1]= getmaxy()/2;
		py[2]= getmaxy()/2-50;
		py[3]= 90;
		x1 = getmaxx()/2;
		if(r1==0){
			for(u=0.0;u<=1.0;u+=0.01)
			{
		circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);
		x1++;
	       //	y--;
	       //	k1--
				for(i=0;i<n;i++)
				{       cleardevice();
					/* goal post */
					line(getmaxx()/2-150,0,getmaxx()/2+150,0);
					line(getmaxx()/2-150,0,getmaxx()/2-150,150);
					line(getmaxx()/2+150,0,getmaxx()/2+150,150);

					 circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);

					circle(x, y, radius);

					line(x, y + radius, x, y + radius + 50);

					/* leg design */
					line(x, y + radius + 50, x - 10, midy+k);
					line(x, y + radius + 50, x + 10, midy+k);

					/* hand motion */
					line(x, y + radius + 10, x - 15, y + radius + 30);
					line(x, y + radius + 10, x + 15, y + radius + 30);

					p1=pow(1-u,3)*px[0] + 3*u*pow(1-u,2)*px[1] + 3*pow(u,2)*(1-u)*px[2] + pow(u,3)*px[3];
					p2=pow(1-u,3)*py[0] + 3*u*pow(1-u,2)*py[1] + 3*pow(u,2)*(1-u)*py[2] + pow(u,3)*py[3];
					circle(p1,p2,radius);
					delay(10);
				}
			}
		}
		else{
			for(u=0.0;u<=1.0;u+=0.01)
			{
		circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);
		x1--;
	       //	y--;
	       //	k1--
				for(i=0;i<n;i++)
				{       cleardevice();
					/* goal post */
					line(getmaxx()/2-150,0,getmaxx()/2+150,0);
					line(getmaxx()/2-150,0,getmaxx()/2-150,150);
					line(getmaxx()/2+150,0,getmaxx()/2+150,150);

					 circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);

					circle(x, y, radius);

					line(x, y + radius, x, y + radius + 50);

					/* leg design */
					line(x, y + radius + 50, x - 10, midy+k);
					line(x, y + radius + 50, x + 10, midy+k);

					/* hand motion */
					line(x, y + radius + 10, x - 15, y + radius + 30);
					line(x, y + radius + 10, x + 15, y + radius + 30);

					p1=pow(1-u,3)*px[0] + 3*u*pow(1-u,2)*px[1] + 3*pow(u,2)*(1-u)*px[2] + pow(u,3)*px[3];
					p2=pow(1-u,3)*py[0] + 3*u*pow(1-u,2)*py[1] + 3*pow(u,2)*(1-u)*py[2] + pow(u,3)*py[3];
					circle(p1,p2,radius);
					delay(10);
				}
			}
		}

	}
	else if(r==1){
		px[0]= getmaxx()/2-150;
		px[1]= getmaxx()/2-75;
		px[2]= getmaxx()/2-50;
		px[3]= getmaxx()/2 -125;
		py[0]= getmaxy()/2+90;
		py[1]= getmaxy()/2;
		py[2]= getmaxy()/2-50;
		py[3]= 90;
		x1 = getmaxx()/2;
		if(r1==0){
			for(u=0.0;u<=1.0;u+=0.01)
			{
		circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);
		x1++;
	       //	y--;
	       //	k1--
				for(i=0;i<n;i++)
				{       cleardevice();
					/* goal post */
					line(getmaxx()/2-150,0,getmaxx()/2+150,0);
					line(getmaxx()/2-150,0,getmaxx()/2-150,150);
					line(getmaxx()/2+150,0,getmaxx()/2+150,150);

					 circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);

					circle(x, y, radius);

					line(x, y + radius, x, y + radius + 50);

					/* leg design */
					line(x, y + radius + 50, x - 10, midy+k);
					line(x, y + radius + 50, x + 10, midy+k);

					/* hand motion */
					line(x, y + radius + 10, x - 15, y + radius + 30);
					line(x, y + radius + 10, x + 15, y + radius + 30);

					p1=pow(1-u,3)*px[0] + 3*u*pow(1-u,2)*px[1] + 3*pow(u,2)*(1-u)*px[2] + pow(u,3)*px[3];
					p2=pow(1-u,3)*py[0] + 3*u*pow(1-u,2)*py[1] + 3*pow(u,2)*(1-u)*py[2] + pow(u,3)*py[3];
					circle(p1,p2,radius);
					delay(10);
				}
			}
		}
		else{
			for(u=0.0;u<=1.0;u+=0.01)
			{
		circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);
		x1--;
	       //	y--;
	       //	k1--
				for(i=0;i<n;i++)
				{       cleardevice();
					/* goal post */
					line(getmaxx()/2-150,0,getmaxx()/2+150,0);
					line(getmaxx()/2-150,0,getmaxx()/2-150,150);
					line(getmaxx()/2+150,0,getmaxx()/2+150,150);

					 circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);

					circle(x, y, radius);

					line(x, y + radius, x, y + radius + 50);

					/* leg design */
					line(x, y + radius + 50, x - 10, midy+k);
					line(x, y + radius + 50, x + 10, midy+k);

					/* hand motion */
					line(x, y + radius + 10, x - 15, y + radius + 30);
					line(x, y + radius + 10, x + 15, y + radius + 30);

					p1=pow(1-u,3)*px[0] + 3*u*pow(1-u,2)*px[1] + 3*pow(u,2)*(1-u)*px[2] + pow(u,3)*px[3];
					p2=pow(1-u,3)*py[0] + 3*u*pow(1-u,2)*py[1] + 3*pow(u,2)*(1-u)*py[2] + pow(u,3)*py[3];
					circle(p1,p2,radius);
					delay(10);
				}
			}
		}
	}
	if(r==0 && r==r1){
	x3=getmaxx()/2 + 120 ;
	y3 =90;
		while(x3<getmaxx()/2+200){
			cleardevice();
			line(getmaxx()/2-150,0,getmaxx()/2+150,0);
			line(getmaxx()/2-150,0,getmaxx()/2-150,150);
			line(getmaxx()/2+150,0,getmaxx()/2+150,150);


			circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);


			circle(x, y, radius);
			line(x, y + radius, x, y + radius + 50);
			/* leg design */
			line(x, y + radius + 50, x - 10, midy+k);
			line(x, y + radius + 50, x + 10, midy+k);

			/* hand motion */
			line(x, y + radius + 10, x - 15, y + radius + 30);
			line(x, y + radius + 10, x + 15, y + radius + 30);

			circle(x3,y3,10);
			x3++;
			y3++;
			delay(10);
		}
	}
	else if(r==1 && r==r1){
		x3=getmaxx()/2 - 125 ;
		y3 =90;
		while(x3>getmaxx()/2-200){
			cleardevice();
			line(getmaxx()/2-150,0,getmaxx()/2+150,0);
			line(getmaxx()/2-150,0,getmaxx()/2-150,150);
			line(getmaxx()/2+150,0,getmaxx()/2+150,150);


			circle(x1, y1, radius);
		line(x1, y1 + radius, x1, y1 + radius + 50);

		/* leg design */
		line(x1, y1 + radius + 50, x1 - 10, 150);
		line(x1, y1 + radius + 50, x1 + 10, 150);

		/* hand motion */
		line(x1, y1 + radius + 10, x1 - 15, y1 + radius + 30);
		line(x1, y1 + radius + 10, x1 + 15, y1 + radius + 30);


			circle(x, y, radius);
			line(x, y + radius, x, y + radius + 50);
			/* leg design */
			line(x, y + radius + 50, x - 10, midy+k);
			line(x, y + radius + 50, x + 10, midy+k);

			/* hand motion */
			line(x, y + radius + 10, x - 15, y + radius + 30);
			line(x, y + radius + 10, x + 15, y + radius + 30);
			circle(x3,y3,10);
			x3--;
			y3++;
			delay(10);
		}
	}
	getch();

	/* deallocate memory allocated for graphic screen */
	closegraph();

	return 0;
  }

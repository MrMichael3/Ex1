//Michael Küchler, 16-924-318

#include <stdio.h>
void drawSierpinskiCarpet(double x,double y,double l,int iter){
	if(iter==0){
		return;
	}
	double carpet[8][2];
	double lnew = l/3;
	int counter;
	//first row
	for(counter = 0;counter<3;counter++){
		carpet[counter][0] = x+counter*lnew; //x coordinates
		carpet[counter][1] = y+2*lnew; //y coordinates
	}
	//second row
	for(counter=3;counter<5;counter++){
		carpet[counter][0] = x+(counter-3)*2*lnew; //x coordinates
		carpet[counter][1] = y+lnew; //y coordinates
	}
	//third row
	for(counter=5;counter<8;counter++){
		carpet[counter][0] = x+(counter-5)*lnew; //x coordinates
		carpet[counter][1] = y; //y coordinates
	}
	//print carpet
	for(counter=0;counter<8;counter++){
		printf("(%.2f,%.2f),%.2f \n",carpet[counter][0],carpet[counter][1],lnew);
	}
	//recursive
	for(counter=0;counter<8;counter++){
		drawSierpinskiCarpet(carpet[counter][0],carpet[counter][1],lnew,iter-1);
	}
}

int main(){
	drawSierpinskiCarpet(-1.0, -1.0, 2.0, 2);
	return 0;
}

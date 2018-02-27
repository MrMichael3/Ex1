//Michael Küchler, 16-924-318
#include <stdio.h>

int compare(char a, char b){
	// both uppercase or both lowercase
	if(a<97 && b < 97 || a>96 && b>96){ 
		else if(a>b){return 1;}
		else{return 0;}
	}
	//a uppercase, b lowercase
	else if(a<97 && b>96){ 
		a -= 32;
		if(a == b){return -1;}//same char, right order
		else if(a<b){return -1;}//right order
		else{return 1;}//wrong order
	}
	//a lowercase, b uppercase
	else{ 
		b -= 32;
		if(a==b){return 1;}//same char, wrong order
		else if(a<b){return -1}//right order
		else{return 1;} //wrong order
	}
}
void bubblesort(char a[],int n){
	
}
int main(){

	
	return 0;
}

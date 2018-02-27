//Michael Küchler, 16-924-318
#include <stdio.h>

int compare(char a, char b){
	// both uppercase or both lowercase
	if((a<97 && b < 97) || (a>96 && b>96)){ 
		printf("ab,AB\n");
		if(a>b){return -1;} //right order
		else if(a<b){return 1;} //wrong order
		else{return 0;} //same char
	}
	//a uppercase, b lowercase
	else if(a<97 && b>96){ 
		printf("Ab\n");
		a -= 32;
		if(a == b){return -1;}//same char, right order
		else if(a<b){return -1;}//right order
		else{return 1;}//wrong order
	}
	//a lowercase, b uppercase
	else{
		printf("aB\n"); 
		b -= 32;
		if(a==b){return 1;}//same char, wrong order
		else if(a<b){return -1;}//right order
		else{return 1;} //wrong order
	}
}
void bubblesort(char a[],int n){
	
}
int main(){
	char a = 'z';
	char b = 'z';
	int check = compare(a,b);
	printf("%c,%c : check: %d",a,b,check);

	
	return 0;
}

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
	int x = 0;
	char temp;
	int counter = 0;
	while(counter <= n){
		while (x < n){
			int change = compare(a[x],a[x+1]);
			//change two elements
			if (change == 1){
				temp = a[x];
				a[x] = a[x+1];
				a[x+1] = temp;
			}
			x++;
		}
		counter++;
}
}
int main(){
	char A[100];
	char sorted[100];
	int i;
	printf("Type a string: ");
	while(scanf("%i",&A[i])){
		i++;
	}
	bubblesort(A,i);
	printf("Sorted string: %c",A);
	return 0;
}

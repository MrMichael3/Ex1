//Michael Küchler, 16-924-318
#include <stdio.h>
#include <string.h>

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
	char temp;
	int i;
	int j;
	
	for(i = n-1;i > 0;i--){
		printf("äussere schlaufe\n");
		for(j = 0;j < i;j++){
			//change two elements
			if (compare(a[j],a[j+1] == 1)){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
}
}
int main(){
	char A[100];
	char sorted[100];
	int i;
	printf("Type a string: ");
	scanf("%s",A);
	i = strlen(A);
	printf("%s,%d \n",A,i); //delete this
	bubblesort(A,i);
	printf("Sorted string: %s",A);
	return 0;
}

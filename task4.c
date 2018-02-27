//Michael Küchler, 16-924-318
#include <stdio.h>
#include <string.h>

int compare(char a, char b){
	//a = b
	if(a==b){
		return 0;
	}
	// AB or ab
	if((a<b && b < 97 )||( a<b && a>96)){ 
		return -1;
	}
	//Ab
	else if(a<97 && b>96 && a+32<=b){ 
		return -1;
	}
	//aB
	else if(a>96 && b<91 && a<b+32){ 
		return -1;
	}
	return 1;
}
void bubblesort(char a[],int n){
	char temp;
	int i;
	int j;
	
	for(i = n-1;i > 0;i--){
		for(j = 0;j < i;j++){
			//change two elements
			if (compare(a[j],a[j+1]) == 1){
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
	bubblesort(A,i);
	printf("Sorted string: %s",A);
	return 0;
}

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
int isAnagram(char a[],char b[]){
	int x;
	bubblesort(a,strlen(a));
	bubblesort(b,strlen(b));
	for(x=0;x<strlen(a);x++){
		if(a[x]!=b[x]){
			return 0;
		}
	}
	return 1;
}
int main(){
	// a)
	char A[100];
	int i;
	printf("Type a string: ");
	scanf("%s",A);
	i = strlen(A);
	bubblesort(A,i);
	printf("Sorted string: %s\n",A);
	
	//b)
	char first[100];
	char second[100];
	printf("Enter the first string: \n");
	scanf("%s",first);
	printf("Enter the second string: \n");
	scanf("%s",second);
	if(isAnagram(first,second)){
		printf("Is Anagram: True");
	}
	else{
		printf("Is Anagram: False");
	}
	return 0;
}

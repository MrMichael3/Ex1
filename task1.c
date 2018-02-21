//Michael Küchler, 16-924-318
int isSubstring(char str1[], char str2[]){
	if (strstr(str2,str1)){
		return 1;		
	}
	return 0;
}

int main(){
	char firstString[23];
	char secondString[23];
	printf("Enter the first string: ");
	scanf("%s",firstString);
	printf("Enter the second string: ");
	scanf("%s",secondString);
	int substring = isSubstring(firstString, secondString);
	if(substring){
		printf("Is Substring: True");
	}
	else{
		printf("Is Substring: False");
	}
	
	return 0;
}

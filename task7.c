//Michael Küchler, 16-924-318
#include <stdio.h>

void sequence(int n){
	printf("%d ",n);
	if(n!=1){
		//even
		if(n%2==0){
			sequence(n/2);
		}
		//odd
		else{
			sequence(3*n+1);
		}
	}
}
int main(){
	int firstNumber;
	printf("Enter the first sequence number: ");
	scanf("%d",&firstNumber);
	sequence(firstNumber);
	return 0;
}

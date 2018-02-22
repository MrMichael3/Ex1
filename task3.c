//Michael Küchler, 16-924-318
#include <stdio.h>
int isPrime(int a){
	int x;
	int y = 1;
	if(a == 0 || a == 1){
		return 0;
	}
	for(x=2;y != 0 && x < a ;x++){
		/*if (a%x == 0){
			return 0;
		}
	return 1;*/
		y= a%x;
	}
	
	return y;
}
int main(){
	int A[100];
	int allPrime[100];
	int i;
	int x;
	int primeCounter = 0;
	while(scanf("%i",&A[i])){
		i++;
	}
	int prime;
	for (x=0;x<i;x++){
		prime = isPrime(A[x]);
		if (prime){
			allPrime[primeCounter] = A[x];
			primeCounter++;
		}
	}
	printf("Prime numbers: ");
	for(x=0;x<primeCounter;x++){
		printf("%d ",allPrime[x]);
	}	
	return 0;
}

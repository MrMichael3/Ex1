//Michael Küchler, 16-924-318

int main(){
	int A[100];
	int i = 0;
	while (scanf("%i",&A[i])==1){
		i++;
	}
	int evenSum = 0;
	int oddSum;
	int x;
	for (x = 0;x < i;x++){
		if (A[x] % 2 == 0){
			evenSum += A[x];
		}
		else{
			oddSum += A[x];
		}
	}
	if (evenSum > oddSum){
		printf("Largest sum: even\n");
	}
	else if(evenSum < oddSum){
		printf("Largest sum: odd\n");
	}
	else{
		printf("Largest sum: same sum\n");
	}
	printf("even: %d, odd: %d",evenSum,oddSum);
	return 0;
}

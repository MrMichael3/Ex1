//Michael Küchler, 16-924-318

int main(){
	int A[100];
	int i = 0;
	while (scanf("%i",&A[i])==1){
		i++;
	}
	int evenSum;
	int oddSum;
	for (x = 0;x < i;x++){
		if (A[x] % 2 == 0){
			evenSum += A[x];
		}
		else{
			oddSum += A[x];
		}
	}
	
	return 0;
}

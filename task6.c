//Michael K�chler, 16-924-318

int power(int base, int exponent){
	if (exponent == 1){
		return base;
	}
	return base * power(base, exponent-1);
}
int main(){
	int base;
	int exponent;
	int result;
	printf("Enter the base: ");
	scanf("%d",&base);
	printf("Enter the exponent: ");
	scanf("%d",&exponent);
	result = power(base,exponent);
	printf("Result: %d",result);
	return 0;
}

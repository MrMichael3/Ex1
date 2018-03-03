//Michael Küchler, 16-924-318
#include <stdio.h>
void efficientSort(int A[],int n){
	int x;
	int temp;
	int first = 0;
	if(n>1){
	for (x = 0;x!=n/2;x++){
		int last = n-x-1;
		for(first=x;first<n;first++){
			//swap first two elements
			if(A[first]>A[first+1]){
				temp = A[first];
				A[first] = A[first+1];
				A[first+1] = temp;
			}
			//swap last two elements
			if(A[last]<A[last-1]){
				temp = A[last];
				A[last] = A[last-1];
				A[last-1] = temp;
			}
			last--;
		}
	}
	}
	printf("test");
}
int main(){
	int length = 0;
	int counter;
	int A[100];
	printf("Enter the first string: \n");
	while(scanf("%d",A+length)==1){
		length++;
	}
	efficientSort(A,length);
	printf("Sorted Array: ");
	//printf("%d", A[0]);
	for(counter = 0;counter<length;counter++){
		printf("%d ",*A+counter);
	}
	
	
	
	return 0;
}

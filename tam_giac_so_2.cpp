#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		if(i % 2 == 0){
		for(int j=1; j<=2*i+1; j+=2){
			printf("%d", j);
			}
		}
		else{
		for(int j=2; j<=2*i+2; j+=2){
			printf("%d", j);
			}
		}
	printf("\n");
	}
	return 0;
}
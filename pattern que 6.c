#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=4;i++){
		for(j=0;j<=i;j++){
			printf("%d",j+1);
		}
		for(j=1;j<5-i;j++){
			printf("  ");
		}
		for(k=0;k<=i;k++){
			printf("%d",i-k+1);
		}
		printf("\n");
	}
}

//1        1
//12      21
//123    321
//1234  4321
//1234554321

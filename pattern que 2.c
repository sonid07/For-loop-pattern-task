#include<stdio.h>
int main(){
	int i,j,n=11;
	for(i=0;i<=4;i++){
		for(j=0;j<=i;j++){
			printf("%d ",n++);
		}
		printf("\n");
	}
}

//11
//12 13
//14 15 16
//17 18 19 20
//21 22 23 24 25


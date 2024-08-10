#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=5;i++){
		for(j=1;j<=5-i;j++){
			printf(" ");
		}
		for(j=5-i+1;j<=5;j++){
			printf("%d",j);
		}
		for(j=1;j<i;j++){
			printf("%d",5-j);
		}
		printf("\n");
		}
}


//    5
//   454
//  34543
// 2345432
//123454321

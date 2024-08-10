#include<stdio.h>
	int main(){
	int i,j,k;
	for(i=0;i<=5;i++){
		for(j=0;j<=i;j++){
			printf(" ");
		}
		for(k=0;k<=5-i;k++){
			if(k%2==1){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
		}
}

// 101010
//  10101
//   1010
//    101
//     10
//      1


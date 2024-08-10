#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%d",k+j);
		}
		printf("\n");
		}
}


//     5
//    45
//   345
//  2345
// 12345

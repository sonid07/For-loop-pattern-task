#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=7;i++){
		for(j=1;j<=5;j++){
		if(j==1||(i==1&&j<5)||(i==4&&j<5)||(j==5&&i>1&&i<4)){
			printf("* ");
		}
		else{
			printf("  ");
		}
		
		}
		printf("\n");
	}	
}



//* * * *
//*       *
//*       *
//* * * *
//*
//*
//*

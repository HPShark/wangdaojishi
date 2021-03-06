#include <stdio.h>

main(){
	int h,dibian,i,j;
	scanf("%d",&h);
//	h = 4; 
	dibian = h+(h-1);
	for(i = 1; i <=h; i++){
		for(j = 0; j < dibian-h-i+1; j++) printf("  ");
		for(j = 0; j <h+(i-1)*2; j++) printf("*");
		printf("\n");
				
	} 
	
} 

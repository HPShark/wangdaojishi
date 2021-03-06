#include <stdio.h>
 
 main(){
 	int n,i,j,flag,ifflag;
	char zhong,bian,x,y;
 	scanf("%d %c %c",&n,&zhong,&bian);
 	if((n-1)%2==0){
 		x=zhong;
 		y=bian;
	 } 
 	else{
 		x=bian;
 		y=zhong;
	 }
	printf(" ");
	for(i=0;i<n-2;i++) printf("%c",y);  
	printf("\n");
 	for(i=0;i<(n-1)/2;i++){
 		ifflag=0;
		int z=i;
		while(z>=0){
			printf("%c",y);
			flag=0;
			z--;
			if(z>=0){
				z--;
				printf("%c",x);
				flag = 1;
				ifflag = 1;
			}	
		}
		for(j=0;j<n-2*(i+1);j++){
			if(ifflag==1&&flag==1) printf("%c",y);
			else printf("%c",x);
		}
		while(z<i){
			if(flag==1&&z<i){
				printf("%c",x);
				z++;
				flag = 0;
			}
			printf("%c",y);
			z++;
			if(ifflag==1&&z<i){
				printf("%c",x);
				z++;
			}

		}
		printf("\n");
	}

 	for(i=(n-1)/2-2;i>=0;i--){
 		ifflag=0;
		int z=i;
		while(z>=0){
			printf("%c",y);
			flag=0;
			z--;
			if(z>=0){
				z--;
				printf("%c",x);
				flag = 1;
				ifflag = 1;
			}	
		}
		for(j=0;j<n-2*(i+1);j++){
			if(ifflag==1&&flag==1) printf("%c",y);
			else printf("%c",x);
		}
		while(z<i){
			if(flag==1&&z<i){
				printf("%c",x);
				z++;
				flag = 0;
			}
			printf("%c",y);
			z++;
			if(ifflag==1&&z<i){
				printf("%c",x);
				z++;
			}

		}
		printf("\n");
	}

	printf(" ");
 	for(i=0;i<n-2;i++) printf("%c",y); 
 	printf("\n");
 }


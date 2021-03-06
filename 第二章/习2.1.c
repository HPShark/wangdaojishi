#include <stdio.h>

//t.cn/E9lOOZQ

int fanxushu(int x){
	while(x!=0){
		if(x%10==7) return 1;
		x/=10;
	}
	return -1;
}

int ifrel2seven(int x){
//	printf("%d",fanxushu(x)); 
	if((x%7==0)||(fanxushu(x)==1)) return 1;
	else return -1;
}

main(){
	int b=0;
	scanf("%d",&b);
	
	int x,sum=0;
	for(x=0;x<=b;x++){
//		printf("%d",ifrel2seven(x));
		if(ifrel2seven(x)==-1){
			sum+=x*x;
		}
	}
	printf("%d\n",sum);
}

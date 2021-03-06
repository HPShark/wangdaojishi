//t.cn/E937wDs

#include<stdio.h>
main(){
	int n;
	int times;
	while(scanf("%d",&n)!=EOF){
		if(n==0)	break;
		times = 0;
		while(n!=1){
			if(n%2==0)	n=n/2;
			else	n=(3*n+1)/2;
			times++;

		}
		printf("%d\n",times);
		
	}
}

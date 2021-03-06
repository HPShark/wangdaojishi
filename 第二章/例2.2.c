#include <stdio.h>
//t.cn/E9WBrut

main(){
	int a,b,c,d;
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					if(((a*1000+b*100+c*10+d)*9==d*1000+c*100+b*10+a)&&((a*1000+b*100+c+d)/1000>=1))	printf("%d ",a*1000+b*100+c*10+d); 
				} 
			} 
		}
	}
} 

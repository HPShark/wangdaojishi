#include <stdio.h>
//t.cn/E9ldhru

main(){
	int money=0;
	scanf("%d",&money);
	int x, y, z;
	for(x=0;x<=100;x++){
		for(y=0;y<=100-x;y++){
			for(z=0;z<=100-x-y;z++){
				if(((x*5*3+y*3*3+z)<=(3*money))&&((x+y+z)==100)) printf("x=%d,y=%d,z=%d\n",x,y,z);
			}
		}
	}
}  

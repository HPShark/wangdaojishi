#include <stdio.h>
//#include <stlib.h>
//t.cn/E9jqijR

main(){
	int n, x, y, z, danjia, zuo, you, flag=0;
	scanf("%d\n",&n);
	scanf("%d %d %d",&x, &y, &z);
	for(zuo=9;zuo>=1;zuo--){
		if(flag==1) break;
		for(you=9;you>=0;you--){
			danjia = (zuo*10000+x*1000+y*100+z*10+you)/n;
			if((zuo*10000+x*1000+y*100+z*10+you)%n==0){
				printf("%d %d %d\n",zuo,you,danjia);
				flag++;
				break; 
			}
			
			
		}
	}
	if(flag==0) printf("0\n");
}
 

#include <stdio.h>
//t.cn/E9lUYRn

int fanxuduicheng(int x){
	int a = 0, b[255], i = 0, y;
	while(x!=0){
		a=a*10;
		a=a+x%10;
		b[i]=x%10;
		x/=10;
		i++;
	}
	for(y=0;y<=i/2;y++){
		//这里要考虑a=0的情况，单独处理 
		if((b[y]!=b[i-y-1])&&a!=0) return -1;
	}  
	return a;
}

main(){
	int a,x;
	for(a=0;a<257;a++){
		x = fanxuduicheng(a*a);
		if(x!=-1) printf("%d\n",a);

	} 
	
}

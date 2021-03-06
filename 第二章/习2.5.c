// t.cn/E9jizni

#include <stdio.h>
#include <string.h>

main(){
	char a[100];
	while(scanf("%s",&a)!=EOF){
		int len;
		int i,j,k;
		len = strlen(a);
		i=0,j=len-1;
		//计算底部长度 
		int n1,n2,n3;
		n1=(len+2)/3;
		n3=n1;
		n2=len-n1-n3;
		//输出
		//除最后一行外
		for(i=0;i<n1-1;i++){
			printf("%c",a[i]);
			for(j=0;j<n2;j++) printf(" ");
			k = len-i-1;
			printf("%c\n",a[k]); 
		}
		//最后一行
		printf("%c",a[i]);
		k = len-i-1;
		for(j=i+1;j<k;j++) printf("%c",a[j]);
		printf("%c\n",a[k]); 

	}
} 

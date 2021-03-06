//t.cn/E9ulcIc

#include<stdio.h>
#include<string.h>
main(){
	int freq[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	char str[100];
	while(scanf("%s",str)!=EOF){
		int len = strlen(str),i,j,times=0;
		for(i=0;i<len;i++){
			j=str[i]-'a';
			if(i>0&&(str[i]-str[i-1]==freq[str[i]-'a']-freq[str[i-1]-'a']))	times+=2;
			times+=freq[j];
			
		}
		printf("%d",times);
	}
	

}

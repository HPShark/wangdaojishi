//t.cn/E9ufYo5
#include<stdio.h>

main(){
	int tree[100001],alivetree;
	int L;
	int s1,s2;
	int times;
	int i;
	scanf("%d%d",&L,&times);
	//ÖÖÊ÷ 
	for(i=0;i<=L;i++) tree[i]=1;
	//¿³Ê÷
	while(times--){
		scanf("%d%d",&s1,&s2);
		for(i=s1;i<=s2;i++){
			tree[i]=0;		
		} 	
	}
	alivetree=0;
	for(i=0;i<=L;i++) {
		if(tree[i]==1)	alivetree++;	
	}
	printf("%d",alivetree);
} 

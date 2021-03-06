//t.cn/E9YP2a8

# include<stdio.h> 
main(){
	int year,days,runnianflag = 0;
	int nian[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	while(scanf("%d%d",&year,&days)!=EOF){
		//ÅÐ¶ÏÊÇ·ñÈòÄê
		if((year%4==0&&year%100!=0)||(year%400==0))	runnianflag = 1;
		else	runnianflag = 0;
		//¼ÆËã
		int i = 0;
		while(days>nian[runnianflag][i]){
			days= days - nian[runnianflag][i];
			i++;
		}
		printf("%d-%02d-%02d",year,i+1,days);
	}
}

//t.cn/E9Yw0Cr
#include<stdio.h>

main(){
	int hangshu;
	int year,month,day,days,runflag;
	int nian[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	scanf("%d",&hangshu);
	while(hangshu--){
		scanf("%d%d%d%d",&year,&month,&day,&days);
		//判断闰年
		if((year%4==0&&year%100!=0)||(year%400==0)) runflag = 1;
		else runflag = 0;
		//计算
		
		while(days>nian[runflag][month]){
			while(month<=12&&days>nian[runflag][month]){
				days-=nian[runflag][month];
				month++;
			}
			if(month>12){
				year++;
				//判断闰年
				if((year%4==0&&year%100!=0)||(year%400==0)) runflag = 1;
				else runflag = 0;
				month = 1;
			}
			
		}
		//处理day+days跨月 
		int daysum =  day+days;
		while(daysum>nian[runflag][month]){
			while(month<=12&&daysum>nian[runflag][month]){
				daysum-=nian[runflag][month];
				month++;
			}
			if(month>12){
				year++;
				//判断闰年
				if((year%4==0&&year%100!=0)||(year%400==0)) runflag = 1;
				else runflag = 0;
				month = 1;
			}
		}
		printf("%d-%02d-%02d",year,month,daysum);
	}
}

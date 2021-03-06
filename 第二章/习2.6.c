//t.cn/E9Yz0LE

#include<stdio.h>
main(){
	int year1,year2,month1,month2,day1,day2,days=0,runflag;
	int nian[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	scanf("%4d%2d%2d",&year1,&month1,&day1);
	scanf("%4d%2d%2d",&year2,&month2,&day2);
	//≈–∂œ1 «∑Ò»ÚƒÍ
	if((year1%4==0&&year1%100!=0)||(year1%400==0))	runflag = 1;
	else runflag = 0; 
	while(year1!=year2||month1!=month2){
		while(month1<=12&&(year1!=year2||month1!=month2)){
			days += nian[runflag][month1];
			month1++;
		}
		if(month1>12){
			year1++;
			//≈–∂œ1 «∑Ò»ÚƒÍ
			if((year1%4==0&&year1%100!=0)||(year1%400==0))	runflag = 1;
			else runflag = 0; 	
			month1 = 1; 
		}
	}
	int chazhi = day2-day1;
	days += chazhi;
	printf("%d",days+1);

}

//t.cn/E9RJUp4

#include<stdio.h>
main(){
	int hangshu;
	int year,month,day;
	int nian[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&hangshu);
	while(hangshu--){
		scanf("%d%d%d",&year,&month,&day);
		day++;
		if(day>nian[month]){
			day=1;
			month++;
		}
		if(month>12){
			month=1;
			year++;
		}
		printf("%d-%02d-%02d\n",year,month,day);

	}
}


//t.cn/E9jXK5A

#include <stdio.h>

main(){
	int runnian[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int year,month,day,days=0;
	while(scanf("%d%d%d",&year,&month,&day)!=EOF){
		//�ж�2���м���
		int runnianflag,i;
		if((year%4==0&&year%100!=0)||(year%400==0))	runnianflag = 1;
		else	runnianflag = 0;
		//���������� 
		for(i=0;i<month-1;i++){
			days+=runnian[runnianflag][i];
		}
		//��ǰ�µ�����
		days = days + day;
		printf("%d",days); 
		
	}
	
	 
} 

#include<stdio.h>
//方法---------------------------------------------- 
int sum(int D,int M,int Y){
	int day1;
	switch(M){
		case 1:day1=D;
	break;
		case 2:day1=31+D;
	break;
		case 3:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+D;
		}
		else{
		day1=31+28+D;
		}
    break;
    	case 4:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+D;
		}
		else{
		day1=31+28+31+D;
		}
    break;
 		case 5:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+30+D;
		}
		else{
		day1=31+28+31+30+D;
		}
    break;
	    case 6:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+30+31+D;
		}
		else{
		day1=31+28+31+30+31+D;
		}
    break;
	    case 7:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+30+31+30+D;
		}
		else{
		day1=31+28+31+30+31+30+D;
		}
    break;
	    case 8:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+30+31+30+31+D;
		}
		else{
		day1=31+28+31+30+31+30+31+D;
		}
    break;
	    case 9:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+30+31+30+31+31+D;
		}
		else{
		day1=31+28+31+30+31+30+31+31+D;
		}
    break;
	    case 10:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+30+31+30+31+31+30+D;
		}
		else{
		day1=31+28+31+30+31+30+31+31+30+D;
		}
    break;
	    case 11:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+30+31+30+31+31+30+31+D;
		}
		else{
		day1=31+28+31+30+31+30+31+31+30+31+D;
		}
    break;
	    case 12:
		if((Y%4==0&&Y%100!=0)||(Y%400==0)){	
		day1=31+29+31+30+31+30+31+31+30+31+30+D;
		}
		else{
		day1=31+28+31+30+31+30+31+31+30+31+30+D;
		}
    break;
}
	return day1; 
}

//------------------------------------------------------------------ 
int main(){
	int bornY,bornM,bornD;//出生年月 
	int nowY,nowM,nowD;//查询年月 
	int num=0,num1,num2,i; 
//	-------------------------------------
	printf("请输入您的出生年月（8位）");
	scanf("%d",&num1);
	printf("\n请输入要查询的日期（8位）");
	scanf("%d",&num2);
//	-------------------------------------
	bornY=num1/10000;
	bornM=num1%10000/100;
	bornD=num1%100;
//	-------------------------------------
	nowY=num2/10000;
	nowM=num2%10000/100;
	nowD=num2%100;
//	-------------------------------------
    for(i=bornY;i>=bornY&&i<=nowY;i++){
    	if((i%4==0&&i%100!=0)||(i%400==0)){
    		num++;
		}
	}
	printf("闰年数为：%d\n",num);
	int day1=sum(bornD,bornM,bornY);
	int day2=sum(nowD,nowM,nowY);
	printf("%d\t %d\n",day1,day2);
	int day=(nowY-bornY)*365+num-day1+day2;//（测定年-出生年）×365+闰年数-（1月1日至生日天数）+（1月1日至测定天数）
	printf("%d\n",day); 
	int physical=day%23;
	int mood=day%28;
	int intelligence=day%33;
//	------------------------------------------判断
//  ------------体力 
    if(physical==0){
    	printf("体力刚好是周期日\n"); 
	} 
	else if(physical<12){
		printf("体力处在高潮期第%d天\n",physical);
	}
	else if(physical==12){
		printf("体力刚好处在临界日\n"); 
	}
	else if(physical>12){
		printf("体力处在低潮期第%d天\n",physical);
	}
//	------------情绪 
    if(mood==0){
    	printf("情绪刚好是周期日\n"); 
	} 
	else if(mood<14){
		printf("情绪处在高潮期第%d天\n",mood);
	}
	else if(mood==14){
		printf("情绪刚好处在临界日\n"); 
	}
	else if(mood>14){
		printf("情绪处在低潮期第%d天\n",mood);
	}	
//  ------------智力
    if(intelligence==0){
    	printf("智力刚好是周期日\n"); 
	} 
	else if(intelligence<17){
		printf("智力处在高潮期第%d天\n",intelligence);
	}
	else if(intelligence==17){
		printf("智力刚好处在临界日\n"); 
	}
	else if(intelligence>17){
		printf("智力处在低潮期第%d天\n",intelligence);
	} 
	
	printf("年=%d\t 月=%d\t 日=%d\n",bornY,bornM,bornD);
	printf("年=%d\t 月=%d\t 日=%d",nowY,nowM,nowD);
	return 0;
}







































#include<stdio.h>
//����---------------------------------------------- 
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
	int bornY,bornM,bornD;//�������� 
	int nowY,nowM,nowD;//��ѯ���� 
	int num=0,num1,num2,i; 
//	-------------------------------------
	printf("���������ĳ������£�8λ��");
	scanf("%d",&num1);
	printf("\n������Ҫ��ѯ�����ڣ�8λ��");
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
	printf("������Ϊ��%d\n",num);
	int day1=sum(bornD,bornM,bornY);
	int day2=sum(nowD,nowM,nowY);
	printf("%d\t %d\n",day1,day2);
	int day=(nowY-bornY)*365+num-day1+day2;//���ⶨ��-�����꣩��365+������-��1��1��������������+��1��1�����ⶨ������
	printf("%d\n",day); 
	int physical=day%23;
	int mood=day%28;
	int intelligence=day%33;
//	------------------------------------------�ж�
//  ------------���� 
    if(physical==0){
    	printf("�����պ���������\n"); 
	} 
	else if(physical<12){
		printf("�������ڸ߳��ڵ�%d��\n",physical);
	}
	else if(physical==12){
		printf("�����պô����ٽ���\n"); 
	}
	else if(physical>12){
		printf("�������ڵͳ��ڵ�%d��\n",physical);
	}
//	------------���� 
    if(mood==0){
    	printf("�����պ���������\n"); 
	} 
	else if(mood<14){
		printf("�������ڸ߳��ڵ�%d��\n",mood);
	}
	else if(mood==14){
		printf("�����պô����ٽ���\n"); 
	}
	else if(mood>14){
		printf("�������ڵͳ��ڵ�%d��\n",mood);
	}	
//  ------------����
    if(intelligence==0){
    	printf("�����պ���������\n"); 
	} 
	else if(intelligence<17){
		printf("�������ڸ߳��ڵ�%d��\n",intelligence);
	}
	else if(intelligence==17){
		printf("�����պô����ٽ���\n"); 
	}
	else if(intelligence>17){
		printf("�������ڵͳ��ڵ�%d��\n",intelligence);
	} 
	
	printf("��=%d\t ��=%d\t ��=%d\n",bornY,bornM,bornD);
	printf("��=%d\t ��=%d\t ��=%d",nowY,nowM,nowD);
	return 0;
}







































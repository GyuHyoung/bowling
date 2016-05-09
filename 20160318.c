/****************************
** 볼링 점수 계산 프로그램      **
** 작성자 : 임규형            **
** 날짜 : 2016.05.09       **
****************************/

#include <stdio.h>
int main(void)
{
    int pin1,pin2,pin3,n,sum,strike,spare;
    n=1; sum=0; strike=0, spare=0;

    while(n<10)
    {
	printf("%d번째 프레임 1번째 처리 핀 수 : ",n);
	scanf("%d",&pin1);
	if(pin1 ==10)			//strike일 경우
	{
	    if(strike ==1)			//이전에도  strike
	    {
		sum +=pin1*2;
		printf("****현재까지 점수 : %d\n",sum);
		n++; strike++;
	    }
	    else if(strike >=2)			//strike 두번 이상
	    {
		sum +=pin1*3;
		printf("****현재까지 점수 : %d\n",sum);
		n++; strike++;
	    }
	    else if(spare ==1)			//이전에 spare
	    {
		sum +=pin1*2;
		printf("****현재까지 점수 : %d\n",sum);
		n++; spare=0; strike++;
	    }
	    else				//이전에 아무것도 아님
	    {
		sum +=pin1;
		printf("****현재까지 점수 : %d\n",sum);
		n++; strike++;
	    }
	}


	else			//strike 아닐 경우 첫번째 프레임
	{
	    if(strike ==1)			//이전에 strike
	    {	    
		sum += pin1*2;
		printf("****현재까지 점수 : %d\n",sum);
	    }
	    else if(strike >=2)		//strike 두번 이상
	    {
		sum +=pin1*3;
		printf("****현재까지 점수 : %d\n",sum);

	    }
	    else if(spare ==1)		//이전에 spare		
	    {
		sum +=pin1*2;
		printf("****현재까지 점수 : %d\n",sum);
		spare =0;
	    }
	    else				//이전에 아무것도 아님
	    {
		sum +=pin1;
		printf("****현재까지 점수 : %d\n",sum);
	    }


	    printf("%d번째 프레임 2번째 처리 핀 수 :",n);	//strike 아닐 경우 두번째 프레임이
	    scanf("%d",&pin2);
	    if(pin2 != 10-pin1)				//spare도 아닐때
	    {
		if(strike ==1)			//이전에 strike
		{	    
		    sum += pin2*2;
		    printf("****현재까지 점수 : %d\n",sum);
		    n++; strike =0;
		}
		else if(strike >=2)		//strike 두번 이상?
		{
		    sum +=pin2*3;
		    printf("****현재까지 점수 : %d\n",sum);
		    n++; strike=0;
		}
		else				//나머지
		{
		    sum +=pin2;
		    printf("****현재까지 점수 : %d\n",sum);
		    n++;
		}
	    }


	    else						//spare 일때
	    {
		if(strike ==1)			//이전에 strike
		{	    
		    sum += pin2*2;
		    printf("****현재까지 점수 : %d\n",sum);
		    n++; strike =0; spare=1;
		}
		else if(strike >=2)		//strike 두번 이상?
		{
		    sum +=pin2*3;
		    printf("****현재까지 점수 : %d\n",sum);
		    n++; strike=0; spare=1;
		}
		else				//나머지
		{
		    sum +=pin2;
		    printf("****현재까지 점수 : %d\n",sum);
		    n++; spare=1;
		}
	    }
	}
    }
    printf("%d번째 프레임 1번째 처리 핀 수 :",n); //10번째 프레임
    scanf("%d",&pin1);
    if(strike==1)                           //strike 있었을때
    {


	if(pin1==10)
	{
	    sum +=pin1*2;
	    printf("****현재까지 점수 : %d\n",sum);
	    printf("%d번째 프레임 2번째 처리 핀 수 :",n);
	    scanf("%d",&pin2);
	    sum +=pin2*2;
	    printf("****현재까지 점수 : %d\n",sum);
	    printf("%d번째 프레임 3번째 처리 핀 수 :",n);
	    scanf("%d",&pin3);
	    sum +=pin3;
	    printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);
	}
	else
	{
	    sum +=pin1*2;
	    printf("****현재까지 점수 : %d\n",sum);
	    printf("%d번째 프레임 2번째 처리 핀 수 :",n);
	    scanf("%d",&pin2);
	    if(pin2 == 10-pin1)
	    {
		sum +=pin2*2;
		printf("****현재까지 점수 : %d\n",sum);
		printf("%d번째 프레임 3번째 처리 핀 수 : ",n);
		scanf("%d",&pin3);
		sum +=pin3;
		printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);
	    }
	    else
	    {
		sum +=pin2*2;
		printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);
	    }
	}
    }
    else if(strike >=2)                 //strike 두번이상 있었을때
    {
	if(pin1==10)
	{
	    sum +=pin1*3;
	    printf("****현재까지 점수 : %d\n",sum);
	    printf("%d번째 프레임 2번째 처리 핀 수 :",n);
	    scanf("%d",&pin2);
	    sum +=pin2*2;
	    printf("****현재까지 점수 : %d\n",sum);
	    printf("%d번째 프레임 3번째 처리 핀 수 :",n);
	    scanf("%d",&pin3);
	    sum +=pin3;
	    printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);
	}
	else
	{
	    sum +=pin1*3;
	    printf("****현재까지 점수 : %d\n",sum);
	    printf("%d번째 프레임 2번째 처리 핀 수 :",n);
	    scanf("%d",&pin2);
	    if(pin2 == 10-pin1)
	    {
		sum +=pin2*2;
		printf("****현재까지 점수 : %d\n",sum);
		printf("%d번째 프레임 3번째 처리 핀 수 : ",n);
		scanf("%d",&pin3);
		sum +=pin3;
		printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);
	    }
	    else
	    {
		sum +=pin2*2;
		printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);
	    }
	}
    }
    else if(spare==1)               //spare 있었을때
    {
	sum = pin1*2;
	printf("****현재까지 점수 : %d\n",sum);
	printf("%d번째 프레임 2번째 처리 핀 수 :",n);
	scanf("%d",&pin2);
	sum += pin2;
	printf("****현재까지 점수 : %d\n",sum);
	if(pin2 ==10-pin1)
	{
	    printf("%d번째 프레임 3번째 처리 핀 수 :",n);
	    scanf("%d",&pin3);
	    sum +=pin3;
	    printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);    
	}
	else
	{
	    printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);
	}
    }
    else                        //나머지
    {
	sum +=pin1;
	printf("현재까지 점수 : %d\n",sum);
	printf("%d번째 프레임 2번째 처리 핀 수 :",n);
	scanf("%d",&pin2);
	if(pin1 ==10)
	{
	    sum += pin2;
	    printf("****현재까지 점수 : %d\n",sum);
	    printf("%d번째 프레임 3번째 처리 핀 수 :",n);
	    scanf("%d",&pin3);
	    sum +=pin3;
	    printf("****최종 점수 : %d\n게임이 끝났습니다.\n",sum);    
	}
	else
	{
	    sum +=pin2;
	    printf("****최종 점수 : %d\n",sum);
	}
    }
    return 0;
}

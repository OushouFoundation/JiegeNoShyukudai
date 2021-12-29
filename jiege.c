#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int menu(void);
int arithmetic0p(char op,int amount,int chances);



int main()
{int rightnum;
int amount=5;
int chance=3;
while(1){
	switch(menu()){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			braak;
		case 0:
			printf("Game over.\n");
			exit(0);
			break;
		default:
			break;	
	}	
}                                                                                  	
	return 0;
}


int menu(void){
	int choose;
	printf("\n====================Arithmetic exercises==========\n");
	printf("                    1.Add\n");
	printf("                    2.Subtract\n");
	printf("                    3.Multiply\n");
	printf("                    4.Divide\n");
	printf("                    5.mode\n");
	printf("                    6.SetAmount\n");
	printf("                    7.Setchance\n");
	printf("                    0.Exit\n");
	printf("====================================================\n");
	
	printf("Your choice:");
	scanf("%d",&choose);
	return choose;	'
}


int arithmetic0p(char op,int amount,int chances){
	int result,answer,rightnum=0;
	while(amount){
		int a,b;
	srand(time(NULL));
	a=rand()%100+1;
	b=rand()%100+1;
	swtich(op){
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '*':
			result=a*b;
			break;
		case '/':
			reault=a/b;
			break;
		case '%':
			result=a%b;
			break;		
	}
	while(chances)
	{
	scanf("%d",&answer);
	if(answer==result){
		printf("Binggo, you are right.\n");
		rightnum++;
		break;
	}else{
		printf("the answer is wrong,try again.\n");
		chances--;
	}	
    }
    if(chances==0){
    	printf("the right answer is %d",result);
	}
	amount--;	
	}
return rightnum;	
}




















int main()


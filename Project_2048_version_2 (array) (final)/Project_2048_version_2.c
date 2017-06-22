#include<stdio.h>  
#include<stdlib.h>  
#include<conio.h>  
#include<time.h>  

#define WIN 2048

int array[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  
int aux_array[5]={0,0,0,0,0}; 
int judge_1_array[5]={0,0,0,0,0}; 
int step=0;  
int score=0; 
int regret=0;
int max=0;   
int judge_1=1; 
int judge_2=1; 
int judge_4;
 
#include"create_random.h"
#include"game_interface.h"
#include"basic_fun.h"
#include"judge_fun.h"
#include"system.h"

int main()  
{  
	int i,j,a,b,temp;  
	char operation_1,operation_2;  
	srand((unsigned)time(NULL));  
	max=0;  
	create_random();
	while(max<WIN)  
	{  
		system("cls");
		game_interface(); 
		judge_4=max;
      
 		operation_1=getch();
		switch(operation_1)  
		{  
		case 'w':  
		case 'W':  
			regret_save();
			temp=0;
			for(i=0;i<=3;i++)  
			{ 
				for(j=0;j<=3;j++)  
				{   
					aux_array[j]=array[j][i];  
				}  
				basic_fun();    
				for(j=0;j<=3;j++)  
				{     
					if(array[j][i]!=aux_array[j])
						temp=1;
					array[j][i]=aux_array[j];
				}  
			}  
			if((judge_2==1)&&(temp==1))
			{
				create_random();
			}
			break;  
		case 's':  
		case 'S':  
			regret_save();
			temp=0;
			for(i=0;i<=3;i++)  
			{ 
				for(j=0;j<=3;j++)  
				{   
					aux_array[3-j]=array[j][i];  
				}  
				basic_fun();    
				for(j=0;j<=3;j++)  
				{     
					if(array[j][i]!=aux_array[3-j])
						temp=1;
					array[j][i]=aux_array[3-j]; 
				}  
			}  
			if((judge_2==1)&&(temp==1))
			{
				create_random();
			}
			break;  
		case 'a':  
		case 'A':  
			regret_save();
			temp=0;
			for(i=0;i<=3;i++)  
			{    
				for(j=0;j<=3;j++)  
				{     
					aux_array[j]=array[i][j];  
				}  
				basic_fun();  
				for(j=0;j<=3;j++)  
				{    
					if(array[i][j]!=aux_array[j])
						temp=1;
					array[i][j]=aux_array[j];  
				}  
			}  
			if((judge_2==1)&&(temp==1))
			{
				create_random();
			}
			break;  
		case 'd':  
		case 'D':  
			regret_save();
			temp=0;
			for(i=0;i<=3;i++)  
			{  
				for(j=0;j<=3;j++)  
				{   
					aux_array[3-j]=array[i][j];  
				}  
				basic_fun();   
				for(j=0;j<=3;j++)  
				{    
					if(array[i][j]!=aux_array[3-j])
						temp=1;
					array[i][j]=aux_array[3-j];  
				}  
			}  
			if((judge_2==1)&&(temp==1))
			{
				create_random();
			}
			break; 
		case 'o':
			save();
			printf("you've already saved\n");
			getch();
			break;
		case 'p':
			load();
			printf("you've already loaded\n");
			getch();
			break;
		case 'l':
			if(regret>0)
			{	
				regret_load();
				printf("you've already regreted\n");
				regret-=1;
			}
			else
			{
				printf("sorry that you can't regret\n");
			}
			getch();
			break;
		}  
		a=judge_1_fun_1();
		b=judge_1_fun_2();
		judge_1=(a>b)?a:b;
		judge_2=judge_2_fun();  
		if((judge_4!=max)&&(max>=1024))
			regret+=1;
    
		if((judge_2==0)&&(judge_1==0))  
			break;  
	} 
	system("cls");
	game_interface();  
	if(max>=WIN)  
	{  
		printf("Congratulations, you won!!\n");  
		printf("you did a really good job!!\n"); 
		printf("if you want to continue the game, please put 'm'\n");
		printf("if you want to end the gane, please put other letter\n");
			operation_2=getch();  
		switch(operation_2)
		{
		case 'm':
		case 'M':
			while(max>=WIN)  
			{  
				system("cls");
				game_interface(); 
				judge_4=max;
		   
				operation_1=getch();
				switch(operation_1)  
				{  
				case 'w':  
				case 'W':  
					regret_save();
					temp=0;
					for(i=0;i<=3;i++)  
					{ 
						for(j=0;j<=3;j++)  
						{   
							aux_array[j]=array[j][i];  
						}  
						basic_fun();    
						for(j=0;j<=3;j++)  
						{     
							if(array[j][i]!=aux_array[j])
								temp=1;
							array[j][i]=aux_array[j];
						}  
					}  
					if((judge_2==1)&&(temp==1))
					{
						create_random();
					}
					break;  
				case 's':  
				case 'S':  
					regret_save();
					temp=0;
					for(i=0;i<=3;i++)  
					{ 
						for(j=0;j<=3;j++)  
						{   
							aux_array[3-j]=array[j][i];  
						}  
						basic_fun();    
						for(j=0;j<=3;j++)  
						{     
							if(array[j][i]!=aux_array[3-j])
								temp=1;
							array[j][i]=aux_array[3-j]; 
						}  
					}  
					if((judge_2==1)&&(temp==1))
					{
						create_random();
					}
					break;  
				case 'a':  
				case 'A':  
					regret_save();
					temp=0;
					for(i=0;i<=3;i++)  
					{    
						for(j=0;j<=3;j++)  
						{     
							aux_array[j]=array[i][j];  
						}  
						basic_fun();  
						for(j=0;j<=3;j++)  
						{    
							if(array[i][j]!=aux_array[j])
								temp=1;
							array[i][j]=aux_array[j];  
						}  
					}  
					if((judge_2==1)&&(temp==1))
					{
						create_random();
					}
					break;  
				case 'd':  
				case 'D':  
					regret_save();
					temp=0;
					for(i=0;i<=3;i++)  
					{  
						for(j=0;j<=3;j++)  
						{   
							aux_array[3-j]=array[i][j];  
						}  
						basic_fun();   
						for(j=0;j<=3;j++)  
						{    
							if(array[i][j]!=aux_array[3-j])
								temp=1;
							array[i][j]=aux_array[3-j];  
						}  
					}  
					if((judge_2==1)&&(temp==1))
					{
						create_random();
					}
					break; 
				case 'o':
					save();
					printf("you've already saved\n");
					getch();
					break;
				case 'p':
					load();
					printf("you've already loaded\n");
					getch();
					break;
				case 'l':
					if(regret>0)
					{	
						regret_load();
						printf("you've already regreted\n");
						regret-=1;
					}
					else
					{
						printf("sorry that you can't regret\n");
					}
					getch();
					break;
				}  
				a=judge_1_fun_1();
				b=judge_1_fun_2();
				judge_1=(a>b)?a:b;
				judge_2=judge_2_fun();  
				if((judge_4!=max)&&(max>=1024))
					regret+=1;
		 
				if((judge_2==0)&&(judge_1==0))  
				break;  
			} 
			system("cls");
			game_interface();
			printf("so sorry that the game ends\n"); 
			printf("but you are great enough\n");
			break;
		default:
			getch();
			break;
		}
	}  
	else  
	{  
		printf("so sorry that you lost the game\n");  
		printf("but it is a great try!\n");  
	}  
	return 0;
}  

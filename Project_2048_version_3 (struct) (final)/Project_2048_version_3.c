#include<stdio.h>  
#include<stdlib.h>  
#include<conio.h>  
#include<time.h>
 
#define WIN 2048

int step=0;  
int score=0; 
int regret=0;
int max=0;   
int judge_1=1;  
int judge_2=1;
int judge_3;
int judge_4;
struct tnode
{
	int number;
	struct tnode *up;
	struct tnode *down;
	struct tnode *left;
	struct tnode *right;
}array[16];

#include"initialization.h"
#include"create_random.h"
#include"game_interface.h"
#include"basic_fun.h"
#include"judge_fun.h"
#include"system.h"

int main()
{
	char operation_1,operation_2;  
	srand((unsigned)time(NULL));  
	max=0;  
	initialization();
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
			basic_fun_up();
			break;
		case 's':  
		case 'S':
			regret_save();
			basic_fun_down();
			break;
		case 'a':  
		case 'A':
			regret_save();
			basic_fun_left();
			break;
		case 'd':  
		case 'D':
			regret_save();
			basic_fun_right();
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
		judge_1=judge_1_fun();
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
		printf("Congratulations, you win!!\n");  
		printf("A really good job!!\n");  
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
					basic_fun_up();
					break;
				case 's':  
				case 'S':
					regret_save();
					basic_fun_down();
					break;
				case 'a':  
				case 'A':
					regret_save();
					basic_fun_left();
					break;
				case 'd':  
				case 'D':
					regret_save();
					basic_fun_right();
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
				judge_1=judge_1_fun();
				judge_2=judge_2_fun();
				if((judge_4!=max)&&(max>=512))
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
		printf("so sorry that you lose the game\n");  
		printf("but it is a great try!\n");  
	}  
	return 0;
}  




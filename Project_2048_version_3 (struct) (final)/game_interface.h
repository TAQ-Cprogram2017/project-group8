void game_interface()  
{  
	int i,j;
	printf("*~~~~~~~~Welcome to the Game 2048~~~~~~~*\n");  
	printf("*~~~~~~~~author: group 8 in JLU~~~~~~~~~*\n");  
	printf("your scores: %d  steps: %d  regret times: %d \n",score,step,regret); 
	printf("rule 1: you can put 'w','s','a','d' presenting the 'up''down''left''right' operation\n");
	printf("rule 2: if your max number becomes 2048, you win the game. Otherwise, you lose\n");
	printf("*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n");  
	for(i=0;i<=3;i++)  
	{  
		for(j=0;j<=3;j++)  
		{  
			if(array[4*i+j].number==0)
				printf("*         ");  
			else
				printf("*%5d    ",array[4*i+j].number);  
		}  
		printf("*\n*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n");  
	}  
	printf("if you want to save this game, please put 'o'\n");
	printf("if you want to load last game, please put 'p'\n");
	printf("if you want to regret the last step, please put 'l'(if the regret times are more than 1)\n\n");
}  
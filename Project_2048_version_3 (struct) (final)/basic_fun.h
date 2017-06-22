int basic_fun_eliminate_zero_up(void)  
{  
	int i;
	int temp=0;
	for(i=0;i<=15;i++)  
	{     
		if((array[i].up!=NULL)&&(array[i].up->number==0)&&(array[i].number!=0))  
		{  
			array[i].up->number=array[i].number;
			array[i].number=0;
			temp=1;
			judge_3=1;
		}  
	}  
	return temp;
}  

int basic_fun_eliminate_zero_down(void)  
{  
	int i;
	int temp=0;
	for(i=15;i>=0;i--)  
	{     
		if((array[i].down!=NULL)&&(array[i].down->number==0)&&(array[i].number!=0))  
		{  
			array[i].down->number=array[i].number;
			array[i].number=0;
			temp=1;
			judge_3=1;
		}  
	}  
	return temp;
}

int basic_fun_eliminate_zero_left(void)  
{  
	int i;
	int temp=0;
	for(i=0;i<=15;i++)  
	{     
		if((array[i].left!=NULL)&&(array[i].left->number==0)&&(array[i].number!=0))  
		{  
			array[i].left->number=array[i].number;
			array[i].number=0;
			temp=1;
			judge_3=1;
		}  
	}  
	return temp;
}

int basic_fun_eliminate_zero_right(void)  
{  
	int i;
	int temp=0;
	for(i=15;i>=0;i--)  
	{     
		if((array[i].right!=NULL)&&(array[i].right->number==0)&&(array[i].number!=0))  
		{  
			array[i].right->number=array[i].number;
			array[i].number=0;
			temp=1;
			judge_3=1;
		}  
	}  
	return temp;
}

void basic_fun_combination_up(void)  
{  
	int i;  
	for(i=0;i<=15;i++)
	{
		if((array[i].up!=NULL)&&(array[i].number!=0)&&(array[i].up->number==array[i].number))
		{
			array[i].up->number*=2;
			score+=array[i].up->number;
			array[i].number=0;
			judge_3=1;
		}
		if((array[i].up!=NULL)&&(max<(array[i].up->number)))
			max=(array[i].up->number);
	}
}  

void basic_fun_combination_down(void)  
{  
	int i;  
	for(i=15;i>=0;i--)
	{
		if((array[i].down!=NULL)&&(array[i].number!=0)&&(array[i].down->number==array[i].number))
		{
			array[i].down->number*=2;
			score+=array[i].down->number;
			array[i].number=0;
			judge_3=1;
		}
		if((array[i].down!=NULL)&&(max<(array[i].down->number)))
			max=(array[i].down->number);
	}
}  
 
void basic_fun_combination_left(void)  
{  
	int i;  
	for(i=0;i<=15;i++)
	{
		if((array[i].left!=NULL)&&(array[i].number!=0)&&(array[i].left->number==array[i].number))
		{
			array[i].left->number*=2;
			score+=array[i].left->number;
			array[i].number=0;
			judge_3=1;
		}
		if((array[i].left!=NULL)&&(max<(array[i].left->number)))
			max=(array[i].left->number);
	}
}  

void basic_fun_combination_right(void)  
{  
	int i;  
	for(i=15;i>=0;i--)
	{
		if((array[i].right!=NULL)&&(array[i].number!=0)&&(array[i].right->number==array[i].number))
		{
			array[i].right->number*=2;
			score+=array[i].right->number;
			array[i].number=0;
			judge_3=1;
		}
		if((array[i].right!=NULL)&&(max<(array[i].right->number)))
			max=(array[i].right->number);
	}
}  


void basic_fun_up(void)
{  
	int i,j;
	judge_3=0;
	do
	{
		i=basic_fun_eliminate_zero_up();   
	}while(i==1);
	basic_fun_combination_up();   
	do
	{
		j=basic_fun_eliminate_zero_up();   
	}while(j==1);
	if((judge_2==1)&&(judge_3==1))
	{
		create_random();
	}
}  


void basic_fun_down(void)
{  
	int i,j;
	judge_3=0;
	do
	{
		i=basic_fun_eliminate_zero_down();   
	}while(i==1);
	basic_fun_combination_down();   
	do
	{
		j=basic_fun_eliminate_zero_down();   
	}while(j==1);
	if((judge_2==1)&&(judge_3==1))
	{
		create_random();
	}
}  


void basic_fun_left(void)
{  
	int i,j;
	judge_3=0;
	do
	{
		i=basic_fun_eliminate_zero_left();   
	}while(i==1);
	basic_fun_combination_left();   
	do
	{
		j=basic_fun_eliminate_zero_left();   
	}while(j==1);
	if((judge_2==1)&&(judge_3==1))
	{
		create_random();
	}
}  


void basic_fun_right(void)
{  
	int i,j;
	judge_3=0;
	do
	{
		i=basic_fun_eliminate_zero_right();   
	}while(i==1);
	basic_fun_combination_right();   
	do
	{
		j=basic_fun_eliminate_zero_right();   
	}while(j==1);
	if((judge_2==1)&&(judge_3==1))
	{
		create_random();
	}
}  
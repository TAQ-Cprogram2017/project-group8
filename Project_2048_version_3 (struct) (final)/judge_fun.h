int judge_1_fun()
{
	int i;
	for(i=0;i<=15;i++)
	{
		if((array[i].up!=NULL)&&(array[i].number==array[i].up->number))
		{
				return 1;
		}
		if((array[i].left!=NULL)&&(array[i].number==array[i].left->number))
		{
				return 1;
		}
	}
	return 0;
}



int judge_2_fun()
{
	int i;
	for(i=0;i<=15;i++)  
    {  
		if(array[i].number==0)  
		return 1;    
    }
	return 0;
}


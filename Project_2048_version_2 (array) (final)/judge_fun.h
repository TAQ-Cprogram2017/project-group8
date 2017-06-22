int judge_1_fun_1()
{
	int i,j,s;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			judge_1_array[j]=array[j][i];
		}
		for(s=0;s<=2;s++)
		{
			if(judge_1_array[s]==judge_1_array[s+1])
				return 1;
		}
	}
	return 0;
}

int judge_1_fun_2()
{
	int i,j,s;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			judge_1_array[j]=array[i][j];
		}
		for(s=0;s<=2;s++)
		{
			if(judge_1_array[s]==judge_1_array[s+1])
				return 1;
		}
	}
	return 0;
}

int judge_2_fun()
{
	int i,j;
	for(i=0;i<=3;i++)  
    {  
		for(j=0;j<=3;j++)  
		{  
			if(array[i][j]==0)  
			return 1;  
		}  
    }
	return 0;
}
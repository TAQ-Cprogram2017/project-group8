void create_random()  
{  
	int i,j;  
	do 
	{  
		i=((unsigned)rand())%4;  
		j=((unsigned)rand())%4;  
	}while(array[i][j]!=0);  
	if(((unsigned)rand())%4==0)  
	{    
		array[i][j]=4;  
	}  
	else  
	{  
		array[i][j]=2;  
	}  
	step++;  
}
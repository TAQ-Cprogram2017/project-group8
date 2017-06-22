void create_random()  
{  
	int i;  
	do 
	{  
		i=((unsigned)rand())%16;   
	}while(array[i].number!=0);  
	if(((unsigned)rand())%4==0)  
	{    
		array[i].number=4;  
	}  
	else  
	{  
		array[i].number=2;  
	}  
	step++;  
}
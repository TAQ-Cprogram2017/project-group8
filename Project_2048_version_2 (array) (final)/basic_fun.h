void basic_fun_eliminate_zero()  
{  
	int i,j;  
	for(i=0;i<=3;i++)  
	{  
		if(aux_array[i]==0)  
		{  
			for(j=i+1;j<=3;j++)  
			{  
				if(aux_array[j]!=0)  
				{  
					break;  
				}  
			}  
		aux_array[i]=aux_array[j];  
		aux_array[j]=0;  
	}  
    if(j>=3)  
		break;  
	}  
}  

void basic_fun_combination()  
{  
	int i;  
	for(i=0;i<=2;i++)  
	{  
		if((aux_array[i]!=0)&&(aux_array[i]==aux_array[i+1]))  
		{  
			aux_array[i]*=2;  
			score+=aux_array[i];  
			aux_array[i+1]=0;  
		}  
		if(max<aux_array[i])  
			max=aux_array[i];  
	}  
}  
 
void basic_fun()  
{  
	basic_fun_eliminate_zero();   
	basic_fun_combination();   
	basic_fun_eliminate_zero();  
}  
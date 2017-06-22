void initialization(void)
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			array[4*i+j].number=0;
			if(4*i+j-4>=0)
				array[4*i+j].up=&array[4*i+j-4];
			else
				array[4*i+j].up=NULL;
			if(4*i+j+4<=15)
				array[4*i+j].down=&array[4*i+j+4];
			else
				array[4*i+j].down=NULL;
			if((4*i+j)%4!=0)
				array[4*i+j].left=&array[4*i+j-1];
			else
				array[4*i+j].left=NULL;
			if((4*i+j)%4!=3)
				array[4*i+j].right=&array[4*i+j+1];
			else
				array[4*i+j].right=NULL;
		}
	}
}
void save(void)
{
	int i,j;
	FILE *fp;
	if((fp=fopen("save.txt","w"))!=NULL)
	{
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=3;j++)
			{
				fwrite(&array[i][j],sizeof(int),1,fp);
			}
		}
		fclose(fp);
	}
	else
	{
		printf("problem opening the file\n");
	}
}

void load(void)
{
	int i,j;
	FILE *fp;
	if((fp=fopen("save.txt","r"))!=NULL)
	{
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=3;j++)
			{
				fread(&array[i][j],sizeof(int),1,fp);
			}
		}
		fclose(fp);
	}
	else
	{
		printf("problem opening the file\n");
	}
}

void regret_save(void)
{
	int i,j;
	FILE *fp;
	if((fp=fopen("regret.txt","w"))!=NULL)
	{
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=3;j++)
			{
				fwrite(&array[i][j],sizeof(int),1,fp);
			}
		}
		fclose(fp);
	}
	else
	{
		printf("problem opening the file\n");
	}
}

void regret_load(void)
{
	int i,j;
	FILE *fp;
	if((fp=fopen("regret.txt","r"))!=NULL)
	{
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=3;j++)
			{
				fread(&array[i][j],sizeof(int),1,fp);
			}
		}
		fclose(fp);
	}
	else
	{
		printf("problem opening the file\n");
	}
}

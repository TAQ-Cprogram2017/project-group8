void save(void)
{
	int i;
	FILE *fp;
	if((fp=fopen("save.txt","w"))!=NULL)
	{
		for(i=0;i<=15;i++)
		{
			fwrite(&array[i].number,sizeof(int),1,fp);
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
	int i;
	FILE *fp;
	if((fp=fopen("save.txt","r"))!=NULL)
	{
		for(i=0;i<=15;i++)
		{
			fread(&array[i].number,sizeof(int),1,fp);
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
	int i;
	FILE *fp;
	if((fp=fopen("regret.txt","w"))!=NULL)
	{
		for(i=0;i<=15;i++)
		{
			fwrite(&array[i].number,sizeof(int),1,fp);
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
	int i;
	FILE *fp;
		if((fp=fopen("regret.txt","r"))!=NULL)
		{
			for(i=0;i<=15;i++)
			{
				fread(&array[i].number,sizeof(int),1,fp);
			}
			fclose(fp);
		}
		else
		{
			printf("problem opening the file\n");
		}
}
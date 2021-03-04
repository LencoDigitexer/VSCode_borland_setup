// вывести двумерный массив в файл
	int file(int lss[][K], int s1, char *ch)
	{
		int i, j;
		FILE *f;
		if ((f = fopen(ch, "w")) == NULL)
		{
			fprintf(stderr, "Ошибка! Не удается открыть файл...\n");
			return 1;
		}
		for(i = 0;  i < s1; i++)
		{
			for(j = 0; j < K; j++)
			{
				fprintf(f, "%5d", lss[i][j]); 
			}
			fprintf(f, "\n");
		}
		fclose (f); return 0;
	}
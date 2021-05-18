// читать двумерный массив из файла
	int read_mas2(int lss[][K], int s1, char *ch)
	{
		int i, j;
		FILE *f;
		if ((f = fopen(ch, "r")) == NULL)
		{
			fprintf(stderr, "Ошибка! Не удается открыть файл...\n");
			return 1;
		}
		for(i = 0;  i < s1; i++)
		{
			for(j = 0; j < K; j++)
			{
				fscanf(f, "%d", &lss[i][j]); 
			}
		}
		fclose (f); return 0;
	}
// �뢥�� ��㬥�� ���ᨢ � 䠩�
	int file(int lss[][K], int s1, char *ch)
	{
		int i, j;
		FILE *f;
		if ((f = fopen(ch, "w")) == NULL)
		{
			fprintf(stderr, "�訡��! �� 㤠���� ������ 䠩�...\n");
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
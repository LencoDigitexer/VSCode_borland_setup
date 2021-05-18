 void ww(int lss[][K], int s1)
        {
                int i, j, k;
		printf("\n");
                for(i = 0; i < s1; i++)
                {
                        k++;
			printf("\t\t");
                        for(j = 0; j < K; j++) 
                        {
                                gotoxy((j + 11) * 5, k+11); 
                                printf("%3d ", lss[i][j]);
                        }
			printf("\n");
                } k++;
        }
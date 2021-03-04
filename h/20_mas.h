void ff(int ls[][K], int s1)
        {
                int i, j;
                for (i = 0; i < s1; i++)
                        for(j = 0; j < K; j++) 
                                ls[i][j] = random(301);
        }
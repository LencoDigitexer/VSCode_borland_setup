void get_mas(int list[], int size) 
{
	int i;
	for(i = 1; i < size+1; i++){
        printf("%7d", list[i-1]);
        if(i%10==0){
            printf("\n");
        }
    } 
	printf("\n\n");
}
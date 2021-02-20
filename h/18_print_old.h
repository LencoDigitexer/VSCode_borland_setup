// ���ᨢ ����⢥���� ���祭��
void get_mas(float list[], int size) 
{
	int i;
	for(i = 1; i < size+1; i++){
        printf("%10.1f", list[i-1]);
        if(i%7==0){
            printf("\n");
        }
    } 
	printf("\n\n");
}

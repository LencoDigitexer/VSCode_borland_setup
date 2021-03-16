// Функция: читать массив структур из файла
int read_struct(struct Apotheke New[], char *str)
{
	FILE  *fp;
	int num = 0;
	// Открыть файл для чтения
	if ((fp = fopen(str, "r")) == NULL)
	{	puts("Невозможно открыть файл");
		exit(1);
	}
	while(fread(&New[num], sizeof(New[num]), 1, fp) == 1)
		num++;
	fclose(fp);
	return num;
}
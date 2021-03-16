int fil_struct(struct Apotheke New[], char *str)
{
	FILE  *fp;
	int num;
	// Открыть файл для записи
	if ((fp = fopen(str, "w")) == NULL)
	{	puts("Невозможно открыть файл");
		exit(1);
	}
	num = 0;
	while(strlen(New[num].por) > 0)
	{
		fwrite(&New[num], sizeof(New[num]), 1, fp);
		num++;
	}
	fclose(fp);
	return num;
}
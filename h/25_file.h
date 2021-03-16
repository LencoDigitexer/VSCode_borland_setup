// Функция: записать данные в файл
int file_path(char *s, int n, char *str)
{
	FILE  *fp;
	// Открыть файл для записи
	if ((fp = fopen(str, "w")) == NULL)
	{	puts("Невозможно открыть файл");
		exit(1);
	}
	fprintf(fp, "Файл: %s\n", s);
	fprintf(fp, "Размер: %d байт", n);
	fclose(fp);
	return 0;
}
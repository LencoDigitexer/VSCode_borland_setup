// запись в файл номера и названия работы
int fil_rez(float x, float y)
{
	// 1 - Определить указатель на файл 
	FILE *f; 

	char *ch = "fil_dat\\pr10_GKV.dat";
	// 2 - Открыть файл и указать цель открытия
	if ((f = fopen(ch, "a")) == NULL)
	{
		fprintf(stderr, "Ошибка! Не удается открыть файл...\n");
		return 1;
	}
	// 3 - Поработать с файлом (записать в файл)
	fprintf (f, "x = %f\n", x);
	fprintf (f, "y = %.5f\n", y);
	// 4 - Закрыть файл
	fclose (f);
	return 0;
}

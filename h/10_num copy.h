// запись в файл номера и названия работы
int fil_num(char *name, int num)
{
	// 1 - Определить указатель на файл 
	FILE *f; 
    
	char *ch = "..\\fil_dat\\pr10_BTA.dat";
	// 2 - Открыть файл и указать цель открытия
	if ((f = fopen(ch, "w")) == NULL)
	{
		fprintf(stderr, "Ошибка! Не удается открыть файл...\n");
		return 1;
	}
	// 3 - Поработать с файлом (записать в файл)
	fprintf (f, "Практическая работа № %d\n", num);
	fprintf (f, "%s\n", name);
	// 4 - Закрыть файл
	fclose (f);
	return 0;
}

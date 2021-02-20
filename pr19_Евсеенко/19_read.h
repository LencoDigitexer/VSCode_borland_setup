int read_mas1(float list[], int size, char *ch)
{
int i;
FILE *f;
if ((f = fopen(ch, "r")) == NULL)
{
fprintf(stderr, "Ошибка! Не удается открыть файл...\n");
return 1;
}
for(i = 0; i < size; i++)
{
fscanf(f, "%f", &list[i]);
}
fclose (f); return 0;
}

int fil_mas(int  list[], int size, char *ch)
{
        int i;
        FILE *f;
        if ((f = fopen(ch, "w")) == NULL)
        {
                fprintf(stderr, "�訡�� ������ 䠩��\n");
                return 1;
        }
        for(i = 0;  i < size; i++)
        {
                fprintf (f, "%2d ", list[i]);
        } fclose (f); return 0;
}

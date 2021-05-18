int fil_col(int  list, char *ch)
{
        int i;
        FILE *f;
        if ((f = fopen(ch, "w")) == NULL)
        {
                fprintf(stderr, "Не удалось открыть\n");
                return 1;
        }
     
        fprintf (f, "%d", list);
         fclose (f); return 0;
}
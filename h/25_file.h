// �㭪��: ������� ����� � 䠩�
int file_path(char *s, int n, char *str)
{
	FILE  *fp;
	// ������ 䠩� ��� �����
	if ((fp = fopen(str, "w")) == NULL)
	{	puts("���������� ������ 䠩�");
		exit(1);
	}
	fprintf(fp, "����: %s\n", s);
	fprintf(fp, "������: %d ����", n);
	fclose(fp);
	return 0;
}
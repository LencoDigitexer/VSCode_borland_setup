// �㭪��: ���� ���ᨢ ������� �� 䠩��
int read_struct(struct Apotheke New[], char *str)
{
	FILE  *fp;
	int num = 0;
	// ������ 䠩� ��� �⥭��
	if ((fp = fopen(str, "r")) == NULL)
	{	puts("���������� ������ 䠩�");
		exit(1);
	}
	while(fread(&New[num], sizeof(New[num]), 1, fp) == 1)
		num++;
	fclose(fp);
	return num;
}
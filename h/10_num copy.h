// ������ � 䠩� ����� � �������� ࠡ���
int fil_num(char *name, int num)
{
	// 1 - ��।����� 㪠��⥫� �� 䠩� 
	FILE *f; 
    
	char *ch = "..\\fil_dat\\pr10_BTA.dat";
	// 2 - ������ 䠩� � 㪠���� 楫� ������
	if ((f = fopen(ch, "w")) == NULL)
	{
		fprintf(stderr, "�訡��! �� 㤠���� ������ 䠩�...\n");
		return 1;
	}
	// 3 - ��ࠡ���� � 䠩��� (������� � 䠩�)
	fprintf (f, "�ࠪ��᪠� ࠡ�� � %d\n", num);
	fprintf (f, "%s\n", name);
	// 4 - ������� 䠩�
	fclose (f);
	return 0;
}

// ������ � 䠩� ����� � �������� ࠡ���
int fil_rez(float x, float y)
{
	// 1 - ��।����� 㪠��⥫� �� 䠩� 
	FILE *f; 
    
	char *ch = "..\\fil_dat\\pr10_BTA.dat";
	// 2 - ������ 䠩� � 㪠���� 楫� ������
	if ((f = fopen(ch, "a")) == NULL)
	{
		fprintf(stderr, "�訡��! �� 㤠���� ������ 䠩�...\n");
		return 1;
	}
	// 3 - ��ࠡ���� � 䠩��� (������� � 䠩�)
	fprintf (f, "x = %f\n", x);
	fprintf (f, "y = %.5f\n", y);
	// 4 - ������� 䠩�
	fclose (f);
	return 0;
}

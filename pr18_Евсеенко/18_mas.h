	// ���ᨢ ����⢥���� ���祭��
void setrand(float list[], int size) 
{
	int i;
	for (i = 0; i < size; i++) 
		list[i] = (rand() % 10)*.1;
}
// ���ᨢ ����⢥���� ���祭��
void setrandom(float list[], int size) 
{
	int i;
	for (i = 0; i < size; i++) 
		list[i] = random(100)*.1 - random(20)*.1;
}

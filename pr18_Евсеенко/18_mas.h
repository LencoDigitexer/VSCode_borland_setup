	// массив вещественных значений
void setrand(float list[], int size) 
{
	int i;
	for (i = 0; i < size; i++) 
		list[i] = (rand() % 10)*.1;
}
// массив вещественных значений
void setrandom(float list[], int size) 
{
	int i;
	for (i = 0; i < size; i++) 
		list[i] = random(100)*.1 - random(20)*.1;
}

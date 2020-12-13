void y(int _time)
{
	Wind(33, 2, 70, 6, 0, 20);
	gotoxy(12, 1); cout << "1. Утро.";
	gotoxy(2, 2); cout << "Я пришел к тебе с приветом," << endl;
    gotoxy(2, 3); cout << "Рассказать, что солнце встало," << endl;
    gotoxy(2, 4); cout << "Что оно горячим светом" << endl;
    gotoxy(2, 5); cout << "По листам затрепетало." << endl; 
}
void no(int _time)
{
	Wind(33, 9, 71, 11, 0, 5);
	gotoxy(12, 1); cout << "2. Ночь.";
	gotoxy(2, 2); cout << "Месяц светом с высоты обдал нивы," << endl;
    gotoxy(2, 3); cout << "А в овраге блеск воды, тень да ивы." << endl;
}
void v(int _time)
{
	Wind(33, 14, 78, 18, 0, 6);
	gotoxy(12, 1); cout << "3. Вечер.";
	gotoxy(2, 2); cout << "Летний вечер тих и ясен;" << endl;
    gotoxy(2, 3); cout << "Посмотри, как дремлют ивы;" << endl;
    gotoxy(2, 4); cout << "Запад неба бледно-красен," << endl;
    gotoxy(2, 5); cout << "И реки блестят извивы." << endl; 
}
void d(int _time)
{
    Wind(45, 21, 78, 25, 0, 3);
	gotoxy(12, 1); cout << "4. День.";
	gotoxy(2, 2); cout << "Был чудный майский день в Москве;" << endl;
    gotoxy(2, 3); cout << "Кресты церквей сверкали," << endl;
    gotoxy(2, 4); cout << "Вились касатки под окном" << endl;
    gotoxy(2, 5); cout << "И звонко щебетали." << endl; 
}

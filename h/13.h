void _in(int _time)
{
	Wind(33, 3, 78, 9, 0, 20);
	gotoxy(12, 2); cout << "1. Внутри сети.";
	gotoxy(2, 3); cout << "Время разговора = " << _time << " секунд" << endl;
    gotoxy(2, 4); cout << "Прайс: 1 рубль за 1 минуту" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 5); cout << "Целых минут = " << _time << endl;
    gotoxy(2, 6); cout << "Итоговая стоимость = " << _time * 1 << " RUB" << endl; 
}
void _other(int _time)
{
	Wind(33, 12, 78, 16, 0, 5);
	gotoxy(12, 1); cout << "2. Другой оператор.";
	gotoxy(2, 2); cout << "Время разговора = " << _time << " секунд" << endl;
	gotoxy(2, 3); cout << "Прайс: 1 рубль за 1 минуту" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 4); cout << "Целых минут = " << _time << endl;
    gotoxy(2, 5); cout << "Итоговая стоимость = " << _time * 3 << " RUB" << endl; 

}
void _gor_number(int _time)
{
	Wind(33, 19, 78, 24, 0, 6);
	gotoxy(12, 1); cout << "3. На городской номер.";
	gotoxy(2, 2); cout << "Время разговора = " << _time << " секунд" << endl;
	gotoxy(2, 3); cout << "Прайс: 1 рубль за 1 минуту" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 4); cout << "Целых минут = " << _time << endl;
    gotoxy(2, 5); cout << "Итоговая стоимость = " << _time * 5 << " RUB" << endl; 
}

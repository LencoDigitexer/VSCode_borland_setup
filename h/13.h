void _in(int _time)
{
	Wind(33, 3, 78, 9, 0, 20);
	gotoxy(12, 2); cout << "1. Within the network.";
	gotoxy(2, 3); cout << "Talk time = " << _time << " seconds" << endl;
    gotoxy(2, 4); cout << "Price: 1 ruble per 1 minute" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 5); cout << "Entire minutes = " << _time << endl;
    gotoxy(2, 6); cout << "Total cost = " << _time * 1 << " RUB" << endl; 
}
void _other(int _time)
{
	Wind(33, 12, 78, 16, 0, 5);
	gotoxy(12, 1); cout << "2. Other operator.";
	gotoxy(2, 2); cout << "Talk time = " << _time << " seconds" << endl;
	gotoxy(2, 3); cout << "Price: 3 ruble per 1 minute" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 4); cout << "Entire minutes = " << _time << endl;
    gotoxy(2, 5); cout << "Total cost = " << _time * 3 << " RUB" << endl; 

}
void _gor_number(int _time)
{
	Wind(33, 19, 78, 24, 0, 6);
	gotoxy(12, 1); cout << "3. To a local number.";
	gotoxy(2, 2); cout << "Talk time = " << _time << " seconds" << endl;
	gotoxy(2, 3); cout << "Price: 3 ruble per 1 minute" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 4); cout << "Entire minutes = " << _time << endl;
    gotoxy(2, 5); cout << "Total cost = " << _time * 5 << " RUB" << endl; 
}

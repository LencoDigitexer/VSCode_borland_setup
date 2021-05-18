#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#include <math.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"

class conus{

    private:
        float h, R, r, V, S;

    public:
        // конструктор с параметрами по умолчании
        // i -> 'i'nput
        conus(float hi = 7, float Ri = 10, float ri = 4);
        int get_R(void);
        int get_r(void);
        int get_h(void);
        float v(void);
        float obr(void);
        float plo(void);
        void print(char*);
        void move(float, float, float);
        ~conus();
};

// конструктор
conus::conus(float hi, float Ri, float ri)
{
    h = hi;
    R = Ri;
    r = ri;
}

// изменить значения параметров h, R, r
void conus::move(float hi, float Ri, float ri)
{
    h = hi;
    R = Ri;
    r = ri;
}

// возвратить R
int conus::get_R()
{
    return R;
}
// возвратить r
int conus::get_r()
{
    return r;
}
// возвратить h
int conus::get_h()
{
    return h;
}

// объем конуса
float conus::v()
{
    float V = (M_PI*get_h()*(get_R()*get_R()+get_R()*get_r()+get_r()*get_r()))/3;
    return (V);
}

// образующая конуса
float conus::obr()
{
    float OBR = sqrt(get_h()*get_h()+(get_R()-get_r())*(get_R()-get_r()));
    return (OBR);
}

// образующая конуса
float conus::plo()
{
    float S = M_PI*(get_r()+get_R())*obr();
    return (S);
}

// вывод результатов
void conus::print(char* str)
{
    cout << "-----------------------------------------" << endl;
    cout << "Объект " << str << " - усеченный конус" << endl;
    cout << "Радиус нижнего основания          = " << get_R() << endl;
    cout << "Радиус верхнего основания         = " << get_r() << endl;
    cout << "Высота                            = " << get_h() << endl;
    cout << "Объём                             = " << v() << endl;
    cout << "Длина образующей                  = " << obr() << endl;
    cout << "Площадь боковой поверхности       = " << plo() << endl;
    cout << "-----------------------------------------" << endl << endl;
}

// деструктор
conus::~conus()
{
}

void main()
{
    clrscr();
    conus P; // Объект P с параметрами по умолчании
    page_1();
    clrscr();
    window(1, 1, 80, 25); textbackground(0); clrscr();
    P.print("P"); // Вывести значения
    // Задать новые значения компонентам объекта P
    P.move(8, 30, 5);
    // Вывести новые значения объекта P
    P.print("P");
    conus Z(4, 45, 9); // Создать объект Z
    Z.print("Z"); // Вывести значения объекта Z


    // Обращение к компонентным функциям класса из тела main() к объекту P
    cout << "-----------------------------------------" << endl;
    cout << "Объект P - усеченный конус" << endl;
    cout << "Радиус нижнего основания          = " << P.get_R() << endl;
    cout << "Радиус верхнего основания         = " << P.get_r() << endl;
    cout << "Высота                            = " << P.get_h() << endl;
    cout << "Объём                             = " << P.v() << endl;
    cout << "Длина образующей                  = " << P.obr() << endl;
    cout << "Площадь боковой поверхности       = " << P.plo() << endl;
    cout << "-----------------------------------------" << endl << endl;

    // Обращение к компонентным функциям класса из тела main() к объекту Z
    cout << "-----------------------------------------" << endl;
    cout << "Объект Z - усеченный конус" << endl;
    cout << "Радиус нижнего основания          = " << Z.get_R() << endl;
    cout << "Радиус верхнего основания         = " << Z.get_r() << endl;
    cout << "Высота                            = " << Z.get_h() << endl;
    cout << "Объём                             = " << Z.v() << endl;
    cout << "Длина образующей                  = " << Z.obr() << endl;
    cout << "Площадь боковой поверхности       = " << Z.plo() << endl;
    cout << "-----------------------------------------" << endl << endl;

    getch();
}
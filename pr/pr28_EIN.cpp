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
        // ��������� � ��ࠬ��ࠬ� �� 㬮�砭��
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

// ���������
conus::conus(float hi, float Ri, float ri)
{
    h = hi;
    R = Ri;
    r = ri;
}

// �������� ���祭�� ��ࠬ��஢ h, R, r
void conus::move(float hi, float Ri, float ri)
{
    h = hi;
    R = Ri;
    r = ri;
}

// �������� R
int conus::get_R()
{
    return R;
}
// �������� r
int conus::get_r()
{
    return r;
}
// �������� h
int conus::get_h()
{
    return h;
}

// ��ꥬ �����
float conus::v()
{
    float V = (M_PI*get_h()*(get_R()*get_R()+get_R()*get_r()+get_r()*get_r()))/3;
    return (V);
}

// ��ࠧ���� �����
float conus::obr()
{
    float OBR = sqrt(get_h()*get_h()+(get_R()-get_r())*(get_R()-get_r()));
    return (OBR);
}

// ��ࠧ���� �����
float conus::plo()
{
    float S = M_PI*(get_r()+get_R())*obr();
    return (S);
}

// �뢮� १���⮢
void conus::print(char* str)
{
    cout << "-----------------------------------------" << endl;
    cout << "��ꥪ� " << str << " - ��祭�� �����" << endl;
    cout << "������ ������� �᭮�����          = " << get_R() << endl;
    cout << "������ ���孥�� �᭮�����         = " << get_r() << endl;
    cout << "����                            = " << get_h() << endl;
    cout << "����                             = " << v() << endl;
    cout << "����� ��ࠧ��饩                  = " << obr() << endl;
    cout << "���頤� ������� �����孮��       = " << plo() << endl;
    cout << "-----------------------------------------" << endl << endl;
}

// ��������
conus::~conus()
{
}

void main()
{
    clrscr();
    conus P; // ��ꥪ� P � ��ࠬ��ࠬ� �� 㬮�砭��
    page_1();
    clrscr();
    window(1, 1, 80, 25); textbackground(0); clrscr();
    P.print("P"); // �뢥�� ���祭��
    // ������ ���� ���祭�� ��������⠬ ��ꥪ� P
    P.move(8, 30, 5);
    // �뢥�� ���� ���祭�� ��ꥪ� P
    P.print("P");
    conus Z(4, 45, 9); // ������� ��ꥪ� Z
    Z.print("Z"); // �뢥�� ���祭�� ��ꥪ� Z


    // ���饭�� � ���������� �㭪�� ����� �� ⥫� main() � ��ꥪ�� P
    cout << "-----------------------------------------" << endl;
    cout << "��ꥪ� P - ��祭�� �����" << endl;
    cout << "������ ������� �᭮�����          = " << P.get_R() << endl;
    cout << "������ ���孥�� �᭮�����         = " << P.get_r() << endl;
    cout << "����                            = " << P.get_h() << endl;
    cout << "����                             = " << P.v() << endl;
    cout << "����� ��ࠧ��饩                  = " << P.obr() << endl;
    cout << "���頤� ������� �����孮��       = " << P.plo() << endl;
    cout << "-----------------------------------------" << endl << endl;

    // ���饭�� � ���������� �㭪�� ����� �� ⥫� main() � ��ꥪ�� Z
    cout << "-----------------------------------------" << endl;
    cout << "��ꥪ� Z - ��祭�� �����" << endl;
    cout << "������ ������� �᭮�����          = " << Z.get_R() << endl;
    cout << "������ ���孥�� �᭮�����         = " << Z.get_r() << endl;
    cout << "����                            = " << Z.get_h() << endl;
    cout << "����                             = " << Z.v() << endl;
    cout << "����� ��ࠧ��饩                  = " << Z.obr() << endl;
    cout << "���頤� ������� �����孮��       = " << Z.plo() << endl;
    cout << "-----------------------------------------" << endl << endl;

    getch();
}
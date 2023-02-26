#include <iostream>
#include <cmath>
#include <Traingle.h>

using namespace std;

    bool Triangle::exst_tr() {
        return ((a + b > c) && (b + c > a) && (a + c > b));
    }
    void Triangle::set(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
    }
    void Triangle::show() {
        cout << "1 �������: " << a << endl;
        cout << "2 �������: " << b << endl;
    }
    double Triangle::perimetr() {
        double p = a + b + c;
        cout << "3 �������: " << c << endl;
        return p;
    }
    double Triangle::square() {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }
};

int main()
{
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "������� a, b � c ��� ������������ � " << i + 1 << " ����� ������: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "������������ � ������ ��������� �� ����������, �������� ��� ���" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "�������� ������������: " << mas[i].perimetr() << endl;
        cout << "������� ������������: " << mas[i].square() << endl;
    }
    return 0;
}
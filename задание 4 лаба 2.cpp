#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    //������������ ���� ����� ����� �� 8 �� 15
    int k = 1, a, b;
    for (int i = 8; i <= 15; ++i){
        k = k * i;
    }
    cout << k << endl;
    //�� � �� 20
    k = 1;
    cout << "������� a, ��������������� 1 < a < 20: " << endl;
    cin >> a;
    for (int i = a; i < 20; ++i){
        k = k * i;
    }
    cout << "������������ ����� �� " << a << " �� 20 �����: " << k << endl;
    //�� 1 �� b
    k = 1;
    cout << "������� b, ��������������� 1 < b < 20: " << endl;
    cin >> b;
    for (int i = 1; i <= b; ++i){
        k = k * i;
    }
    cout << "������������ ����� �� 1 �� " << b << " �����: " << k << endl;
    k = 1;
    cout << "������� a � b, ��������������� ������� b >= a, ����� ������: " << endl;
    cin >> a >> b;
    for (a; a <= b; ++a){
        k = k * a;
    }
    cout << "������������ ����� �� " << a << " �� " << b << " �����: " << k << endl;
}

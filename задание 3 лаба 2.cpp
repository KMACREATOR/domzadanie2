#include <iostream>

using namespace std;
//������� 3
int main(){
    setlocale(LC_ALL, "Russian");
    int k;
    //��� ����
    for (int i = 0; i <= 9; ++i){
        cout << i << "x" << 7 << "=" << i * 7 << endl;
    }
    //��� ��������� �����
   cout << "������� �����, ��� �������� ����� ���������� ������� ���������: " << endl;
    cin >> k;
    for (int i = 0; i <= 9; ++i){
        cout << i << "x" << k << "=" << i * k << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

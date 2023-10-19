#include <iostream>

using namespace std;
//задание 3
int main(){
    setlocale(LC_ALL, "Russian");
    int k;
    //дл€ семи
    for (int i = 0; i <= 9; ++i){
        cout << i << "x" << 7 << "=" << i * 7 << endl;
    }
    //дл€ вводимого числа
   cout << "¬ведите число, дл€ которого будет составлена таблица умножени€: " << endl;
    cin >> k;
    for (int i = 0; i <= 9; ++i){
        cout << i << "x" << k << "=" << i * k << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

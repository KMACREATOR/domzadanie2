#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    //произведение всех целых чисел от 8 до 15
    int k = 1, a, b;
    for (int i = 8; i <= 15; ++i){
        k = k * i;
    }
    cout << k << endl;
    //от а до 20
    k = 1;
    cout << "¬ведите a, удовлетвор€ющее 1 < a < 20: " << endl;
    cin >> a;
    for (int i = a; i < 20; ++i){
        k = k * i;
    }
    cout << "ѕроизведение чисел от " << a << " до 20 равно: " << k << endl;
    //от 1 до b
    k = 1;
    cout << "¬ведите b, удовлетвор€ющее 1 < b < 20: " << endl;
    cin >> b;
    for (int i = 1; i <= b; ++i){
        k = k * i;
    }
    cout << "ѕроизведение чисел от 1 до " << b << " равно: " << k << endl;
    k = 1;
    cout << "¬ведите a и b, удовлетвор€ющие условию b >= a, через пробел: " << endl;
    cin >> a >> b;
    for (a; a <= b; ++a){
        k = k * a;
    }
    cout << "ѕроизведение чисел от " << a << " до " << b << " равно: " << k << endl;
}

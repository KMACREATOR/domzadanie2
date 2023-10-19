#include <iostream>
#include <cmath>
using namespace std;
using byte = unsigned char;

void positive_result(){
    cout << "‘игура угрожает полю." << endl;
}

void negative_result(){
    cout << "‘игура не угрожает полю." << endl;
}

pair <byte, byte> first_input(){
    byte a, b;
    cout << "¬ведите координаты первой шахматной фигуры через пробел: " << endl;
    cin >> a >> b;
    return make_pair(a, b);
}

pair <byte, byte> second_input(){
    byte a, b;
    cout << "¬ведите координаты второй шахматной фигуры через пробел: " << endl;
    cin >> a >> b;
    return make_pair(a, b);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    using byte = unsigned char;
    pair <byte, byte> positionA;
    pair <byte, byte> positionB;
    //про ладью
    cout << "¬ведите координаты первой шахматной фигуры через пробел: " << endl;
    cin >> positionA.first >> positionA.second;
    cout << "¬ведите координаты второй шахматной фигуры через пробел: " << endl;
    cin >> positionB.first >> positionB.second;
    if (positionA.first == positionB.first || positionA.second == positionB.second){
        positive_result();
    }
    else{
        negative_result();
    }
    //про слона
    cout << "¬ведите координаты первой шахматной фигуры через пробел: ";
    cin >> positionA.first >> positionA.second;
    cout << "¬ведите координаты второй шахматной фигуры через пробел: ";
    cin >> positionB.first >> positionB.second;
    if ((abs(positionA.first - positionB.first) / abs(positionA.second - positionB.second)) == 1){
        positive_result();
    }
    else{
        negative_result();
    }
//    про корол€
    cout << "¬ведите координаты первой шахматной фигуры через пробел: ";
    cin >> positionA.first >> positionA.second;
    cout << "¬ведите координаты второй шахматной фигуры через пробел: ";
    cin >> positionB.first >> positionB.second;
    if ((positionA.first + 1 == positionB.first) || (positionA.first - 1 == positionB.first) || (positionA.second + 1 == positionB.second) || (positionA.second - 1 == positionB.second) || (positionB.second == positionA.first + 1) || (positionB.second == positionA.first - 1)){
        positive_result();
    }
    else{
        negative_result();
    }
//    про ферз€
    cout << "¬ведите координаты первой шахматной фигуры через пробел: ";
    cin >> positionA.first >> positionA.second;
    cout << "¬ведите координаты второй шахматной фигуры через пробел: ";
    cin >> positionB.first >> positionB.second;
    if (((abs(positionA.first - positionB.first) / abs(positionA.second - positionB.second)) == 1 ) ||(positionA.first + 1 == positionB.first) || (positionA.first - 1 == positionB.first) || (positionA.second + 1 == positionB.second) || (positionA.second - 1 == positionB.second)){
        positive_result();
    }
    else{
        negative_result();
    }
    //про пешку
    positionA = first_input();
    positionB = second_input();
    cout << positionA.first << " " << positionA.second << endl;
    cout << positionB.first << " " << positionB.second << endl;
    if (positionA.first + 1 == positionB.second || positionA.second + 1 == positionB.first){
        positive_result();
    }
    else{
        negative_result();
    }
    return 0;
}


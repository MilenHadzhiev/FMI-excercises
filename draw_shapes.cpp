#include <iostream>

int main() {
// По дадено число N изкарайте на екрана квадрат от N x N символи, където по главния диагонал стоят нули, над него +, а под него -.

// Вход:
// 4
// Изход:

// 0+++
// -0++
// --0+
// ---0
//    int n;
//    std::cin >> n;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (j < i) {
//                std::cout << '-';
//            }
//            else if (i == j) {
//                std::cout << '0';
//            }
//            else {
//                std::cout << '+';
//            }
//        }
//        std::cout << std::endl;
//    }
//    int floors, rooms;
//    std::cin >> floors >> rooms;
//
//    for (int i = floors; i > 0; i--) {
//        for (int j = 1; j <= rooms; j++) {
//            if (i == floors) {
//                std::cout << 'L' << i << j << ' ';
//            } else if (i % 2 == 0) {
//                std::cout << 'O' << i << j << ' ';
//            } else {
//                std::cout << 'A' << i << j << ' ';
//            }
//        }
//        std::cout << std::endl;
//
//    }
// Принтира квадрат с + в ъглите, - по дължина и | по широчина
//    int a, b;
//    std::cin >> a >> b;
//
//    std::cout << '+';
//    for (int i = 0; i < a - 2; i++) {
//        std::cout << '-';
//    }
//    std::cout << '+' << std::endl;
//
//    for (int i = 1; i < b - 2; i++) {
//        std::cout << '|';
//        for (int j = 1; j < a - 1; j++) {
//            std::cout << ' ';
//        }
//        std::cout << '|' << std::endl;
//    }
//    std::cout << '+';
//    for (int i = 0; i < a - 2; i++) {
//        std::cout << '-';
//    }
//    std::cout << '+';

// кух ромб
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << ' ';
        }
        std::cout << '*';
        for (int j = 1; j <= i * 2 - 1; j++) {
            std::cout << ' ';
        }
        if (i != 0) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    for (int i = n; i >= 0 ; i--) {
        for (int j = n - i; j >= 1; j--) {
            std::cout << ' ';
        }
        std::cout << '*';
        for (int j = i * 2 - 1; j >= 1; j--) {
            std::cout << ' ';
        }
        if (i != 0) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}
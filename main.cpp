#include <iostream>

int main() {
    // zadacha 1 a)
//    int a, b, c;
//    std::cin >> a >> b >> c;
//    bool result = ((a >= 0 && b >= 0) || (a >= 0 && c >= 0) || (b >= 0 && c >= 0) &&
//            ((a % 7 == 0 && b % 7 != 0 && c % 7 != 0) ||
//            (a % 7 != 0 && b % 7 == 0 && c % 7 != 0 ) ||
//            (a % 7 != 0 && b % 7 != 0 && c % 7 == 0)));
//    std::cout << std::boolalpha << result;

    // zadacha 1 b)
//    double x, y;
//    std::cin >> x >> y;
//    bool result = (x <= 2 && y <= 2 && x >= -2 && y >= 0)
//            || (x == -2 || x == 2)
//            || (x <= 2 && x >= -2 && y > -1 && y <= 2);
//    std::cout << std::boolalpha << result;

    // zadacha 2
//    int firstNum, secondNum;
//    std::cin >> firstNum >> secondNum;
//    if (firstNum == secondNum) {
//        std::cout << std::boolalpha << true;
//    } else if (firstNum > secondNum){
//        int secondNumLength = 0;
//        int secNum = secondNum;
//        if (secondNum != 1) {
//            for (int i = 1; i < secondNum; i++){
//                secNum /= 10;
//                if (secNum <= 0){
//                    secondNumLength = i;
//                    break;
//                }
//            }
//        } else {
//            secondNumLength = 1;
//        }
//
//        int firstNumLength = 0;
//        int fNum = firstNum;
//        for (int i = 1; i < firstNum; i++){
//            fNum /= 10;
//            if (fNum <= 0){
//                firstNumLength = i;
//                break;
//            }
//        }
//        int tenthPower = 1;
//        for (int i = 1; i <= firstNumLength - secondNumLength; i++){
//            tenthPower *= 10;
//        }
//        firstNum /= tenthPower;
//        std::cout << std::boolalpha << (firstNum == secondNum);
//    }else {
//        std::cout << std::boolalpha << false;
//    }

    // zadacha 3
//    int size;
//    std::cin >> size;
//    if (size >= 3 && size <= 25) {
//        for (int i = 0; i < size; i++) {
//            for (int j = 0; j < i; j++) {
//                std::cout << ' ';
//            }
//            if (i == 0 || i == size - 1) {
//                std::cout << "*****";
//            } else {
//                std::cout << "*   *";
//            }
//
//            for (int j = size * 2 - i * 2; j > 2; j--) {
//                std::cout << ' ';
//            }
//
//            if (i == 0 || i == size - 1) {
//                std::cout << "*****";
//            } else {
//                std::cout << "*   *";
//            }
//            std::cout << std::endl;
//        }
//    }
//    double x, y;
//    std::cin >> x >> y;
//    bool right = ((2 - x) * (2 - x) + y * y <= 2 * 2) && x >= 0 && x <= 2;
//    bool left = ((-2 - x) * (-2 - x) + y * y <= 2 * 2) && x >= -2 && x <= 0;
//    std::cout << std::boolalpha << right || left;
    std::cout << min_of_three(1, 4, 2);
    return 0;
}
#include <iostream>
#include <unordered_map>

int main() {
    // zadacha 1
//    int tone1, octave1, tone2, octave2; //  Тонът е цифра от 0 до 6 -> до = 0; ре = 1 и т.н.
//    std::cin >> tone1 >> octave1 >> tone2 >> octave2;
//    if (tone1 >= 0 && tone1 <= 6 && //  Проверка дали входа е правилен
//    tone2 >= 0 && tone2 <= 6 &&
//    octave1 >= 1 && octave1 <= 8 &&
//    octave2 >= 1 && octave2 <= 8) {
//        std::unordered_map<int, std::string> intervals = { // По-лесно е от суичове
//                {0, "Normal"}, // Нормален звук / Прима
//                {1, "Fake"}, // Фалшив / Секунда
//                {2, "Best sound"}, // Най-благоприятен / Терца
//                {3, "Normal"}, // Нормален звук / Кварта
//                {4, "Hollow"}, // Кух звук / Квинта
//                {5, "Normal"}, // Нормален звук / Секста
//                {6, "Fake"}, // Нормален звук / Септима
//                {7, "Normal"}, // Нормален звук / Октава
//        };
//        int interval = 0;
//        if (tone2 > tone1) {
//            std::cout << intervals[tone2 - tone1]; // Проверява интервала, когато вторият тон е по-висок от първия
//        } else {
//            for (int i = tone1 - 7; i < tone1; i++) { // Проверява интервала, когато първият тон е по-висок от втория
//                if (i != tone2) {
//                    interval += 1;
//                } else {
//                    break;
//                }
//            }
//            std::cout << intervals[interval];
//        }
//    }


    // zadacha 2
//    int number_arabic;
//    std::cin >> number_arabic;
//    if (number_arabic == 1000) {
//        std::cout << 'M';
//    } else if (number_arabic < 1000) {
//        std::string roman_nums[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
//        int int_values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//        for (int i = 0; i < 13; i++){
//            while (number_arabic - int_values[i] >= 0) {
//                std::cout << roman_nums[i];
//                number_arabic -= int_values[i];
//            }
//        }
//    }


    // zadacha 3
//    int number;
//    std::cin >> number;
//    if (number >= 100 && number < 1000) {
//        int n = number / 100 + (number / 10) % 10;
//        int m = number / 100 + number % 10;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                if (number % 5 == 0) {
//                    number -= (number / 100);
//                } else if (number % 3 == 0){
//                    number -= ((number / 10) % 10);
//                } else {
//                    number += (number % 10);
//                }
//                std::cout << number << ' ';
//            }
//            std::cout << std::endl;
//        }
//    }
    // zadacha 4
//    int number;
//    std::cin >> number;
//    if (number > 0) {
//        while (number > 1) {
//            if (number % 2 == 0) {
//                number /= 2;
//            } else {
//                number = number * 3 + 1;
//            }
//            for (int i = 1; i <= (number / 10) + 1; i++) {
//                std::cout << '*';
//            }
//            std::cout << number << std::endl;
//        }
//    }
    return 0;
}

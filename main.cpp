#include <iostream>
#include <string>

int main() {
    std::string strInput, number1str = "", number2str = "";
    std::cout << "Input your mathematical expression in format <number1><action><number2>: ";
    std::cin >> strInput;
    double result;

    char action = '0';

    for (int i = 0; i < strInput.length(); ++i) {
        if (strInput[i] == '+' || strInput[i] == '-' || strInput[i] == '/' || strInput[i] == '*') {
            action = strInput[i];
        } else {
            if (action == '0') {
                number1str += strInput[i];
            } else {
                number2str += strInput[i];
            }
        }
    }

    double number1d = std::stod(number1str);
    double number2d = std::stod(number2str);
    if (action == '+') {
        result = number1d + number2d;
    }
    if (action == '-') {
        result = number1d - number2d;
    }
    if (action == '/') {
        result = number1d / number2d;
    }
    if (action == '*') {
        result = number1d * number2d;
    }
    std::cout << result;
    return 0;
}

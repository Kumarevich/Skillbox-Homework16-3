#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string strInput;
    std::cout << "Input your mathematical expression in format <number1><action><number2>: ";
    std::cin >> strInput;
    std::stringstream ss;
    ss << strInput;
    double result, first, second;
    char action;

    ss >> first;
    ss >> action;
    ss >> second;

    if (action == '+') {
        result = first + second;
    } else if (action == '-') {
        result = first - second;
    } else if (action == '/') {
        result = first / second;
    } else if (action == '*') {
        result = first * second;
    }
    std::cout << result;
    return 0;
}

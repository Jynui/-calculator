#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /, ^, sqrt, %, !): ";
    cin >> operation;

    if (operation == '!' || operation == 'sqrt' || operation == '%') {
        switch (operation) {
            case '!':
                if (num1 >= 0 && num1 == static_cast<int>(num1)) {
                    int result = 1;
                    for (int i = 1; i <= num1; ++i) {
                        result *= i;
                    }
                    cout << "Факториал числа " << static_cast<int>(num1) << " равен " << result << endl;
                } else {
                    cout << "Ошибка: Факториал применим только к неотрицательным целым числам." << endl;
                }
                break;
            case 'sqrt':
                if (num1 >= 0) {
                    cout << "Квадратный корень из " << num1 << " равен " << sqrt(num1) << endl;
                } else {
                    cout << "Ошибка: Нельзя извлечь квадратный корень из отрицательного числа." << endl;
                }
                break;
            case '%':
                cout << "1 процент от " << num1 << " равен " << num1 / 100.0 << endl;
                break;
        }
    } else {
        cout << "Введите второе число: ";
        cin >> num2;

        switch (operation) {
            case '+':
                cout << "Результат: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Результат: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Результат: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Результат: " << num1 / num2 << endl;
                } else {
                    cout << "Ошибка: Нельзя делить на ноль." << endl;
                }
                break;
            case '^':
                cout << "Результат: " << pow(num1, num2) << endl;
                break;
            default:
                cout << "Ошибка: Неверная операция." << endl;
        }
    }

    return 0;
}
12

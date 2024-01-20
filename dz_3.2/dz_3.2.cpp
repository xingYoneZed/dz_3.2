

#include <iostream>

class Counter {
private:
    int value;

public:
   
    Counter() : value(1) {}

   
    Counter(int initialValue) : value(initialValue) {}

    void increment() {
        value++;
    }

   
    void decrement() {
        value--;
    }

   
    int getValue() const {
        return value;
    }
};

int main() {
    setlocale(LC_ALL, "russian");

    char command;
    Counter counter;

 
    std::cout << "Вы хотите указать начальное значение счетчика? Введите 'да' или 'нет': ";
    std::string userInput;
    std::cin >> userInput;

    if (userInput == "да") {
        int initialValue;
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> initialValue;
        Counter counterWithInitialValue(initialValue);
        counter = counterWithInitialValue;
    }

    
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (command) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << counter.getValue() << std::endl;
            break;
        case 'x':
            std::cout << "Программа завершена.\n";
            break;
        default:
            std::cout << "Некорректная команда. Пожалуйста, введите '+', '-', '=', или 'x'.\n";
        }

    } while (command != 'x');

    return 0;
}

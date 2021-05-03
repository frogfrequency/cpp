
#include <iostream>
using namespace std;

double getUserNumber() {
    double x{};
    cout << "enter a numbaaah\n";
    cin >> x;
    return x;
}

int main()
{
    double a{ getUserNumber() };
    double b{ getUserNumber() };

    char operation{};
    double result{};
    

    cout << "Enter one of the following: +, -, *, or /: *\n";
    cin >> operation;

    if (operation == '+') {
        result = a + b;
    }
    else if (operation == '-') {
        result = a - b;
    }
    else if (operation == '*') {
        result = a * b;
    }
    else if (operation == '/') {
        result = a / b;
    }
    else {
        cout << "something went wrong.. no valid operation entered";
    }
    cout << a << " " << operation << " " << b << " = " << result << "\n";
    return 0;
}


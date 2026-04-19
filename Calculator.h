// Advanced Engineering Calculator by Andrusik

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator() {}
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);

    double Calculator::multiply(double a, double b) {
        return a * b;
    }

    double Calculator::divide(double a, double b) {
        return a / b;
    }

    ~Calculator() {}
};

#endif

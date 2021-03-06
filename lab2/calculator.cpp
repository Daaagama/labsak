#include <iostream>
#include <stdexcept>
#include "calculator.h"


double Calculator::Add (double a, double b) {
	return a + b;
}

double Calculator::Sub (double a, double b) {
	return Add (a, -b);
}

double Calculator::Mul (double a, double b) {
	return a * b;
}

double Calculator::Div (double a, double b) {
    if (b == 0) {
        std::cerr << "Division by zero!\n";
        throw std::exception();
    } else {
        return a / b;
    }
}

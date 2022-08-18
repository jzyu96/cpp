#ifndef ALGEBRA_H
#define ALGEBRA_H

class algebra {
public:
    // sf function: simplifies fractions
    static std::pair<int, int> sf(int x, int y);

    // ef function: estimates a decimal as a fraction, or finds exact value
    static std::pair<int, int> ef(double x);

    // intPow function
    static double intPow(double a, int b);

    // intRt function
    static double intRt(double a, int b);

    // pow function
    static double pow(double a, double b);

    // ln function
    static double ln(double x);

    // log function
    static double log(int a, int b);






};

#endif // ALGEBRA_H
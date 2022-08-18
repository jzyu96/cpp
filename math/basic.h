#ifndef BASIC_H
#define BASIC_H

class basic {
public:
    // abs function: returns absolute value
    static double abs(double x);

    // even: true if even, false otherwise
    static bool even(int x);

    // odd: true if odd, false otherwise
    static bool odd(int x);

    // mean : returns mean
    double mean(double arr[], int size);

    // multArr : multiplies each number in an array by a given multiplier
    double * multArr(double arr[], int size, double mult);

    // swap :
    void swap(double *a, double *b);
};

#endif // BASIC_H
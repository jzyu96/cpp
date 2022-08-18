// BASIC FUNCTIONS:

// abs: takes the absolute value of a double
double abs(double x) {
    x = (x >= 0) ? x : (-1 * x);
    return x;
}

// even : takes an int and returns if its even
bool even(int x) {
    return (x % 2 == 0);
}

// odd : takes an int and returns if its odd
bool odd(int x) {
    return (x % 2 == 1);
}

// mean : returns the mean of a list of numbers
double mean(double arr[], int size) {
    double s = 0.0;
    for (int i = 0; i < size; i++) {
        s += arr[i];
    }
    return s / size;
}

// multArr: multiplies each item in an array by mult
void multArr(double *arr, int size, double mult) {
    for (int i = 0; i < size; i++) {
        arr[i] *= mult;
    }
}

// swap : swap two points
void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}
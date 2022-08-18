// ALGEBRA FUNCTIONS

// sf: simplify a fraction of two positives
std::pair<int, int> sf(int x, int y) {
    int neg = (x < 0 || y < 0) ? -1 : 1;
    if (neg != 1) {
        x = abs(x), y = abs(y);
    }

    int index = (x < y) ? x : y;
    while (index > 1) {
        if (x % index == 0 && y % index == 0) {
            std::pair<int, int> p = sf(x / index, y / index);
            x = p.first;
            y = p.second;
        }
        index -= 1;
    }

    return std::make_pair(neg * x, y);
}


// ef: estimate a double or float as a fraction
std::pair<int, int> ef(double x) {
    return sf(x * 100000, 100000);
}


// (int) power: returns a^b, given b is an integer and > 0
double intPow(double a, int b) {
    double ret = 1.0;
    while (b > 0) {
        ret = ret * a;
        b -= 1;
    }
    return ret;
}


// (int) root: returns rt-b of a, given b is an integer and > 0
double intRt(double a, int b) {
    double rt, x = 0.0, y = a;
    while (y - x > 0.00001) {
        rt = (x + y) / 2;
        if (intPow(rt, b) < a) {
            x = rt;
        } else {
            y = rt;
        }
    }
    return rt;
}


// power: returns a^b: cant be a negative number to an even root
double pow(double a, double b) {
    std::pair<int, int> p = ef(b);
    int powFc = p.first, rtFc = p.second;
    bool neg = (powFc < 0 || rtFc < 0) ? true : false;
    if (neg) {
        powFc = abs(powFc), rtFc = abs(rtFc);
    }

    double ret;
    ret = intRt(a, rtFc);
    ret = intPow(ret, powFc);

    if (neg) {
        return 1 / ret;
    } else {
        return ret;
    }
}

// ln: returns ln(x), given x > 0
double ln(double x) {
    double k = (x - 1) / (x + 1), s = 0.0, i;
    for (int n = 0; n < 100; n++) {
        i = 1.0 + 2.0 * n;
        s += (1 / i) * intPow(k, i);
    }
    return 2 * s;
}

// log: returns log of a given a and b both > 0
double log(double a, double b) {
    return ln(a) / ln(b);
}



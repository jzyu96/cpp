#include <iostream>
#include "basic.cpp"
#include "algebra.cpp"
#include "linalg.cpp"


int main() {
/*
    int arr[3][4] = {{8, 9, 2, -3}, {6, 2, 1, -3}, {1, 8, 7, 13}};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    std::cout << arrSize << "\n";
*/
/*
    double arr[1] = {0.123};
    double arr2[1] = {0.321};

    swap(arr, arr2);
    std::cout << arr2[0];
*/

    int arr[3][4] = {{8, 9, 2, -3}, {6, 2, 1, -3}, {1, 8, 7, 13}};
    std::cout << rowReduce(arr, 3, 4)[0][0];


    return 0;
}
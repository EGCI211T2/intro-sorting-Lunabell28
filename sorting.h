#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <iomanip>

using namespace std;


void swap_numbers(int &a, int &b);
void display(int *a, int N);
void sort(int *a, int N);


void swap_numbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void display(int *a, int N) {
    for (int i = 0; i < N; i++) {
        cout << setw(5) << a[i];
    }
    cout << endl;
}

void sort(int *a, int N) {
    int i, k;
    for (i = 1; i < N; i++) {
       
        for (k = i - 1; k >= 0; k--) {
            if (a[k] > a[k + 1]) {
                swap_numbers(a[k], a[k + 1]);
            } else {
                break;
            }
        }
    }
}

#endif

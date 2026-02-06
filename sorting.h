#include <iostream>  
#include <iomanip>   
using namespace std; 

void swap(int &a, int &b);
void sort(int *a, int N);
void display(int *a, int N);


void swap(int &a, int &b) {
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
                swap(a[k], a[k + 1]);
            } else {
               
                break;
            }
        }
    }
}
#include <iostream>
#include <cstdlib>
#include <cctype> /
#include "sorting.h"

using namespace std;

int main(int argc, char * argv[]) {
    int i;
    int *a;
    int N = 0; 
    for (i = 1; i < argc; i++) {
        bool isNumber = true;
        int startCheck = 0;
        if (argv[i][0] == '-') startCheck = 1;
        for (int j = startCheck; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                isNumber = false;
                break;
            }
        }
    
        if (isNumber) {
            N++;
        }
    }

    if (N == 0) {
        cout << "No numbers to sort." << endl;
        return 0;
    }

    a = new int[N];
    int current_index = 0;
    for (i = 1; i < argc; i++) {
        bool isNumber = true;
        int startCheck = 0;
        if (argv[i][0] == '-') startCheck = 1;
        
        for (int j = startCheck; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                isNumber = false;
                break;
            }
        }

        if (isNumber) {
            a[current_index] = atoi(argv[i]);
            current_index++;
        }
    }

    cout << "Before sorting: ";
    display(a, N);
    
    sort(a, N);
    
    cout << "After sorting:  ";
    display(a, N);
    
    delete[] a;
    
    return 0;
}

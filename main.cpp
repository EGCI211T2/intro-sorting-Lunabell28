#include <iostream>
#include <cstdlib>   
#include "sorting.h" 

using namespace std;

int main(int argc, char * argv[]) {
    int i, N;
    int *a;

    N = argc - 1;

    if (N <= 0) {
        cout << "No numbers to sort." << endl;
        return 0;
    }

    a = new int[N];

    for(i = 0; i < N; i++){
        a[i] = atoi(argv[i + 1]);
    }

    cout << "Before sorting: ";
    display(a, N);
    
    sort(a, N);
    
    cout << "After sorting:  ";
    display(a, N);
    
    delete[] a;
    
    return 0;
}
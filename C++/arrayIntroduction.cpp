#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N; int ptr1, ptr2; int temp;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    ptr1 = 0, ptr2 = N - 1;
    while (ptr1 < ptr2) {
        temp = arr[ptr1];
        arr[ptr1] = arr[ptr2];
        arr[ptr2] = temp;
        ptr1++;
        ptr2--;
    }
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

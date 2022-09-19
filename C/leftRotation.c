int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    *result_count = arr_count;
    int ptr1, ptr2;
    ptr1 = 0;
    ptr2 = arr_count - 1;
    while (ptr1 < ptr2) {
        int temp = *(arr + ptr1);
        *(arr + ptr1) = *(arr + ptr2);
        *(arr + ptr2) = temp;
        ptr1++;
        ptr2--;
    }
    ptr2 = arr_count - 1;
    ptr1 = arr_count - d;
    while (ptr1 < ptr2) {
        int temp = *(arr + ptr1);
        *(arr + ptr1) = *(arr + ptr2);
        *(arr + ptr2) = temp;
        ptr1++;
        ptr2--;
    }
    ptr1 = 0;
    ptr2 = arr_count - d - 1;
    while (ptr1 < ptr2) {
        int temp = *(arr + ptr1);
        *(arr + ptr1) = *(arr + ptr2);
        *(arr + ptr2) = temp;
        ptr1++;
        ptr2--;
    }
    return arr;
}
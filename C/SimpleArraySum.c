int simpleArraySum(int ar_count, int* ar) {
    int hasil=0;
    for (int i=0;i<ar_count;i++)
    {
        hasil = hasil + ar[i];
    }
    return hasil;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int remain;
    int sum = 0;
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while (n>0)
    {
        remain = n % 10;
        sum += remain;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
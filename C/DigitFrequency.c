#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int count;
    char str[1000];
    int ascii = 48;
    
    scanf("%[^\n]", str);
    
    for (int i = 0; i < 10; i++) {
        count = 0;
        for (int j = 0; j < strlen(str); j++) {
            if ((int) str[j] == ascii) {
                count++;
            }
        }
        ascii++;    
        printf("%d ", count);
    }  
    return 0;
}
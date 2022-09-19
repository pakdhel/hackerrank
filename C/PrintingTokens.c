#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int len;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    len = strlen(s);
    
    for (int i=0;i<len;i++)
    {
        if ((int)s[i] != (char)32)
        {
            printf("%c", s[i]);
        }
        else {
            printf("\n");
        }
    }
    //Write your logic to print the tokens of the sentence here.
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    double s[n];
    double p[n];
    double temp;
    int index;
    for (int i = 0; i < n; i++) {
        p[i] = (double) ((tr[i].a + tr[i].b + tr[i].c) / (double) 2);
        s[i] = sqrt(fabs((double) (p[i] * (p[i] - (double) tr[i].a) * (p[i] - (double) tr[i].b) * (p[i] - (double) tr[i].c))));
    }
    
    for (int i = 0; i < n - 1; i++) {
        index = i;
        for (int j = i + 1; j < n; j++) {
            if (s[j] < s[index]) {
                index = j;
            }
        }
        temp = tr[i].a;
        tr[i].a = tr[index].a;
        tr[index].a = temp;
        
        temp = tr[i].b;
        tr[i].b = tr[index].b;
        tr[index].b = temp;
        
        temp = tr[i].c;
        tr[i].c = tr[index].c;
        tr[index].c = temp;
        
        temp = s[i];
        s[i] = s[index];
        s[index] = temp;
    }
}


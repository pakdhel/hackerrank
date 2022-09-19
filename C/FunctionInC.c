#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four();
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int w,int x,int y, int z)
{
    int maks;
    if (w>x && w>y && w>z)
    {
        maks = w;
    }
    else if (x>w && x>y && x>z)
    {
        maks = x;
    }
    else if (y>w && y>x && y>z)
    {
        maks = y;
    }
    else 
    {
        if (z>w && z>x && z>y)
        {
            maks = z;
        }
    }
    return maks;
}
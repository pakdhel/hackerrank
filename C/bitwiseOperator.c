#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int And, Or, Xor;
  int mAnd = 0, mOr = 0, mXor = 0;
  for(int i=1;i<=k;i++){
    for(int j=i+1;j<=n;j++){
        And = i & j;
        Or = i | j;
        Xor = i ^ j;
        if (And > mAnd && And < k && And < n) {
            mAnd = And;
        }
        if (Or > mOr && Or < k && Or < n) {
            mOr = Or;
        }
        if (Xor > mXor && Xor < k && Xor < n) {
            mXor = Xor;
        }
    }
  }
  printf("%d\n%d\n%d\n",mAnd,mOr,mXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

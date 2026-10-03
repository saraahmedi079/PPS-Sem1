#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int ma = 0;
    int mo = 0;
    int mx = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int a = i & j;
            int o = i | j;
            int x = i ^ j;
            
            if (a < k && a > ma) {
                ma = a;
            }
            if (o < k && o > mo) {
                mo = o;
            }
            if (x < k && x > mx) {
                mx = x;
            }
        }
    }
    printf("%d\n", ma);
    printf("%d\n", mo);
    printf("%d\n", mx);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

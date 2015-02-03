#include <stdio.h>
#include <math.h>
int main(){
    int n, x;
    printf("F(x,N) = 1*x+2*x^2+...+(n-1)x^(n-1)\n");
    printf("Inserisci x:");
    scanf("%d", &x);
    printf("Inserisci n:");
    scanf("%d", &n);
    printf("F(%d, %d) è : %d", x, n, rec_seq(x, n));
}
int rec_seq(int x, int n){
  //???????????????
}

#include<stdio.h>
int main() {
    int a, b, c, sum = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    c = b;
    for (int i=0; i<3; i++) {
        printf("%d\n", a*(c%10));
        c=c/10;
    }
    printf("%d\n", a*b);
    return 0;
}
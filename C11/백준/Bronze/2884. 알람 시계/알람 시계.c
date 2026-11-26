#include<stdio.h>
int main() {
    int s, m;
    scanf("%d %d", &s, &m);
    if (m < 45) {
        if (s == 0) {
            s = 23;
        }
        else {
            s -= 1;
        }
        m += 15;
    }
    else {
        m -= 45;
    }
    printf("%d %d", s, m);
}
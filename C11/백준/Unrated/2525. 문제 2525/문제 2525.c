#include <stdio.h>
int main() {
    int s, m, t;
    scanf("%d %d", &s, &m);
    scanf("%d", &t);
    m += t;
    if (m >= 60) {
        s += m / 60;
        m = m % 60;
    }
    if (s >= 24) {
        s %= 24;
    }
    printf("%d %d\n", s, m);
    return 0;
}
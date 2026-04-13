#include<stdio.h>
int pib (int n) {
    if (n==1) {
        return 1;
    }
    else if (n==0) {
        return 0;
    }
    return pib(n-1) + pib(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", pib(n));
    return 0;
}
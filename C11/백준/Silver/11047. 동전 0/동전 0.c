#include<stdio.h>
int main() {
    int n, k, i, sum=0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=n-1;i>=0;i--) {
        sum+=k/a[i];
        k%=a[i];
        if(k==0) {
            break;
        }
    }
    printf("%d", sum);
    return 0;
}
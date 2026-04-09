#include<stdio.h>
int main() {
    int t, k, n, i, j, m; //k는 층, n은 호
    int a[20][20];
    scanf("%d", &t);
    for(i=0; i<t;i++) {
        scanf("%d", &k);
        scanf("%d", &n);
        for(j=1;j<=n;j++) {
            a[0][j]=j;
        }
        for(j=0;j<=k;j++) {
            a[j][0]=0;
        }
        for(j=1;j<=k;j++) {
            for(m=1;m<=n;m++) {
                a[j][m]=a[j][m-1]+a[j-1][m];
            }
        }
        printf("%d\n", a[k][n]);
    }
    return 0;
}
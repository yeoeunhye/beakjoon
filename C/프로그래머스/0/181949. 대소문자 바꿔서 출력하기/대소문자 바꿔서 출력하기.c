#include <stdio.h>
#define LEN_INPUT 21

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for(int i=0;i<LEN_INPUT;i++){
        if (s1[i]>=65 && s1[i]<=90) {
            printf("%c", s1[i]+32);
        }
        else if (s1[i]>=97 && s1[i]<=122){
            printf("%c", s1[i]-32);
        }
        else{
            return 0;
        }
    }
    return 0;
}

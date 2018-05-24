#include <stdio.h>

int main(void) {
    int i, N;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        if (i % 3 != 0, i % 13 != 0) {
            printf("%d ", i);
        }
    }
}

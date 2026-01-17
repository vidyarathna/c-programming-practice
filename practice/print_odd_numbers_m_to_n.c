#include <stdio.h>

int main() {
    int M, N, i;

    printf("Enter M and N:\n");
    scanf("%d %d", &M, &N);

    if (M <= N) {
        for (i = M; i <= N; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    } else {
        for (i = M; i >= N; i--) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");

    /*
    Time Complexity: O(|N - M|)
    Reason: Each number in the range is checked once.

    Space Complexity: O(1)
    Reason: Uses only constant extra memory.
    */

    return 0;
}

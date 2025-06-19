#include <stdio.h>

int main() {
    int n;

    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int a[n];

    printf("Nhập %d phần tử:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCác phần tử lớn hơn tất cả các phần tử sau nó là:\n");

    for (int i = 0; i < n - 1; i++) {
        int isGreater = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] <= a[j]) {
                isGreater = 0;
                break;
            }
        }
        if (isGreater) {
            printf("%d ", a[i]);
        }
    }

    printf("%d\n", a[n - 1]);

    return 0;
}

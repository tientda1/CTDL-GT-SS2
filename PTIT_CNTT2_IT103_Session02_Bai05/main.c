#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos;

    do {
        printf("Nhap so luong phan tu n (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    printf("Nhap %d phan tu cua mang:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do {
        printf("Nhap vi tri muon xoa (0 <= vi tri < %d): ", n);
        scanf("%d", &pos);
    } while (pos < 0 || pos >= n);

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; //

    printf("Mang sau khi xoa:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

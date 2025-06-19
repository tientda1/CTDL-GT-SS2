#include <stdio.h>

int main() {
    int arr[100];
    int n, i, temp;

    do {
        printf("Nhap so luong phan tu n (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    printf("Nhap %d phan tu cua mang:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Mang sau khi dao nguoc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max;

    do {
        printf("Nhap so phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

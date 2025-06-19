#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, newValue;
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
        printf("Nhap vi tri muon sua (0 <= vi tri < %d): ", n);
        scanf("%d", &pos);
    } while (pos < 0 || pos >= n);

    printf("Nhap gia tri moi tai vi tri %d: ", pos);
    scanf("%d", &newValue);

    arr[pos] = newValue;

    printf("Mang sau khi cap nhat:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

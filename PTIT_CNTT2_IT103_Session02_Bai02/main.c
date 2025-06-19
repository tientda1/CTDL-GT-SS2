#include <stdio.h>

int main() {
    int n, i, x, count = 0;
    int arr[100];
    do {
        printf("Nhap so luong phan tu n (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    printf("Nhap %d phan tu cua mang:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so can dem: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("So %d xuat hien %d lan trong mang.\n", x, count);

    return 0;
}

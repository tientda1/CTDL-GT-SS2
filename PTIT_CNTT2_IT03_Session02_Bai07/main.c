#include <stdio.h>

int main() {
    int n, i, j, target, found = 0;

    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int a[n];

    printf("Nhập các phần tử của mảng:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhập một số nguyên bất kỳ: ");
    scanf("%d", &target);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] + a[j] == target) {
                printf("Cặp phần tử có tổng bằng %d là: %d và %d (a[%d] + a[%d])\n",
                       target, a[i], a[j], i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found)
        printf("Không tìm thấy cặp phần tử nào có tổng bằng %d\n", target);

    return 0;
}

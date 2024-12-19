#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
    }

    int hasDuplicate = 0;
    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            int alreadyPrinted = 0;
            for (int j = 0; j < i; j++) {
                if (arr[j] == arr[i]) {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if (!alreadyPrinted) {
                printf("Phan tu %d xuat hien %d lan.\n", arr[i], count[i]);
                hasDuplicate = 1;
            }
        }
    }

    if (!hasDuplicate) {
        printf("Khong co phan tu lap lai.\n");
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findDuplicates(arr, n);

    return 0;
}


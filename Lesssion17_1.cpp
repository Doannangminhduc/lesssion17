#include <stdio.h>

void displayArray(int *arr, int size) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int size, choice;
    int arr[100];

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap vao so phan tu mang: ");
                scanf("%d", &size);

                printf("Nhap vao cac phan tu:\n");
                for (int i = 0; i < size; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }

            case 2: {
                if (size > 0) {
                    displayArray(arr, size);
                } else {
                    printf("Vui long nhap mang truoc.\n");
                }
                break;
            }

            case 3: {
                if (size > 0) {
                    printf("Do dai mang: %d\n", size);
                } else {
                    printf("Vui long nhap mang truoc.\n");
                }
                break;
            }

            case 4: {
                if (size > 0) {
                    printf("Tong cac phan tu trong mang: %d\n", sumArray(arr, size));
                } else {
                    printf("Vui long nhap mang truoc.\n");
                }
                break;
            }

            case 5: {
                if (size > 0) {
                    printf("Phan tu lon nhat trong mang: %d\n", findMax(arr, size));
                } else {
                    printf("Vui long nhap mang truoc.\n");
                }
                break;
            }

            case 6: {
                printf("Thoat chuong trinh.\n");
                return 0;
            }

            default: {
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
            }
        }
    }

    return 0;
}


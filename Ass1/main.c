#include <stdio.h>
#include "function_array.h"

int main() {

    char choice;
    int n = 0;
    int s_Max_array = 100;
    int a[s_Max_array];
    int k = 0;
    int x = 0;
    int found = 0;

    do {
        printf("\t\t\tChon 1 chuc nang de thuc hien chuong trinh:\n");
        printf("\t\t\t=======================\n");
        printf("\t\t\tc. Tao mang so nguyen.\n");
        printf("\t\t\tp. In day so nguyen.\n");
        printf("\t\t\ti. Them 1 phan tu vao day vi tri thu k.\n");
        printf("\t\t\td. Xoa 1 phan tu vao day vi tri thu k.\n");
        printf("\t\t\ts. Sap xep day so theo chieu tang dan.\n");
        printf("\t\t\tx. Sap xep day so theo chieu giam dan.\n");
        printf("\t\t\tt. Tim kiem 1 so x co trong day so.\n");
        printf("\t\t\te. Thoat chuong trinh.\n");
        printf("\t\t\t=======================\n");
		
		fflush(stdin);
        scanf("%c", &choice);

        switch (choice) {
            case 'c':
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                init_array(a, n);
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &a[i]);
                }
                printf("Mang vua nhap la: ");
                print_array(a, n);
                break;
            case 'p':
                if (n == 0) {
                    printf("Day so hien tai la day rong!\n");
                } else {
                    printf("Day so hien tai la: ");
                    print_array(a, n);
                }
                break;
            case 'i':
                if (n == 0) {
                    printf("Khong the them phan tu vao day rong!\n");
                } else {
                    printf("Nhap vi tri can chen: ");
                    scanf("%d", &k);
                    printf("Nhap gia tri can chen: ");
                    scanf("%d", &x);
                    insert_array(a, k, x, &n);
                    printf("Mang sau khi chen la: ");
                    print_array(a, n);
                }
                break;
            case 'd':
                if (n == 0) {
                    printf("Day so hien tai la day rong!\n");
                } else {
                    printf("Nhap vi tri can xoa: ");
                    scanf("%d", &k);
                    delete_array(a, k, &n);
                    printf("Mang sau khi xoa la: ");
                    print_array(a, n);
                }
                break;
            case 's':
                if (n == 0) {
                    printf("Day so hien tai la day rong!\n");
                } else {
                    sort_array_ascending(a, n);
                    printf("Day so sau khi sap xep tang dan la: ");
                    print_array(a, n);
                }
                break;
            case 'x':
                if (n == 0) {
                    printf("Day so hien tai la day rong!\n");
                } else {
                    sort_array_descending(a, n);
                    printf("Day so sau khi sap xep giam dan la:");
					sort_array_descending(a, n);
					print_array(a, n);
                }
                break;
            case 't':
                if (n == 0) {
                    printf("Day so hien tai la day rong!\n");
                } else {
                    printf("Nhap gia tri can tim: ");
                	scanf("%d", &x);
                	found = search_array(a, n, x);
                if (found == -1) {
                    printf("%d khong co trong day!\n", x);
                } else {
                    printf("%d co trong day, nam o vi tri %d!\n", x, found);
                }
            }
            break;
        case 'e':
            printf("Cam on ban da su dung Chuong Trinh Quan Ly Mang So Nguyen. Goodbye!");
            break;
        default:
            printf("Khong hop le, moi chon lai!\n");
    }
} while (choice != 'e');

return 0;
}
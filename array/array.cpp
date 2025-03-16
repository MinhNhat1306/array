#include <iostream>
#include <stdio.h>

void main() {
    // Khai báo chuỗi có ký tự kết thúc '\0'
    char str[] = { 'h','e','l','l','o','\0' };

    int i = 0; // Biến đếm số ký tự

    // Duyệt chuỗi cho đến khi gặp ký tự kết thúc '\0'
    while (str[i] != '\0') {
        i++;
    }

    // In ra số lượng ký tự
    printf("So luong ky tu trong chuoi: %d\n", i);
}
/*int main() {
    int arr[] = { 1, 2, 99, 67, 20 };
    int giatri_gc = arr[0];

    for (int i = 1; i < 5; i++) {
        if (giatri_gc < arr[i]) {
            giatri_gc = arr[i];
        }
    }

    printf("gia tri lon nhat trong mang: %d", giatri_gc);
    return 0;
}
*/
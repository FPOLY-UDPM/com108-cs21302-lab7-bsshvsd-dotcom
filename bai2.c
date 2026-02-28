/******************************************************************************
 * Họ và tên: [Võ Quốc Thinh]
 * MSSV:      [PS48006]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
int main() {
    char username[50];
    char password[50];

    printf("Nhap vao username: ");
    gets(username);
    username[strlen(username) - 1] = '\0'; // Loại bỏ ký tự newline

    printf("Nhap vao password: ");
    gets(password);
    password[strlen(password) - 1] = '\0'; // Loại bỏ ký tự newline
    // Kiểm tra username và password
    if (strcmp(username, "admin") == 0 && strcmp(password, "password123") == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap khong thanh cong!\n");
    }

    return 0;
}

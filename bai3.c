/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 5
#define MAX_LENGTH 100
int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];

    // Nhập 5 chuỗi
    for (int i = 0; i < MAX_STRINGS; i++) {
        printf("Nhap vao chuoi %d: ", i + 1);
        gets(strings[i]);
        strings[i][strlen(strings[i]) - 1] = '\0'; // Loại bỏ ký tự newline
    }

    // Sắp xếp chuỗi theo thứ tự chữ cái
    for (int i = 0; i < MAX_STRINGS - 1; i++) {
        for (int j = 0; j < MAX_STRINGS - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char temp[MAX_LENGTH];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }

    // In ra các chuỗi đã được sắp xếp
    printf("\nCac chuoi da duoc sap xep:\n");
    for (int i = 0; i < MAX_STRINGS; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

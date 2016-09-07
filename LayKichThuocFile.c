#include <stdio.h>
#include <stdlib.h>

long filesize(FILE* fp); // khai báo

int main(void)
{
    FILE* fp; // tạo con trỏ tới file
    fp = fopen("C:\\file.png","rb"); // đọc file dưới dạng binary
    if(!fp) {
        printf("Error: file not found!"); // nếu có lỗi
        exit(1);
    }
    printf("File Size: %d bytes \n", filesize(fp)); // in ra kích thước file
    return 0;
}
long filesize(FILE* fp)
{
    fseek(fp, 0, SEEK_END); // đọc file từ đầu tới cuối
    return ftell(fp); // trả về vị trí cuối cùng
}

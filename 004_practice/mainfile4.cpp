#include <stdio.h>

int main()
{
    char ch = 'A'; //문자는 작은 따옴표
    char str[20] = "Hello World!"; //문자열은 큰 따옴표
    float flt = 10.234;
    int no = 150;
    double dbl = 20.123456;

    printf("Character is %c\n", ch);
    printf("String is %s\n", str);
    printf("Floating Vaule is %f\n", flt);
    printf("Integer Vaule is %d\n", no);
    printf("Double Vaule is %f\n", dbl);
    printf("Octal Vaule is %o\n", no);
    printf("Hexadecimal Vaule is %x\n", no);
}

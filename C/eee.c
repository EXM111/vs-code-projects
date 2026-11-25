#include <stdio.h>
// #include <windows.h>

int main() 
{
    // SetConsoleOutputCP(65001);
    int a, b, c;
    printf("请输入三个数字(a,b,c):");
    scanf("%d,%d,%d", &a, &b, &c);
    printf("你输入的三个数字是：%d, %d, %d\n", a, b, c);
    return 0;
}
#include <stdio.h>
#include <windows.h>       //我的电脑得使用这个库文件才不会导致输出中文乱码
#define PI 3.1415926
int main()
{
    SetConsoleOutputCP(65001);      //我的电脑得使用这个库文件才不会导致输出中文乱码
    float r, h;
    printf("请输入圆半径r：");
    scanf("%f", &r);
    printf("请输入圆柱的高:");
    scanf("%f",&h);

    float circle_len = 2 * PI * r;         // 圆周长
    float circle_area = PI * r * r;       // 圆面积
    float ball_s = 4 * PI * r * r;         // 圆球表面积
    float ball_v = 4.0/3 * PI * r * r * r; // 圆球体积
    float cylinder_v = PI * r * r * h;     // 圆柱体积

    printf("圆周长 = %.2f\n", circle_len);
    printf("圆面积 = %.2f\n", circle_area);
    printf("圆球表面积 = %.2f\n", ball_s);
    printf("圆球体积 = %.2f\n", ball_v);
    printf("圆柱体积 = %.2f\n", cylinder_v);
    return 0;
}
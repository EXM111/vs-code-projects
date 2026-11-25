#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);        //我的电脑得使用这个库文件才不会导致输出中文乱码
    float a,b,c;
    printf("请分别输入A,B,C同学家里到学校的距离:");
    scanf("%f %f %f",&a,&b,&c);
    if(a<=0 || a>=b || a>=c || b>=c ){
        printf("你输入的距离不合理!请重新输入!\n");
        exit(1);
    }
    else{
        float f_price_a,f_price_b,f_price_c,price_total;
        f_price_a=10*a/3;
        f_price_b=f_price_a+10*(b-a)/2;
        f_price_c=f_price_b+10*(c-b);
        price_total=10*c;
        printf("----第一种方法----");
        printf("A花了%.2f元",f_price_a);
        printf("B花了%.2f元",f_price_b);
        printf("C花了%.2f元",f_price_c);
        printf("总共的打车费为%.2f元",price_total);

        double costA = (10.0 * a) / 3.0;               // A 的最终分摊
        double costB = (10.0 * (3.0 * b - a)) / 6.0;   // B 的最终分摊
        double totalCost = 10.0 * c;
        double costC = totalCost - costA - costB;      // C 的最终分摊
        printf("----第二种方法----");
        printf("A花了%.2f元",costA);
        printf("B花了%.2f元",costB);
        printf("C花了%.2f元",costC);
        printf("总共的打车费为%.2f元",totalCost);
    }

    return 0;
}
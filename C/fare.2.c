#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001); // 解决控制台中文乱码

    double a,b,c;
    printf("请分别输入A,B,C同学家里到学校的距离(用空格空开):\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a<=0 || a>=b||a>=c ||b>=c){
        printf("你输入的距离不符合规定,请重新输入!");
        exit(1);
    }

    double total_cost= 10*c;

    // 方法一
    double a_cost=10*a/3;
    double b_cost=a_cost + 10*(b-a)/2;
    double c_cost=b_cost + 10*(c-b);

   
    // 方法二
    double cost_a = (10.0 * a) / 3.0;               // A 的最终分摊
    double cost_b = (10.0 * (3.0 * b - a)) / 6.0;   // B 的最终分摊
    double cost_c = total_cost - cost_a -cost_b ;


    // 打印结果
    printf("-----第一种方法----\n");
    printf("A花了%.2f元\n",a_cost);
    printf("B花了%.2f元\n",b_cost);
    printf("C花了%.2f元\n",c_cost);
    printf("总共的打车费为%.2f元\n",total_cost);

    printf("-----第二种方法----\n");    
    printf("A花了%.2f元\n",cost_a);
    printf("B花了%.2f元\n",cost_b);
    printf("C花了%.2f元\n",cost_c);
    printf("总共的打车费为%.2f元\n",total_cost);


    return 0;
}
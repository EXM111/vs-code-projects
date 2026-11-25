// 打擂台算法:先把开头的变量先赋值给max,然后不断地循环看能不能守住擂台
#include <stdio.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);
    int a[3][4] = {{1,9,10,2},{2,87,-1,21},{3,-22,2,11}};
    int max = a[0][0];
    int row = 0;
    int colum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j=0;j<4;j++){
            if(a[i][j]>max){
                max=a[i][j];
                row = i;
                colum =j;
            }
        }
    }
    printf("max=%d,row=%d,colum=%d",max,row,colum);
    return 0;
}
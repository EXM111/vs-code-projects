#include <stdio.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);
    char c[15]={'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t'};
    for(int i=0;i<15;i++){
        printf("%c",c[i]);
    }
    return 0;
}
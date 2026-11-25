#include <stdio.h>
#include <windows.h>
#include <string.h>
int main(){
    SetConsoleOutputCP(65001);
    char a[100];
    char b[100];
    char c[100]; 
    char max[100];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    fgets(c,sizeof(c),stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
    c[strcspn(c,"\n")]='\0';

    if(strcmp(a,b)>0){
        strcpy(max,a);
    }   
    else{
        strcpy(max,b);
    }
    if(strcmp(max,c)<0){
        strcpy(max,c);
        printf("max=%s",max);
    }
    else{
        printf("max=%s",max);
    }

    return 0;
}
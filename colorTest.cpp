#include <stdio.h>
#include <windows.h>
void SetColor(unsigned short forecolor=7, unsigned short backcolor=0 ){
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle,forecolor + backcolor * 0x10);
}
int main(){
    short n;
    while(1){
        scanf("%d",&n);
        SetColor(n);
        printf("Good morning\n");
        SetColor();
    }
    
    
    
}
#include <stdio.h>
#include <windows.h>
void setColor(unsigned short ForeColor = 7, unsigned short BackGroundColor = 0)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获取当前窗口句柄
    SetConsoleTextAttribute(handle, ForeColor + BackGroundColor * 0x10); //设置颜色
}
void SetPos(int x, int y)

{

    COORD pos;

    HANDLE handle;

    pos.X = x;

    pos.Y = y;

    handle = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(handle, pos);
}

int main()

{

    //设置光标位置，就是需要显示的位置

    SetPos(30, 10);

    //设置颜色

    setColor(10, 0);

    //显示文字

    printf("我");

    setColor(1, 0);

    printf("爱");

    setColor(12, 0);

    printf("你");

    printf("  就像老鼠爱大米");

    //设置为原来的黑白

    setColor(7, 0);

    getchar();

    return 0;
}
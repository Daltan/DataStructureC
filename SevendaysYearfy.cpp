#include <stdio.h>
#include <windows.h>
double r_r = 4.2;
double r = r_r / 100.0;

void setColor(unsigned short ForeColor = 7, unsigned short BackGroundColor = 0)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获取当前窗口句柄
    SetConsoleTextAttribute(handle, ForeColor + BackGroundColor * 0x10); //设置颜色
}
void function1()
{
    double y;
    printf(" Input money you want everyday:");
    scanf("%lf", &y);
    // printf("You input: %f\n",y);
    printf("You need to store:");
    setColor(10);
    printf("%.2f RMB\n", 365 * y / r);
    setColor();
}
void function2()
{
    double x;
    printf(" Input Year money:");
    scanf("%lf", &x);
    // printf("You input: %f\n",y);
    printf("You will get ", x * r / 365);
    setColor(10);
    printf("%.2f RMB", x * r / 365);
    setColor();
    printf(" everyday\n");
}
int main()
{
    int n;
    while (1)
    {
        printf("-------------\n1 Everyday money to Year money\n2 Year money to Everyday money\n3 exit\n-------------\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            function1();
            break;
        case 2:
            function2();
            break;
        default:
            break;
        }
    }

    return 0;
}

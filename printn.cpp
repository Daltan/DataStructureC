#include <stdio.h>
void PrintN (int n);
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    PrintN(n);
    return 0;
}
void PrintN(int n){
    if(n){
        PrintN(n-1);
        printf("%d\n",n);
    }
    return;
}

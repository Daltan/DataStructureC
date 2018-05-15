#include <stdio.h>
void printN(int n);
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    printN(n);
    return 0;
}
void printN(int n){
    int i=1;
    
    for(int i = 0; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
}

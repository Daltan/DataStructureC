#include <stdio.h>
#include <time.h>
clock_t start,stop;
double duration;
void myFunction();
int main(){
    start=clock();
    myFunction();
    stop=clock();
    duration=((double)(stop-start))/CLK_TCK;
    printf("%f",duration);
    return 0;
}
void myFunction(){
    int n=100000000;
    int sum=0;
    for(;n>0;n--){
        sum=sum+n;
    }
    printf("%d\n",sum);
}

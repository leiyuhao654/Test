#include <stdio.h>

int poorPigs(int buckets, int minutesToDie, int minutesToTest){
    int count = minutesToTest/minutesToDie+1;
    int num = 1,temp=0;
    while(num<buckets)
    {
        num=num*count;
        temp++;
    }
    return temp;
}

int main()
{
    int a = 0;
    a = poorPigs(1000,15,60);
    printf("%d",a);
}

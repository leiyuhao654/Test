#include <stdio.h>

int isPalindrome(int x){
    unsigned int num=0,temp=x;
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    while(x>0){
        num*=10;
        num+=x%10;
        x/=10;
    }
    if(num==temp)
        return 1;
    else
        return 0;
}

int main()
{
    int a=123321;
    int b=100;
    b=isPalindrome(a);
    printf("%d %d",a,b);
    return 0;
}

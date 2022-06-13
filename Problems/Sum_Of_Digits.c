#include<stdio.h>

int n=125;
int sum(int n)
{
    if(n==0) {return 0;}
    if(n%9==0) {return 9;}
    else {return n%9;}

}

int main()
{
    printf("%d",sum(125));

return 0;
}

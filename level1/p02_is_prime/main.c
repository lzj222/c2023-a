#include <stdio.h>
int isprime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }


    }
    return 1;
}
int main() {
    int n;
    scanf("%d",&n);
    if (isprime(n)) {
        printf("是质数");
    } else printf("不是质数");
    return 0;
}
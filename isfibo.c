/*
5)Is Fibo
*/
#include <stdio.h>
int main()
{
    int n;
    int n1, n2, n3;
    n1 = 0;
    n2 = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i <=n; i++)
    {
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
        //printf("%d", n3);
        if (n3 < n)
        {
            continue;
        }
        else if (n3 > n)
        {
            printf("IsNotFibo");
            break;
        }
        else
        {
            printf("IsFibo");
            break;
        }
    }

    return 0;
}
#include<stdio.h>
int main(){
    int n;
    int fix;
    fix = n;
    int d,c;
    c = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n>0)
    {
        d = n%10;
        
        
        
            if (fix % d == 0)
            {
                c++;
                //printf("%d",d);
            }
        
        n = n/10;
    }
    printf("%d",c);
    
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    int n,l;
    int c = 0;
    int x = 0;
    printf("Number of samples");
    scanf("%d",&n);
    char array[n][100];
    char alphabets[26];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",array[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        alphabets[i] = i+97;
    }
    for (int i = 0; i < 26; i++)
    {   c = 0;
        for (int j = 0; j < n; j++)
        {
            l = strlen(array[j]);
            for (int k = 0; k < l; k++)
            {
                if (alphabets[i] == array[j][k])
                {
                    c++;
                    break;
                }
            }   
        }
        if (c == n)
        {
            x++;
        }
    }
    printf("%d",x);
    
    return 0;
}
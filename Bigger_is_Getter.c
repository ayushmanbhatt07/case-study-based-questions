#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    int c = 0;
    scanf("%d",&t);
    char w[t][100];
    char m;
    char s[t][100];
    for (int i = 0; i < t; i++)
    {
        scanf("%s",&w[i]);
    }
    int l;
    for (int i = 0; i < t; i++)
    {
        l = strlen(w[i]);
        c = 0;
        for (int j = l-1; j > 0; j--)
        {
            if (w[i][j] > w[i][j-1])
            {
                m = w[i][j];
                w[i][j] = w[i][j-1];
                w[i][j-1] =m;
                c++;
                break;
            }   
        }
        if (c == 0)
        {
            printf("No Answer\n");
        }
        else
        {
            printf("%s\n",w[i]);
        }
    }
    return 0;
}
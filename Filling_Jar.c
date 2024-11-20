/*
2.Filling Jars
*/
#include<stdio.h>
int main()
{
    int N=0,M=0,k=0,a=0,b=0,sum=0,average=0;
    printf("Enter N M:\n");
    scanf("%d %d",&N,&M);
    int arr[N+1];
    for (int i = 0; i < N+1; i++)
    {
        arr[i] = 0;
    }
    
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d %d",&a,&b,&k);
        for (int j = a; j <= b; j++)
        {
            arr[j]+=k;
            //printf("%d",arr[j]);
        }
    }
    for (int k = 1; k <= N; k++)
    {
        sum += arr[k];
    }
    average = sum/N;
    printf("%d",average);
    
    return 0;
}
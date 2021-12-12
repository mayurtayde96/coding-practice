#include<stdio.h>
int main()
{
    int a[100],n,k,start,end;
    printf("Enter the size of array and k\n");
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    start=a[0];
    end=a[n-1];
    
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp;
            temp=a[j];
            a[j]=a[n-1];
            a[n-1]=temp;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}

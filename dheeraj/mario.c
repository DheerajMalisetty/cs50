#include<stdio.h>
void main()
{
    int c;
    scanf("%d",&c);
    for (int i=0;i<=c;i++)
    {
        for (int j=0;j<=c-i;j++)
        {
            printf(" ");
        }
        for (int k=i;k>=0;k--)
        {
            printf("#"); // prints hashtag.
        }
        printf(" ");
        for (int h=0;h<=i;h++)
        {
            printf("#"); // Also prints hashtag.
        }
        printf("\n");
    }
}

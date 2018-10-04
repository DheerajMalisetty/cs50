#include<stdio.h>
void main()
{
    int c;
    scanf("%d",&c);
    for (int i=0;i<=c;i++)
    {
        for (int j=0;j<=c-i;j++) // This loop prints the required spaces for setting up the bricks
        {
            printf(" ");
        }
        for (int k=i;k>=0;k--) // This loop prints the bricks
        {
            printf("#");
        }
        printf(" ");
        for (int h=0;h<=i;h++)
        {
            printf("#");
        }
        printf("\n");
    }
}

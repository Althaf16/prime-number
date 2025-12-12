#include<stdio.h>

int main()
{
    int num,flag=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num > 0)
    {
        for(int i=2 ; i*i<num ; i++)
        {
            if(num%i == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            printf("%d is not a prime number\n",num);
        }
        else
        {
            printf("%d is a prime number\n",num);
        }
    }
    else
    {
        printf("Enter the correct number!!!!\n");
    }
}
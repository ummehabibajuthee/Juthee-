#include<stdio.h>
int main ()
{   int i,num[10];
    printf("Enter the elements of aray : ");
    for (i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
    }
    int value;
    int position = 0;
    printf("Enter the value you want to search : ");
    scanf("%d", &value);
    for (i=0;i<10;i++)
    {
        if(value==num[i])
        {
            position = i+1;
            break;
        }
    }
    if (position==0)
        print("Not found");
    else
        printf("\nFound the value\none\nThe position of %d is : %d\n", value,position);
    getch();
}

#include<stdio.h>
 int main () {

         int r,num,sum=0;
         printf("Enter ant number : ");
         scanf("%d", &num);

         while (num!=0)
         {
             r=num%10;
             sum=sum+r;
             num=num/10;
         }
         printf("Sum of digit = %d", sum);

         getch();

}

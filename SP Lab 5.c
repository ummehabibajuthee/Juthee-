#include<stdio.h>
int main () {

     char str1[30];
     char star2[30];

     printf("Enter any string : ");
     scanf("%s", &str1);

     int i=0,len=0,j;
     while (str1[i]!=0)
     {
         i++;
         len++;
     }
     for (j=0,i=len-1;i>=0;i--,j++)
      {
          str2[j] = str1[i] ;

       }

       str2[j] = '\0';
       printf("String 1 = %s\n", str1);
       printf("String 2 = %s\n", str2);

       int d = strcmp(str1,str2);
       if (d==0);
       {
           printf("String is palindrome");

       }
       else {
        printf("String is not palindrome");

       }
       getch();
}

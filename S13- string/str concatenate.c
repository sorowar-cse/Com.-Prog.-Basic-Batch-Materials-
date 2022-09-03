#include <stdio.h>
int main()
{
   char str1[50], str2[50], ns[100]; int i, j;
   printf("\nEnter first string: ");
   scanf("%s",str1);
   printf("\nEnter second string: ");
   scanf("%s",str2);

   /*
   This loop is to store the length of str1 in i
        * It just counts the number of characters in str1
        * You can also use strlen instead of this.
    */

  // for(i=0; str1[i]!='\0'; ++i);


  strcat(str1, str2);

  // str1[i]='\0';
   printf("\nOutput: %s",str1);

   return 0;
}

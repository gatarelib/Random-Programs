/* Write to text file */

#include<stdio.h>
int main()
{
 FILE *fp;
 char mystr[100];

 fp=fopen("mytext.txt","w");
 if(fp==NULL)
 {
  puts("Some error occured.");
  return 1;
 }

 printf("\nEnter some lines:\n");
 while(strlen(gets(mystr))>0)
 {
  fputs(mystr,fp);
  fputs("\n",fp);
 }
 fclose(fp);
 return 0;
}

/* Count characters of file */

#include<stdio.h>
int main()
{
 FILE *fp;
 char a[10];
 long cnt=0;
 int c;

 printf("Type a file name : ");
 gets(a);
 
 if((fp=fopen(a,"r"))==NULL)
  printf("File dosen't exist.");
 else
 {
  while(1)
  {
   c=fgetc(fp);
   if(feof(fp)) break;
   cnt++;
  }
  printf("\nfile have %ld characters",cnt);
 }
 fclose(fp);
 return 0;
}


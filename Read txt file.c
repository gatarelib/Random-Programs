/* Read text file */

#include<stdio.h>
int main()
{
 FILE *fp;
 int ch;
 
 fp=fopen("myfile.txt","r");
 if(fp==NULL)
 {
  printf("Can't find the source file.");
  return 1;
 } 
 while(1)
 {
  ch=fgetc(fp);
  if(feof(fp)) break;
  printf("%c",ch);
 } 
 fclose(fp);
 return 0;
}


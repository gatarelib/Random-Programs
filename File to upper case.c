/* File to upper case using command line arguments */

#include<stdio.h>
int main(int n,char *a[])
{
 int c;
 FILE *fr,*fw;

 if(n!=3)
 {
  printf("Invalide numbers of arguments.");
  return 1;
 }

 if((fr=fopen(a[1],"r"))==NULL)
 {
  printf("File can't be open.");
  return 1;
 }
 if((fw=fopen(a[2],"r+"))==NULL)
 {
  printf("File can't be open.");
  fclose(fr);
  return 1;
 }
 while(1)
 {
  c=fgetc(fr);
  if(feof(fr)) break;
  c=~c;
  fputc(c,fw);
 }
 fclose(fr);
 fclose(fw);
 return 0;
}


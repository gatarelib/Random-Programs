# include <stdio.h>
int main(){
int n,i,j,z=1,x;
printf("Enter total no. of rows : ");
scanf("%d",&n);
for(i=0;i<n+1;i++)
{
		printf("\t\t");
	for(j=0;j<n;j++)
		{
			if((i%2==0&&(j>=(i/2)&&j<=(n-1)-(i/2)))){
			printf("%3c",'*');
		}
			else if((i%2!=0&&j>= (n/2)+1-z&&j<=(i/2+n/2)))
			{
			printf("%3c",'*');
			}
	else
		printf("%3c",' ');
	}
	if(i%2!=0)
		z++;
		printf("\n");
}
return 0;
}

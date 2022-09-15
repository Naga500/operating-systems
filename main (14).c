#include <stdio.h>
void main()
{
FILE *fp;
char ch;
int i,pos;
fp=fopen("test.txt","r");
if(fp==NULL)
{
printf("file doesnot exist \n");
}
fseek(fp,0,SEEK_END);
pos=ftell(fp);
i=0;
while(i<pos)
{
i++;
fseek(fp,-i,SEEK_END);
ch=fgetc(fp);
printf("%c",ch);
}
}

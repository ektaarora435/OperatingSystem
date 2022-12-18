#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
void copy(int,int);
void display(int);
main(int argc,char *argv[])
{
int fold,fnew;
if(argc!=3)
{
printf("Two Arguments Required");
exit(1);
}
fold=open(argv[1],0);
if(fold==-1)
{
printf("Unable to Open the File\n%s",argv[1]);
exit(1);
}
fnew=creat(argv[2],0666);
if(fnew==-1)
{
printf("Unable to Open the File\n%s",argv[2]);
exit(1);
}
copy(fold,fnew);
exit(0); close(fold);
close(fnew);
fnew=open(argv[2],0);
printf("New File:\n");
display(fnew);
close(fnew);
exit(0);
}
void copy(int old,int new)
{
nt count=0;
char buffer[512];
while((count=read(old,buffer,sizeof(buffer)))>0)

{
write(new,buffer,count);
}
}
void display(int fnew)
{
int count=0,i;
char buffer[512];
while((count=read(fnew,buffer,sizeof(buffer)))>0)
{
for(i=0;i<count;i++)
{
printf("%c",buffer[i]);
}
}
for(i=0;i<count;i++)
{
printf("%c",buffer[i]);
}
}
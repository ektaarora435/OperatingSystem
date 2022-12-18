#include <stdlib.h>
#include <stdio.h>
int main()
{
printf("\n The kernal version is: \n");
system("cat /proc/sys/kernel/osrelease");
printf("\n CPU info: \n");
system("cat /proc/cpuinfo\n");
return 0;
}
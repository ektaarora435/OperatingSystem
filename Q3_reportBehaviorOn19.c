#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
printf("\n The kernel version is: \n");
system("cat /proc/sys/kernel/osrelease");
printf("\nConfigured total memory and free memory\n");
system("cat /proc/meminfo | awk 'NR==1, NR==2{print}'\n");
return 0;
}
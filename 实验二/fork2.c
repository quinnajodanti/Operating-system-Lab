#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t p1,p2,p3;
	p1=fork();
	printf("子ID==%d,父ID==%d\n",getpid(),getppid());
	return 0;
}

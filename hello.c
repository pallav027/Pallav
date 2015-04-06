#include<stdio.h>

int main ()

{
    int loop=1;
	static const char array[100]={"pallab"};
	printf("the name is %s\n",array);
    printf("the pid is %d\n",getpid());

	while(loop=1);
	return 0;
}

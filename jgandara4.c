#include <stdio.h>
#include <stdlib.h>

int x; // uninitialized 
int y = 15;// initialized

int main(int argc, char *argv[])
{ 
	
// stack
int *values; 
int i;

values  = (int *)malloc(sizeof(int) * 5); // heap

for( i = 0; i < 5; i++)
	values[i] = i;

printf("Memory Addresses:\n");

printf(" argc (Stack): %p \n",&argc);
printf("Stack Variables %p \n",&i);
printf("Heap Variables %p \n",values);
printf("Uninitialized data %p \n",&x);
printf("initialized data %p \n",&y);		

return EXIT_SUCCESS;


	

}


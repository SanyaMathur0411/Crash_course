
#include <stdio.h>
int main() 
{ 
 	int *ptr;
 	int a = 10;
	ptr = &a;
	
	printf("%d\n", a);
	printf("%d\n", *ptr);//prints value stored in reference cell
	printf("%p\n", ptr);//prints address of reference cell
	*ptr = *ptr + 1;
	printf("%d\n", a);
	printf("%d\n", *ptr);//prints value stored in reference cell
	printf("%p\n", ptr);//prints address of reference cell
	
}

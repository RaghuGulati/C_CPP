#include <stdio.h>
int i = 10;
int main()
{


//int i = 10;
   if(i>0){
	 printf("Hello World");
	 i = i - 1;
	 printf("%d \n",i);
	 main();
	 return 0;
   }
}

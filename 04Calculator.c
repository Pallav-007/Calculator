#include<stdio.h>
#include<conio.h>
int main (){
//our first calculator in C
            
//declaring variables	
	int firstnumber=100;
	int secondnumber=50;
	int add,sub,mul,div,mod;
	
	
//Calculating
     add=firstnumber+secondnumber;
	 sub=firstnumber-secondnumber;
	 mul=firstnumber*secondnumber;
	 div=firstnumber/secondnumber;
	 mod=firstnumber%secondnumber;	
	
//Printing
	printf("The sum is %d\n",add);
	printf("The Difference is %d\n",sub);
	printf("The multiplication is %d\n",mul);
	printf("The division is %d\n",div);
	printf("The mod is %d\n",mod);
	
	
return 0;
}

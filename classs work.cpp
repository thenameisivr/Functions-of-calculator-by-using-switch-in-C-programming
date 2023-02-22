#include <stdio.h>
int main(){
	int a;
	printf("Enter your number: ");
	scanf("%i",&a);
	int b;
	printf("Enter the second number: ");
	scanf("%i",&b);
	printf("Your numbers are: %d,%d\n",a,b);
	printf("Enter 1 for Addition\n2 for subtraction \n3 for multiplication\n4 for divide\n");
	
	int input;
	printf("Enter your decision: ");
	scanf("%d",&input);
	
	switch(input){
		case 1: 
		printf("%d",a+b);
		break;
		case 2:
		printf("%d",a-b);
		break;
		case 3:
		printf("%d",a*b);
		break;
		case 4:
		printf("%d",a/b);
		break;
		default:
		printf("Thankyou for using , your inout is incorrect");	
		}
	
    return 0;
}

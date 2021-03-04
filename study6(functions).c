#include<stdio.h>
#include<stdlib.h>
//global declaration of vaiables
float a, b, c, e, f, g;
int d;

//functions performing arithmetic operations

//function to perform addition
float add(float a, float b){
	c = a + b;
	return c;
}

//function to perform subtraction
float subtract(float a, float b){
	c = a - b;
	return c;
}

//function to perform division
float divide(float a, float b){
	c = a / b;
	return c;
}

//function to perform multiplication
float multiply(float a, float b){
	c = a * b;
	return c;
}

//funtion to perform modulus
int modulus(int a, int b){
	c = a % b;
	return c;
}

//function to swap inputed values
void swap(float f, float g){
	e = f;
	f = g;
	g = e;
	
	a=f;
	b=g;
}

//main function
int main()
{
	printf("Enter your two values to perform operations with: ");
	scanf("%f %f", &a, &b);
	
	do{
		printf("\n\t****Operations****\t\n");
		printf("\t1. Add\n");
		printf("\t2. Subtract\n");
		printf("\t3. Multiply\n");
		printf("\t4. Divide\n");
		printf("\t5. Modulus\n");
		printf("\t6. Swap values\n");
		printf("\t7. Exit\n\n");
		
		printf("Choose an operation to perform: ");
		scanf("%d", &d);
		
		switch(d){
			case 1:
				c = add(a, b);
				printf("Result: %0.2f", c);
				break;
			case 2:
				c = subtract(a, b);
				printf("Result: %0.2f", c);
				break;
			case 3:
				c = multiply(a, b);
				printf("Result: %0.2f", c);
				break;
			case 4:
				c = divide(a, b);
				printf("Result: %0.2f", c);
				break;
			case 5:
				c = modulus(a, b);
				printf("Result: %0.2f", c);
				break;
			case 6:
				swap(a, b);
				printf("Values Swapped!!");
				break;
			case 7:
				printf("Exited!!");
				return 0;
			default:
				printf("Wrong operation selected!");
		}
	}while(d != 7);	
	return 0;
}

#include <stdio.h>

int CounterOfDigits(int number){

	int counter = 0;
	while(counter/10)
		counter++;
	return counter;




}



int main(){
	int number;

	printf("enter the number : ");
	scanf("%d", &number);
	printf("%d",number);
	return 0;
}

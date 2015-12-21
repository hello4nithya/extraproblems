/*Given a unsigned number as a string input (it can be of length, max 10000 chars)
write a function to find whether the number is divisible by 11 or not*/
#include<stdio.h>
#include<conio.h>

int main(){
	char a[100];
	int i, j, k, l, num1 = 0, num2 = 0, num = 0, n;
	printf("enter the number");
	gets_s(a);
	printf("%s\n", a);
	for (i = 0; a[i] != '\0'; i++){
		num = num * 10 + a[i] - '0';
	}
	printf("num %d\n", num);
	for (l = 0; a[l] != '\0'; l++);

	for (k = 0; k<l; k += 2){
		num1 = num1 + a[k] - '0';
	}
	printf("num1 %d\n", num1);
	for (j = 1; j<l; j += 2){
		num2 = num2 + a[j] - '0';
	}
	printf("num2 %d\n", num2);



	n = (num1 - num2) % 11;
	if (n == 0){
		printf("%s is divisible by 11\n", a);
	}
	else
		printf("%s is not divisible by 11\n", a);
	getch();
}







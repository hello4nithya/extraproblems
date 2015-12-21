/* An unsigned number Q is formed by taking input P which is an unsigned integer in string format,
K: number of times P repeated to form Q. write a function to find whether the number Q is divisible by 11 or not
ex: Q: 123123123 P: 123 K:3*/

#include<stdio.h>
#include<conio.h>

int main(){
	char a[100];
	int i, j, k, l, num1 = 0, num2 = 0, num = 0, n, r;
	printf("enter P");
	gets_s(a);
	printf("%s\n", a);
	printf("enter K");
	scanf("%d", &r);
	for (i = 0; a[i] != '\0'; i++){
		num = num * 10 + a[i] - '0';
	}
	printf("num %d\n", num);
	for (l = 0; a[l] != '\0'; l++);

	for (k = 0; k<l; k += 2){
		num1 = num1 + a[k] - '0';
	}

	for (j = 1; j<l; j += 2){
		num2 = num2 + a[j] - '0';
	}

	num1 = num1*r;
	num2 = num2*r;
	printf("num1 %d\n", num1);
	printf("num2 %d\n", num2);




	n = (num1 - num2) % 11;
	if (n == 0){
		printf("Q is divisible by 11\n", a);
	}
	else
		printf("Q is not divisible by 11\n", a);
	getch();
}

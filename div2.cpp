/* An unsigned number Q is formed by taking input P which is an unsigned integer in string format,
K: number of times P repeated to form Q. write a function to find whether the number Q is divisible by 3 or not
ex: Q: 123123123 P: 123 K:3*/
#include<stdio.h>
#include<conio.h>

int main(){
	char a[100];
	int i, j, l, n = 0, num = 0, r;
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


	for (j = 0; j<l; j++){
		n = n + a[j] - '0';
	}

	n = n*r;

	printf("n %d\n", n);


	if (n % 3 == 0){
		printf("Q is divisible by 3\n", a);
	}
	else
		printf("Q is not divisible by 3\n", a);
	getch();
}

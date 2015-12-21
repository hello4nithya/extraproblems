/*multiplication without using + and * operators*/
#include<stdio.h>
#include<conio.h>

int mult(int, int);
int add(int, int);

int main(void){
	int a, b, c;
	clrscr();
	printf("Enter 2 numbers");
	scanf("%d%d", &a, &b);
	c = mult(a, b);
	printf("product of %d and %d is %d", a, b, c);
	getch();
	return 0;
}

int mult(int a, int b){
	int pro = 0, i;
	if (a == 0 || b == 0){
		return 0;
	}
	else{
		for (i = 0; i<b; i++){
			pro = add(pro, a);
		}
	}
	return pro;
}

int add(int x, int y){
	int z;
	while (y>0){
		z = (x & y) << 1;
		x = x^y;
		y = z;
	}
	return x;
}


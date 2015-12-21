/*Given three unsigned numbers as input X, Y, Z find out X to the power of Y modulo Z (power(x,y) mod z)*/
#define max 100*?
#include<stdio.h>
#include<conio.h>
void main(){
	int x, y, a, i, j, s, k, bin[max], sq[max], mod[max], l, m, op;
	clrscr();
	printf("enter the values of x,y,a");
	scanf("%d %d %d", &x, &y, &a);

	i = 0;
	while (y>0){
		s = y % 2;
		bin[i] = s;
		y = y / 2;
		i++;
	}
	bin[i] = -1;
	if (bin[0] == 1)
		sq[0] = 1;

	for (i = 1, k = 1; bin[i] != -1; i++){
		if (bin[i] == 1){
			sq[k] = 1;
			for (j = 0; j<i; j++){
				sq[k] *= 2;
			}
			k++;
		}
	}
	sq[k] = -1;
	for (i = 0; sq[i - 1] != -1; i++)
		mod[1] = x%a;


	m = 1;
	l = 2;
	for (i = 1; bin[i] != -1; i++, l = l * 2, m = m * 2){
		mod[l] = (mod[m] * mod[m]) % a;
	}
	op = (mod[sq[0]] * mod[sq[1]]) % a;

	for (i = 2; sq[i] != -1; i++){
		op = (op*mod[sq[i]]) % a;
	}
	printf("\n %d ", op);
	getch();
}


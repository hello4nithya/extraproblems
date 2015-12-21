/*permutations of a 8 bit number*/
#include <stdio.h>
#include<conio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


void permute(int a[], int l, int r)
{
	int i, j, b[10], n = 0;
	static int k = 0;
	if (l == r){
		for (j = 0; j <= r; j++){

			printf("%d", a[j]);
			n = (n * 10) + a[j];
		}
		b[k] = n;

		printf("%d\n", b[k]);
		k++;
		printf("\n");
	}
	else
	{
		for (i = l; i <= r; i++)
		{
			swap(&a[l], &a[i]);
			permute(a, l + 1, r);
			swap(&a[l], &a[i]);
		}
	}
}



int main()
{
	int n = 8;
	long int num;
	int c1[10], c2[10], k, j, temp, m, i;
	printf("enter eight digit number");
	scanf("%d", &num);
	j = 0;
	while (num>0){
		n = num % 10;
		c1[j] = n;
		num = num / 10;
		j++;
	}
	k = j - 1;
	m = 0;
	while (k >= 0){
		temp = c1[k];
		c1[k] = c2[m];
		c2[m] = temp;
		k--;
		m++;
	}
	for (i = 0; i<m; i++){
		printf("%d \n", c2[i]);
	}
	permute(c2, 0, m - 1);

	getch();
	return 0;
}

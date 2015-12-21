/* Min Rank of a given number: Given an unsigned number as input, find the index of the number (index starts from 0)
in all permutations of the number, sorted in ascending order. input 213: output 2 (as 123, 132, 213, 231, 312, 321 are
the permutations and 2 is the index values of 213)*/
#include <stdio.h>
#include<conio.h>
void perm(int a[], int l, int r, int num1);
void swap(int *x, int *y);
void bubble_sort(int arr[], int size, int num1);
void catch (int r, int l, int num1);

int main(void){
	int num, n, i, j, m, k, temp, num1;
	int arr[8], c[8];
	clrscr();
	printf("enter a number");
	scanf("%d", &num1);
	num = num1;
	j = 0;
	while (num>0){
		n = num % 10;
		c[j] = n;
		num = num / 10;
		j++;
	}
	k = j - 1;
	m = 0;
	while (k >= 0){
		temp = c[k];
		c[k] = arr[m];
		arr[m] = temp;
		k--;
		m++;
	}
	for (i = 0; i<m; i++){
		printf("%d \n", arr[i]);
	}

	perm(arr, 0, m - 1, num1);
	getch();
	return 0;
}
void swap(int *x, int *y)
{
	/**x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;*/
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


void perm(int a[], int m, int n, int num1)
{
	int i, j, b[100], k = 0;
	static int l = 0;
	if (m == n){
		for (j = 0; j <= n; j++){
			printf("%d", a[j]);
			k = (k * 10) + a[j];
		}
		printf("\n");
		printf("%d\n", k);
		b[l] = k;
		printf("%d%d\n", b[l], l);
		catch (b[l], l, num1);
		l++;
	}
	else{
		for (i = m; i <= n; i++)
		{
			swap(&a[m], &a[i]);
			perm(a, m + 1, n, num1);
			swap(&a[m], &a[i]);
		}
	}


}



void bubble_sort(int arr[], int size, int num1){

	int swapped = 1, i = 0, s;
	while (swapped == 1){
		swapped = 0;

		for (i = 1; i < size; i++){
			if (arr[i] < arr[i - 1]){

				swap(&arr[i], &arr[i - 1]);
				swapped = 1;

			}
		}
	}
	for (s = 0; s<size; s++){
		if (arr[s] == num1){
			printf("the index of %d is %d\n", num1, s);
		}
	}
}

void catch (int r, int l, int num1){
	static int i = 0;
	int b[100];
	b[i] = r;
	i++;
	bubble_sort(b, l, num1);

}


/*to find thevalue of n*/
#include<stdio.h>
#include<conio.h>

int findn(int* in){
	int high = 2, low = 1;
	while (1 == 1){
		if (in[low - 1]<in[high - 1]){
			if (in[high - 1]>in[high]){
				if (in[high] == 0)	return (high - 2);
				else			return (high - 1);
			}
			low = high;
			high = high * 2;
		}
		else if (in[high - 1] == 0)
			high = (low + high) / 2;
		else
			return(low - 1);
	}
}

void main(){
	//give input without using scanf
	int arr[] = { 1, 4, 5, 6, 7, 8, 9, 10, 11, 67, 77, 88, 99, 106, 111, 222, 333, 444, 555, 666, 777, 888, 999, 1000, 999, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, len;

	len = findn(arr);

	printf("length: %d", len);

	getch();
}


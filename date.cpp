/* given a date print the date as text, example: 10/1/1992 shoudl be printed as tenth january of nineteen ninety two.*/
#include<stdio.h>
#include<conio.h>
int arrtonum(int a[], int n);
void month(int m);
void word1(int d);
void word(int w);
void year(int);
int main(void){
	int i, j, n, n1, n2, dd[2], mm[2], yy[4], d, m, y;
	char a[12], s[50] = { 0 };
	clrscr();
	printf("enter the date in dd/mm/yyyy format:");
	scanf("%d %*c %d %*c %d", &d, &m, &y);

	/*scanf("%s",a);
	//this code is to take the date in string format it is showing error so i put it in comments
	for(i=0;i<2;i++){
	dd[j]=a[i]-'0';
	j++;
	}
	d=arrtonum(dd,2);
	printf("d is %d",d);
	j=0;
	for(i=3;i<5;i++){
	mm[j]=a[i];
	j++;
	}
	m=arrtonum(mm,2);
	printf("m is %d",m);
	j=0;
	for(i=6;i<10;i++){
	yy[j]=a[i];
	j++;
	}
	y=arrtonum(yy,4);
	printf("y is %d",y);*/

	if (d >= 1 && d <= 3){
		word1(d);
	}
	else if (d >= 4 && d <= 20){
		word(d);
		printf("th");
	}

	else if (d >= 21 && d <= 31){
		n = d / 10;
		n1 = n * 10;
		word(n1);
		n2 = d % 10;
		if (n2 <= 3){
			word1(n2);
		}
		else
			word(n2);
	}
	printf(" ");
	month(m);
	printf(" ");
	printf("of");
	printf(" ");

	year(y);

	getch();
}

int arrtonum(int a[], int n){
	int i, num = 0;
	for (i = 0; i<n; i++){
		num = (num * 10) + a[i];
	}
	return num;
}
void word1(int d){
	switch (d){
	case 1:{printf("first");
		break; }
	case 2:{printf("second");
		break; }
	case 3:{printf("third");
		break; }
	}
}

void month(int m){
	switch (m){
	case 1:{ printf("january");
		break; }
	case 2:{ printf("feburary");
		break; }
	case 3:{printf("march");
		break; }
	case 4:{printf("april");
		break; }
	case 5:{printf("may");
		break; }
	case 6:{printf("june");
		break; }
	case 7:{printf("july");
		break; }
	case 8:{ printf("august");
		break; }
	case 9:{printf("september");
		break; }
	case 10:{ printf("october");
		break; }
	case 11:{ printf("november");
		break; }
	case 12:{ printf("december");
		break; }
	}
}

void year(int y){
	int y1, y2, y3, y4, y5;
	y1 = y / 100;

	if (y1 >= 21 && y1 <= 99){
		y3 = y1 / 10;
		y4 = y3 * 10;
		word(y4);
		y5 = y1 % 10;
		word(y5);
	}
	else if (y1 >= 1 && y1 <= 19){
		word(y1);
	}
	else if (y1 == 20){
		printf("two thousand and");
		printf("");
	}


	y2 = y % 100;
	if (y2 >= 21 && y2 <= 99){
		y3 = y2 / 10;
		y4 = y3 * 10;
		word(y4);
		y5 = y2 % 10;
		word(y5);
	}
	else if (y2 >= 1 && y2 <= 20){
		word(y2);
	}
}

void word(int w){
	switch (w){
	case 1:{printf("one");
		break; }
	case 2:{ printf("two");
		break; }
	case 3:{ printf("three");
		break; }
	case 4:{ printf("four");
		break; }
	case 5:{ printf("five");
		break; }
	case 6:{ printf("six");
		break; }
	case 7:{ printf("seven");
		break; }
	case 8:{ printf("eight");
		break; }
	case 9:{ printf("nine");
		break; }
	case 10:{ printf("ten");
		break; }
	case 11:{ printf("eleven");
		break; }
	case 12:{ printf("tweleve");
		break; }
	case 13:{ printf("thirteen");
		break; }
	case 14:{ printf("fourteen");
		break; }
	case 15:{ printf("fifteen");
		break; }
	case 16:{ printf("sixteen");
		break; }
	case 17:{ printf("seventeen");
		break; }
	case 18:{ printf("eigthteen");
		break; }
	case 19:{ printf("nineteen");
		break; }
	case 20:{ printf("twenty");
		break; }

	case 30:{ printf("thirty");
		break; }

	case 40:{ printf("fourty");
		break; }
	case 50:{ printf("fifty");
		break; }
	case 60:{ printf("sixty");
		break; }
	case 70:{ printf("seventy");
		break; }
	case 80:{ printf("eighty");
		break; }
	case 90:{ printf("ninety");
		break; }
	}
}






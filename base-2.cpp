/*given a decimal number print it in base minus2 series*/
#include<stdio.h>
#include<conio.h>
int main(){
	int dec,i,r,a[50],j,k,sum=0,d;
		printf("enter a decimal value");
	scanf("%d",&dec);
	i=0;
	d=dec;
	while(dec!=0){
		r=dec%(-2);
		printf("%d\n in r",r);
		a[i]=r;
		printf("%d\n",a[i]);
		dec=dec/-2;
		i++;
	}
	printf("after");
	for(j=0;j<i;j++){
		if(a[j]==-1){
			a[j]=11;
		}
		printf("%d\n",a[j]);
	}
	k=i-1;
	while(k>=0){
		if(a[k]==11){
			sum=sum+11;
		}
		else{
			sum=(sum*10)+a[k];
		}
		k--;
	}
	printf("the value of %d in base -2 is %d",d,sum);
	getch();
}



		
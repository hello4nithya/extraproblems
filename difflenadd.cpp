/*given 2 numbers of any length in string format ,to add them in forward direction*/
#include<stdio.h>
#include<conio.h>

int main(){
	char s1[100],s2[100];
	int a[100],l1,l2,i,j,k,l,m,n,p,q,o,y,x,z,y2,x2,z2,len;
	printf("enter string1");
	scanf("%s",s1);
	printf("enter string2");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++);
	l1=i;
	for(j=0;s2[j]!='\0';j++);
	l2=j;
	if(l1>l2){
		len=l1;
		y=l1-l2;
		for(z=l2-1;z>=0;z--){
			s2[z+y]=s2[z];
			printf("%d index %d",s2[z+y]-'0',z+y);
		}
		for(x=0;x<y;x++){
			s2[x]=0+'0';
			printf("%d index %d",s2[x]-'0',x);
		}}
	else if(l2>l1){
		len=l2;
		y2=l2-l1;
		for(z2=l1-1;z2>=0;z2--){
			s1[z2+y2]=s1[z2];
			printf("%d",s1[z2+y2]);
		}
		for(x2=0;x2<y2;x2++){
			s1[x2]=0+'0';
		}}
	else{
		printf("lengths are equal");
	}
	
	k=0;
	q=0;
	
		for(l=0;l<len;l++){
			a[q]=s1[l]-'0'+s2[k]-'0';
			for(m=l;m>0;m--){
				if(a[m]>9){
					n=a[m];
					a[m]=a[m]%10;
					n=n/10;
					o=n%10;
					a[m-1]=a[m-1]+o;
				}
			}
			k++;
			q++;
		}
			
		printf("after adding");
		for(p=0;p<len;p++){
			printf("%d",a[p]);
		}
		getch();
	}
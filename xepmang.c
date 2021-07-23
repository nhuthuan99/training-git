#include <stdio.h>

void xepmangtang(int *a){
	int i,j;
	for(i=0;i<5;i++){
		for(j=4;j>i;j--){
		if(a[j]<a[j-1]){
			int c =a[j-1];
			a[j-1]=a[j];
			a[j]=c;			
		}
		}
		}	
	}
	
void xepmanggiam(int *a){
	int i,j;
	for(i=0;i<5;i++){
		for(j=4;j>i;j--){
		if(a[j]>a[j-1]){
			int c =a[j-1];
			a[j-1]=a[j];
			a[j]=c;			
		}
		}
		}	
	}
void hien(int *a){
	int i;
for (i=0;i<5;i++){
	printf("%d, ",a[i]);
}	
}		

int main(){
int i;
	int arr[]={1,2,-99,-2,3};
xepmanggiam(arr);
hien(arr);
printf("\n");
xepmangtang(arr);
hien(arr);
	return 0;
	}
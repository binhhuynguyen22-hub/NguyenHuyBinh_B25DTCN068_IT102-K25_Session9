#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
	int arr[100];
	int n,sum1=0,sum2=0;
	
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("cac so chan trong mang la: ");
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			sum1=sum1+1;
			printf("%d ",arr[i]);
		}
	}
	printf("\ncac so le trong mang la: ");
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			sum2=sum2+1;
			printf("%d ",arr[i]);
		}
	}
	printf("\ntong so chan: %d",sum1);
	printf("\ntong so le: %d",sum2);
}



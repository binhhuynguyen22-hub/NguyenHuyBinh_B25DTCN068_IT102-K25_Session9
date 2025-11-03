#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
	const int max=100;
	int arr[max];
	int temp;
	int n;
	do{
		printf("nhap so phan tu: ");
		scanf("%d",&n);
		if(n<0 || n>max){
			printf("nhap lai n \n");
		}
	}while(n<1 || n>max);
	for (int i=0;i<n;i++){
		printf("nhap phan tu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n mang vua nhap: \n");
	for(int i=0;i<n;i++){
		printf("%d   ",arr[i]);
	}
	for(int i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	printf("\nmang dao nguoc: \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}


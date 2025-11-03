#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
	int arr[100];
	int n;
	
	printf("moi nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
			printf("nhap phan tu arr[%d]: ",i);
			scanf("%d",&arr[i]);
	}
	printf("\n mang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}


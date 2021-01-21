//문제- 장부관리 0입력 시 최근 입력기록 삭제

//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int i,n;
//int arr[100];
//int sum = 0;
//int top=0;
//int a[100];
//
//int main() {
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//
//		scanf("%d", &arr[i]);
//
//		if (arr[i] == 0) {
//			top--;
//			a[top] = 0;
//		}
//		else {
//			a[top] = arr[i];
//			top++;
//		}
//	}
//	for (i = 0; i < top; i++)
//	{
//		sum += a[i];
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}


////문제-분해합
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int main() {
//	int n,i,k;
//	int sum=0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum = i;
//		k = i;
//		while (k > 0) {
//			sum += k % 10;
//			k = k / 10;
//		}
//		if (sum == n) {
//			printf("%d \n", i);
//			break;
//		}
//	}
//	return 0;
//}

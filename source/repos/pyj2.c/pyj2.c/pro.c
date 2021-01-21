////26-1 0에서 999사이의 임의의 10진 정수를 받아 8진수로 변환
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int a[10];
//	int rem = 1;
//	int i = 0;
//	int num = 1;
//	int mok = 0;
//
//	scanf("%d", &num);
//
//	while (1)
//	{
//		if (num == 0)
//		{
//			break;
//		}
//		else
//		{
//			mok =num/8;
//			rem = num%8;
//			printf("%d\n", rem);
//			a[i] = rem;
//			num = mok;
//			i = i + 1;
//		}
//	}
//	while (i>=0)
//	{
//			printf("%d\n", a[i]);
//			i = i - 1;
//	}
//	
//}
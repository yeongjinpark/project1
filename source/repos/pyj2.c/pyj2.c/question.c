//13번 어떤 수의 약수 중 그 수를 제외한 약수를 모두 합하면 자신과 같아지는 수들을
//1부터 500까지 중에서 찾아 출력하고 개수를 출력 -- 7페이지 밑에거
//#include<stdio.h>
//int main()
//{
//	int su = 1;
//	int cnt = 0, rem = 0;
//	int k, j, sum;
//
//	while (1)
//	{
//		if (su < 500)
//		{
//			sum = 0;
//			k = su / 2;
//			j = 1;
//			if (j > k)
//			{
//				if (su == sum)
//				{
//					cnt = cnt + 1;
//					printf("su");
//					su = su + 1;
//				}
//				else
//				{
//					su = su + 1;
//				}
//			}
//			else if (j < k)
//			{
//				rem = su - (su / j) * j;
//				if (rem == 0)
//				{
//					sum = sum + j;
//					j = j + 1;
//				}
//				else
//				{
//					j = j + 1;
//				}
//			}
//		}
//		else if (su > 500)
//		{
//			printf("cnt는 %d", cnt);
//			break;
//		}
//	}
//	return 0;
//}




//8번 서로 다른 A,B 두 자연수를 입력했을때 두 자연수 사이의 수들의 합계를 구하여라=----5페이지 위에거
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int sum = 0;
//	int a, b;
//	int n = 0;
//	printf("두 수를 입력하세요: ");
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		for (n = b; n >= a; n++)
//		{
//			
//			sum = sum + n;
//		}
//	}
//	else if(a<b)
//	{
//		for (n = a; n >= b; n++)
//		{
//			
//			sum = sum + n;
//		}
//	}
//	printf("sum은 %d", sum);
//	return 0;
//}


////18-2 서로 다른 두 자연수 a부터 b까지의 합계와 평균을 구하여라
//#include<stdio.h>
//#pragma warning (disable: 4996)
//int main()
//{
//	float sum = 0.0;
//	float a, b;
//	float k, n;
//	float cnt = 0.0;
//	float avg = 0.0;
//
//	printf("두 수를 입력: ");
//	scanf("%f ,%f", &a, &b);
//
//	if (a > b)
//	{
//		for (n = b; n >= a; n++)
//		{
//			sum = sum + n;
//			cnt = cnt + 1;
//			avg = sum/cnt;
//		}
//	}
//	else if (a < b)
//	{
//		for (k = a; k >= b; k++)
//		{
//			sum = sum + k;
//			cnt = cnt + 1;
//			avg = sum/cnt;
//		}
//	}
//	printf("합:%f, 평균: %f", sum, avg);
//
//	return 0;
//}


//22-1 어떤 자연수 n을 입력받아 2부터 n까지의 모든 소수를 구하라
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 1;
//	int s = 0;
//	int k = 2;
//	int n;
//
//	printf("자연수를 입력: ");
//	scanf("%d", &n);
//
//	while (i>=n)
//	{
//		i = i + 1;
//		k = 2;
//		while (1)
//		{
//			if (i % k == 0)
//			{
//				break;
//			}
//			else
//			{
//				k = k + 1;
//			}
//		}
//		if (i == k)
//		{
//			printf("%d\n", s);
//		}
//		
//	}
//	return 0;
//}

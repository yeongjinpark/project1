//13�� � ���� ��� �� �� ���� ������ ����� ��� ���ϸ� �ڽŰ� �������� ������
//1���� 500���� �߿��� ã�� ����ϰ� ������ ��� -- 7������ �ؿ���
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
//			printf("cnt�� %d", cnt);
//			break;
//		}
//	}
//	return 0;
//}




//8�� ���� �ٸ� A,B �� �ڿ����� �Է������� �� �ڿ��� ������ ������ �հ踦 ���Ͽ���=----5������ ������
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int sum = 0;
//	int a, b;
//	int n = 0;
//	printf("�� ���� �Է��ϼ���: ");
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
//	printf("sum�� %d", sum);
//	return 0;
//}


////18-2 ���� �ٸ� �� �ڿ��� a���� b������ �հ�� ����� ���Ͽ���
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
//	printf("�� ���� �Է�: ");
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
//	printf("��:%f, ���: %f", sum, avg);
//
//	return 0;
//}


//22-1 � �ڿ��� n�� �Է¹޾� 2���� n������ ��� �Ҽ��� ���϶�
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 1;
//	int s = 0;
//	int k = 2;
//	int n;
//
//	printf("�ڿ����� �Է�: ");
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

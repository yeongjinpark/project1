////1�� s=1/2-2/3+3/4-4/5.......-48/49+49/50 �� ��
//#include<stdio.h>
//int main()
//{
//	float k = 0.0;
//	float s=0.0;
//	int sw = 0;
//
//	
//for(k=1; k<49; k++)
//	{
//	if (sw == 0)
//	{
//		s = s + k / (k + 1);
//		sw = 1;
//	}
//	else
//	{
//		s = s - k / (k + 1);
//		sw = 0;
//	}
//	
//	}
//printf("%f", s);
//
//		return 0;
//}

//2�� 1���� 500������ ���� �߿��� 6�� ����̸鼭 7�� ����� ���� ����Ͽ���
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	float su1 = 0.0, su2 = 0.0, su3 = 0.0;
//	for (n=1; n<=500; n++)
//	{
//		su1 = su1-(n/6-su1)*6  ;
//		su2 = su2- (n/7-su2)*7 ;
//		su3 = su1 + su2;
//			if (su3 == 0)
//			{
//				printf("%d", n);
//			}
//		
//	}
//	return 0;
//}

//3 �Է��� ������ ���� �Ǻ���ġ ���� �� ���� ū ���� ���Ͽ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int A = 1;
//	int B = 1;
//	int n, h = 0;
//
//	scanf("%d", &n);
//	while (n >= h)
//	{
//		h = A + B;
//		A = B;
//		B = h;
//	}
//	printf("%d-%d=%d", h, A, h-A);
//	return 0;
//}

//4 �� ������ N�� ������ �Ǻ���ġ ������ ���� ���ϴ� �����̴�.
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a = 0, b = 1;
//	int num = 1;
//	int sum = 1;
//	int n=0;
//	int c = 0;
//
//	scanf("%d", &n);
//
//	while (num <= n)
//	{
//		num = num + 1;
//		c = a + b;
//		sum = sum + c;
//		a = b;
//		b = c;
//	}
//	printf("%d", sum);
//	return 0;
//}

//5 1-2+3-4+....-98+99
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int h = 0;
//	
//	while (1)
//	{
//		n = n + 1;
//		h = h + n;
//		if (n >= 99)
//		{
//			printf("%d", h);
//			break;
//		}
//		else if (n < 99)
//		{
//			n = n + 1;
//			h = h - n;
//		}
//
//	}
//	return 0;
//}

////6�� 1-2+3-4+5-6....+9-10�� ��
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int s = -1;
//
//	for (i = 1; i < 10; i++)
//	{
//		s = s * -1;
//		sum = sum + s * i;
//	}
//	printf("%d", sum);
//		return 0;
//}
//
////7�� s=1+1+1/2+1/3+1/4...1/10�� ���Ͽ���
//#include<stdio.h>
//int main()
//{
//    float s = 1.0;
//	float n = 1.0;
//	float h = 0.0;
//
//	while (n <= 10)
//	{
//			h = 1 / n;      //���� ������ ���Ͻ��Ѿ���
//			s = s + h;
//			n = n + 1;
//		
//			
//	}
//	printf("%f\n", s);
//	return 0;
//}

//8�� ���� �ٸ� A,B �� �ڿ����� �Է������� �� �ڿ��� ������ ������ �հ踦 ���Ͽ���
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


////9�� (77*1)+(77*2)+(75*3).....+(2*76)+(1*77)
#include<stdio.h>

int add(int x, int y);

int mul(int x, int y);

int main()
{
	int h = 0;
	int p = 0;
	int m = 0;
	int q = 0;

	for (p = 1; p < 77; p++)
	{
		q = 78 - p;
		m = mul(q, p);
		h = add(h, m);
	}
	printf("�հ�� %d", h);
		return 0;
}

int mul(int x, int y) {
	int result = x * y;
	mul(x, y);
	return result;
}

int add(int x, int y) {
	int result = x + y;
	return result;
}


////10�� 1����100������ ���� �߿��� 3�� ��� �̸鼭 5�� ����� ���� ���
//#include<stdio.h>
//int main()
//{
//	int i = 0,su=0,su2=0,su3=0 ;
//	
//	for (i = 1; i=100; i++);
//	{
//		su1
//	
//	}
//}



////11�� 2!+3!+4!+.....+19!+20!
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 1;
//	int f = 1;
//
//	for (i = 1; i < 21; i++)
//	{
//		f = i * f;
//		sum = sum + f;
//	}
//	printf("������ %d", sum);
//	return 0;
//}


////12 ���� �ٸ� x,y �� �ڿ����� �Է��Ͽ��� �� �� �ڿ��� ������ Ȧ������ �հ踦 ���Ͽ���
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int main()
//{
//	int sum = 0;
//	int x=0, y=0;
//	int num = 0;
//
//	scanf("%d %d", &x, &y);
//
//	if (x > y)
//	{
//		for (num = y; num >= x; num+2)
//		{
//			sum = sum + num;
//		}
//	
//	}
//	else if (x < y)
//	{
//		for (num = x; num >= y; num++)
//		{
//			sum = sum + num;
//		}
//	}
//     printf("���� %d", sum);
//	 return 0;
//}


////13�� � ���� ��� �� �� ���� ������ ����� ��� ���ϸ� �ڽŰ� �������� ������
////1���� 500���� �߿��� ã�� ����ϰ� ������ ���
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



////-1*2+2*3-3*4+4*5......-99*100�� ���
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//
//	while (n>=100)
//	{
//		n = n + 1;
//		sum = sum - n * (n + 1);
//
//		if (n < 100)
//		{
//			n = n + 1;
//			sum = sum + n * (n + 1);
//		}
//	}
//
//	printf("sum�� %d", sum);
//	return 0;
//}


////10p-1 s==1/128-2/64+3/32-4/16....-6/2+7/1�� ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int s = 0;
//	int q = 128;
//	int sw = 0;
//
//	for (n = 1; n < 7; n++)
//	{
//		if (sw == 0)
//		{
//			s = s + n / q;
//			q = q / 2;
//			sw = 1;
//		}
//		else
//		{
//			s = s - n / q;
//			q = q / 2;
//			sw = 0;
//		}
//	}
//	printf("s�� %d", s);
//	return 0;
//}

//
////p10-2 1���� 100�� 3�� ����̸鼭 5�� ����� �ƴ� ���� ���
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int rem = 0;
//
//	for(i=1)
//}








////p11-1 �ȸ���� ���Ի��n�� ���� �Ի������� �Է� �ް� �ְ������� ���� ������ �հ�� ����� ���Ͽ� ���
//
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	float n = 0;
//	float k = 1;
//	float j;
//	float min = 100;
//	float max = 0;
//	float hap = 0, aver = 0;
//
//	printf("��� ���� �Է��ϼ���: ");
//	scanf("%f", &n);
//
//	for (k = 1; k <= n; k++)
//	{
//		printf("������ �Է��ϼ���: ");
//		scanf("%f", &j);
//		if (j < min)
//		{
//			min = j;
//		}
//		else if(j>=min)
//		{
//			if (j > max)
//			{
//				max = j;
//			}
//		}
//		hap = hap + j;
//
//	}
//	hap = max + min;
//	aver = hap / 2;
//	printf("����� %f, ���� %f", aver, hap);
//		return 0;
//}


////11-2 �� ������ 1+1+2+3+5+8+13+21+34�� ����� ���ϴ� �˰���
//#include<stdio.h>
//int main()
//{
//    int a = 1;
//    int b = 1;
//    int t = a + b;
//    int h = 0;
//
//    while (h <34)
//    {
//        h = a + b;
//        t = t + h;
//        a = b;
//        b = h;
//    }
//    printf("%d", t);
//    return 0;
//
//}


////12-1 ������ �ݾ��� �Է¹޾� ȭ�� ���� ���� ȭ���� �ż��� ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	float w = 10000;
//	float cnt = 0;
//	float flg = 0;
//	float amt;
//
//	scanf("%f", &amt);
//	
//	while (1)
//	{
//		cnt = amt / w;
//		printf("%f %f", w, cnt);
//		if (w >1)
//			{
//			amt = amt - cnt * w;
//			}
//
//		else
//		{
//			break;
//		}
//	
//
//		if (flg == 0)
//		{
//			w = w / 2;
//			flg = 1;
//		}
//		else
//		{
//			w = w / 5;
//			flg = 0;
//		}
//
//	}
//	return 0;
//
//
//}



////12-2 200���� 700������ ���� �߿��� 9�� ����̰ų� 6�� ����� ���� ���
//#include<stdio.h>
//int main()
//{
//	int n = 199;
//	int su1 = 0, su2 = 0, su3 = 0;
//
//	for (n = 199; n >= 700; n++)
//	{
//		su1 = n %9;
//		su2 = n %6;
//		su3 = su1 + su2;
//		if (su3 >= 1)
//		{
//			printf("%d", n);
//		}
//	}
//	return 0;
//
//
//
//}


////13-1 n�ױ����� �Ǻ���ġ ������ ¦�� ���� ���Ͽ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a = 0, b = 0, c=0;
//	int num = 1;
//	int sum = 1;
//	int n;
//	
//
//	printf("�Է��ϼ���: ");
//	scanf("%d", &n);
//
//	while (num > n)
//	{
//		num = num + 1;
//		c = a + b;
//		if (c % 2 == 0)
//		{
//			sum = sum + c;
//		}
//		a = b;
//		b = c;
//
//	}
//	printf("%d", sum);
//	return 0;
//}
//


////13-2 s=1/2-1/4+1/8-1/16......-1/128+1/256�� ���� ���Ͽ���
//#include<stdio.h>
//int main()
//{
//	float k = 1.0;
//	float s = 0.0;
//	float sw = 0.0;
//
//	while (k >= 256)
//	{
//		k = k * 2;
//		if (sw == 0)
//		{
//			s = s + 1 / k;
//			sw = 1;
//		}
//		else
//		{
//			s = s - 1 / k;
//			sw = 0;
//		}
//
//	}
//	prinrf("%f", s);
//	return 0;
//}




//14-1 1*2/3*4/5*6....98/99�� ����� ���Ͽ���
//#include<stdio.h>
//int main()
//{
//	float n = 0.0;
//	float h = 0.0;
//
//	while (1)
//	{
//		n = n + 1;
//		h = h * n;
//		if (n < 99)
//		{
//			n = n + 1;
//			h = h / n;
//		}
//		else if (n >= 99)
//		{
//			printf("%f", h);
//			break;
//		}
//	}
//	return 0;
//}
//
//
//
////14-2 1-2+4=8...256-512;
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 1;
//	int s = -1;
//
//	while (i <= 512)
//	{
//		int s = s * -1;
//		sum = sum + s * i;
//		i = i * 2;
//	}
//	printf("%d",sum);
//	return 0;
//}


//
//////15 s=1+1/3+1/5+1/7+1/9...1/19
//#include<stdio.h>
//int main()
//{
//	float s = 1;
//	float n = 1;
//	float h = 0 ;
//
//	while (1)
//	{
//		s = s + h;
//		h = 1 / n;
//		n = n + 1;
//		if (n > 10)
//		{
//			printf("%f", s);
//			break;
//		}
//	}
//	return 0;
//}




////16-1 (77/1)-(76*2)+(75/3).....+(2/76)-(1+77)
//
//#include<stdio.h>
//int main()
//{
//	float h = 0.0;
//	float p = 0.0, m = 0.0, q = 0.0;
//
//
//	while(p<77)
//	{
//		p = p + 1;
//		q = 78 - p;
//		m = q / p;
//		h = h - m;
//
//		p = p + 1;
//		q = 78 - q;
//		m = q * p;
//		h = h  + m;
//	}
//	
//	printf("%f", h);
//	return 0;
//}



////18-1 n���� ������ �Է¹޾� �ִ밪�� �ּҰ��� ������ ������ ����� ���Ͽ� ���(������1~100)
//#include<stdio.h>
//#pragma warning (disable: 4996)
//int main()
//{
//	float hap = 0;
//	float avg = 0;
//	float p = 0;
//	float max = 0;
//	float min = 100;
//	float n, jum;
//
//	printf("�л� ���� �Է��ϼ���: ");
//	scanf("%f", &n);
//	while (1)
//	{
//		printf("������ �Է��ϼ���: ");
//		scanf("%f", &jum);
//		p = p + 1;
//		hap = hap + jum;
//		if (max < jum)
//		{
//			max = jum;
//		}
//		if (min > jum)
//		{
//			min = jum;
//		}
//		if (p >= n)
//		{
//			break;
//		}
//	}
//
//		hap = hap - (max + min);
//		avg = hap / (n - 2);
//		printf("%f", avg);
//	
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




////19-2 -1+2-3+4....-99
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//
//	while (1)
//	{
//		n = n + 1;
//		sum = sum - n;
//		if (n >= 99)
//		{
//			printf("%d", sum);
//			break;
//		}
//		else if (n < 100)
//		{
//			n = n + 1;
//			sum = sum + n;
//		}
//	}
//	return 0;
//}


////20-1 s=1/2-1/3+1/4-1/5....-1/49+1/50
//
//#include<stdio.h>
//int main()
//{
//	float n = 0.0;
//	float s = 0.0;
//	float sw = 0.0;
//
//
//	for (n = 1; n < 49; n++)
//	{
//		if (sw == 0)
//		{
//			s = s + 1 / (n + 1);
//			sw = 1;
//		}
//		else
//		{
//			s = s - 1 / (n + 1);
//			sw = 0;
//		}
//		
//	}
//
//	printf("����: %f", s);
//	return 0;
//}


//20-2 1���� 100�� 4�� ����̸鼭 6�ǹ���� ������ ����Ͽ���

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int rem = 0;
//
//	while (i <= 100)
//	{
//		rem = i % 4;
//		if (rem == 0)
//		{
//			
//			rem = i % 6;
//			if (rem == 0)
//			{
//				printf("%d\n", i);
//			}
//		}
//		
//		i = i + 1;
//	}
//	return 0;
//}
//


////21-1 �ȸ���� ���Ի�� n�� ���� �Ի������� �Է¹ް� �ְ������� ���������� �� ������ �հ�� ����� ���Ͽ� ���
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	float n = 0.0;
//	float k = 1.0;
//	float min = 100.0;
//	float max = 0;
//	float hap = 0;
//	float avr = 0;
//	float j;
//
//	printf("���Ի�� ���� �Է��ϼ���: ");
//	scanf("%f", &n);
//
//	while (k <= n)
//	{
//		scanf("%f", &j);
//		if (j < min)
//		{
//			min = j;
//		}
//		else
//		{
//			if (j > max)
//			{
//				max = j;
//			}
//		}
//		hap = hap + j;
//		k = k + 1;
//
//	}
//	hap = hap - (max + min);
//	avr = hap / (n - 2);
//	printf("���� %f ����� %f", hap, avr);
//	return 0;
//
//}



////21-2 �ڿ��� n�� �Է¹޾� �Ҽ����θ� ����ϴ� �������� �ۼ�
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int k = 1;
//	int n;
//
//	printf("�ڿ����� �Է�: ");
//	scanf("%d", &n);
//
//	while (1)
//	{
//		k = k + 1;
//		if (n % k == 0)
//		{
//			break;
//		}
//	}
//	if (n == k)
//	{
//		printf("�Ҽ�");
//	}
//	else
//	{
//		printf("�Ҽ��ƴ�");
//	}
//	return 0;
//}


////22-1 � �ڿ��� n�� �Է¹޾� 2���� n������ ��� �Ҽ��� ���϶�
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


////22-2 ���� ��� �հ踦 ���, ������ 1, ���������� �ð��� 24����̸� �ִ����� 3�����̰� 10�й̸��� ����, 30�б����� 500 30�� �ĺ��ʹ� 10�д� 500��
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int sum = 0;
//	int p = 1;
//	int tmp = 0;
//	int fare = 0;
//
//	printf("������ �ð���?");
//	scanf("%d", &tmp);
//	if (tmp >= 10)
//	{
//		fare = 500;
//		if (tmp >= 30)
//		{
//			tmp = tmp - 30;
//		}
//		else
//		{
//			if (fare < 30000)
//			{
//				printf("%d", fare);
//			}
//			else
//			{
//				fare = 30000;
//				printf("%d", fare);
//			}
//		}
//		while (tmp >= 1)
//		{
//			fare = fare + 500;
//			tmp = tmp - 10;
//		}
//		if (fare < 30000)
//		{
//			printf("%d", fare);
//		}
//		else
//		{
//			fare = 30000;
//			printf("%d", fare);
//		}
//	}
//	else
//	{
//		if (fare < 30000)
//		{
//			printf("%d", fare);
//		}
//		else
//		{
//			fare = 30000;
//			printf("%d", fare);
//		}
//	}
//	return 0;
//}


////23-2 �Ʒ��� � �� 30,24,71,41,43,86,70�� �迭�� A�� ���Ǿ����� ��
////�����͸� �о �ִ밪, �ּҰ�,�հ�, ����� ���϶�
//
//#include<stdio.h>
//int main()
//{
//	int s = 0;
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	int avg = 0;
//
//	int A[8] = { 0, 30,24,71,41,43,86,70 }; 
//	
//	while (1)
//	{
//		i = i + 1;
//		if (i >= 8)
//		{
//			break;
//			
//		}
//		else
//		{
//			if (max < A[i])
//			{
//				max = A[i];
//			}
//			if (min > A[i])
//			{
//				min = A[i];
//			}
//	
//		}
//		s = s + A[i];
//		
//	}
//	i = i - 1;
//    avg = s / i;
//    printf("%d %d %d %d", max,min, s, avg);
//	return 0;
//}

////24-1 1���� �迭�� �̿��Ͽ� �л� 30���� ����, ��������, ��������, ��������, ���������� �޾� ������ ����ϰ� �������� ���ĸ� ���Ͽ� ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int n[30];
//	int k[30];
//	int e[30];
//	int m[30];
//	int c[30];
//	int s[30];
//	int j;
//	int i = 1;
//	int R;
//	int k;
//
//	while (i <= 30)
//	{
//		scanf("%d\n,%d\n,%d\n,%d\n,%d\n", &n[i], &k[i], &e[i], &m[i], &c[i]);
//		s[i] = k[i] + e[i] + m[i] + c[i];
//		i = i + 1;
//	}
//	for (j = 1; j == 30; j++)
//	{
//		R = 1;
//		for (k = 1; k == j, k++)
//		{
//			if (s[j] < s[k])
//			{
//				R = R + 1;
//			}
//			
//		}
//		printf(" %d, % d, % d, % d, % d, % d", n[j], k[j], e[j], m[j], c[j], R);
//	}
//	return 0;
//}




////24-2 �Ʒ��� � �� 27,63,44,56,73,18,83,87,53,29,77�� �迭 A�� ���Ǿ� ���� �� �����͸� �о
////�ִ밪, �ּҰ�, �հ�, ����� ���϶�
//
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int avg = 0;
//	int max = 0;
//	int min = 99;
//	int i = 0;
//	int a[13] = { 0,27,53,44,56,73,18,83,87,53,29,77 };
//
//	while (1)
//	{
//		i = i + 1;
//		if (i == 12)
//		{
//			break;
//		}
//		else
//		{
//			if (max < a[i])
//			{
//				max = a[i];
//			}
//			if (min > a[i])
//			{
//				min = a[i];
//			}
//		}
//		sum = sum + a[i];
//	}
//	i = i - 1;
//	avg = sum / i;
//	printf("%d %d %d %d" , max, min, sum, avg);
//
//	return 0;
//}


//25-1 �迭 a,b�� ���ܾ �ϳ��� �Է��Ͽ��� ��, �迭 c�� a�� b�� �̾� �ٿ���
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	char a[100];
//	char b[100];
//	char c[200];
//	char n = 0;
//	char i = 0;
//
//	scanf("%c %c", &a, &b);
//
//	while (1)
//	{
//		if (97 <= a[n] <= 122)
//		{
//			c[i] = a[n];
//
//			n = n + 1;
//			i = i + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	n = 0;
//
//	while (1)
//	{
//		if (97 <= b[n] <= 122)
//		{
//			c[i] = b[n];
//
//			n = n + 1;
//			i = i + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%c", c[i]);
//	return 0;
//}


////25-2 10���� �ڿ����� �迭�� �Է¹޾� �ִ� ���� ������ �հ��� ����� ���
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int main()
//{
//	int arr[10];
//	int i = 1;
//	int j = 1;
//	int max = 0;
//    int sum = 0;
//	int avr = 0;
//
//	while (i <= 10)
//	{
//		scanf("%d", &arr[i]);
//		i = i + 1;
//	}
//	max = arr[1];
//	sum = arr[1];
//
//	while (1)
//	{
//		if (j >= 10)
//		{
//			break;
//		}
//		else
//		{
//			j = j + 1;
//		}
//		if (arr[j] <= max)
//		{
//			sum = sum + arr[j];
//		}
//		else
//		{
//			max = arr[i];
//			sum = sum + arr[i];
//		}
//
//	}
//	sum = sum - max;
//	avr = sum / 9;
//
//	printf("%d", avr);
//
//	return 0;
//}

////26-1 0���� 999������ ������ 10�� ������ �޾� 8������ ��ȯ
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
//		
//	}
//	i = i - 1;
//	while (i>=0)
//	{
//			printf("%d\n", a[i]);
//			i = i - 1;
//	}
//	
//}

////26-2 0���� 999 ������ ������ 8������ �޾� 10������ ��ȯ
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int a[10];
//	int i = 0;
//	int s = 1;
//	int sum = 0;
//	int j=0;
//	
//	scanf("%d", a[j]);
//	while (0 <= a[i] <= 7)
//	{
//		i = i + 1;
//	}
//	while (i <= 0)
//	{
//		sum = sum + (a[i] * s);
//		i = i - 1;
//		s = s * 8;
//		printf("%d\n", a[i]);
//	}
//	
//}



////27-1 �Ʒ��� �������� �迭�� �Էµ� 10���� ���� �߿��� Ȧ���̸鼭 3�� ��� ���� �� ������ ���ϴ� �˰���
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int array[10] = { "1,2,3,4,5,6,7,8,9,10" };
//	int h = 1;
//	int rem;
//	int oddcnt = 0;
//	int num;
//
//	//printf("�����迭�� �Է��ϼ���: ");
//	//for (int i = 0;i <= 10; i++)
//	//{
//	//	scanf("%d", &num);
//	//	array[i] = num;
//	//}
//		while (h < 11)
//		{
//
//			rem = array[h] % 2;
//			if (rem == 0)
//			{
//				h = h + 1;
//			}
//			else
//			{
//				if (array[h] % 3 == 0)
//				{
//					oddcnt = oddcnt + 1;
//					h = h + 1;
//				}
//				else
//				{
//					h = h + 1;
//				}
//			}
//		}
//	
//		printf("%d", oddcnt);
//	
//}


////27-2 3�� 3���� 2���� �迭�� �Ʒ��� ���� ���� �Է��϶�
//#include<stdio.h>
//void main()
//{
//	int p = 1;
//	int q = 1;
//	int a[3][3];
//
//	while (1)
//	{
//		if (p >= 4)
//		{
//			break;
//		}
//		else
//		{
//
//				if (q <= p)
//				{
//					a[p][q] = q;
//					q = q + 1;
//				}
//				else
//				{
//					p = p + 1;
//				}
//		}
//	}
//}


////28-1 �迭�� ����Ų 10���� �ڿ��� �߿��� 4�� ����� ������ �հ踦 ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 0;
//	int rem = 0;
//	int sum = 0;
//	int A[10];
//	int num;
//
//	printf("������ �Է��Ͻÿ�: ");
//	for (int i = 0; i <= 10;i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		rem = A[i] % 4;
//		if (rem == 0)
//		{
//			sum = sum + A[i];
//		}
//
//	}
//	printf("%d", sum);
//}

//
////29-2 5�� 5���� 2���� �迭�� �Ʒ��� ���� ���� �Է��϶�
//#include<stdio.h>
//int main()
//{
//	int p = 0;
//	int q = 0;
//	int k = 1;
//	int a[5][5];
//
//	while (p < 5)
//	{
//		p = p + 1;
//
//		while (q < p)
//		{
//			q = q + 1;
//			a[p][q] = k;
//			k = k + 2;
//		
//		}
//		printf("%d\n", a[p][q]);
//	}
//	
//
//}

////30-1 5�ڸ��� �������� �Է¹޾� 1�� ������ 2�� ������ ��ȯ�Ͽ� �� �迭�� �����Ͽ���
//
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int a[5];
//	int p = 0;
//	int c = 1;
//	int c1[5];
//	int c2[5];
//
//	while (p < 5)
//	{
//		p = p + 1;
//		scanf("%d", &a[p]);
//		c1[p] = 1 - a[p];
//	}
//	while (1)
//	{
//		c2[p] = c1[p] + c;
//		c2[p] = c2[p] % 2;
//		c = c1[p] * c;
//		p = p - 1;
//		if (p == 0)
//		{
//			break;
//		}
//		
//	}
//	printf("%d", c2[p]);
//	return 0;
//
//
//
//}


////30-2 20���� ����, ����, ���� ������ �Է� �޾� ����� ���� �� ����� 50�� �Ѵ� ����鸸 �������
////������ ���Ͽ� �Է��� ������ ��� ������ ����϶�
//
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int a[20];
//	int sum;
//	int kor, eng, mat;
//	int rank;
//	int j;
//	int n = 0, k = 0;
//
//	while (n < 20)
//	{
//		n = n + 1;
//		scanf("%d %d %d", &kor, &eng, &mat);
//		sum = kor + eng + mat;
//		if (sum >= 150)
//		{
//			k = k + 1;
//			a[k] = sum / 3;
//		}



////32-2 �迭 a(5)�� �Էµ� ���� ������������ �����Ͽ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int n = 5;
//	int i = 0;
//	int j;
//	int a(5);
//	int tm, flag;
//
//	while (1)
//	{
//		flag = 0;
//		i = i + 1;
//		j = 0;
//		
//		j = j + 1;
//		if (a[j] < a[j + 1])
//		{
//			tm = a[j];
//			a[j] = a[j + 1];
//			a[j + 1] = tm;
//			flag = 1;
//		}
//		j >= n - i;
//		
//	}
//}

////33-1�Էµ� ������ �ش��ϴ� �ڸ������� �޸��� ��� ����Ͽ���
//
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int k = 0;
//	int i = 0;
//	int a[11];
//	int s[11];
//	int m;
//
//	scanf("%d", &m);
//
//	while (m!=0)
//	{
//		
//		if ((i + 1) % 4 == 0)
//		{
//			s[i] = ",";
//			i = i + 1;
//		}
//
//		k = m % 10;
//		s[i] = a[k];
//		m = m / 10;
//		i = i + 1;
//	}
//	i = i - 1;
//
//	while (1)
//	{
//		if (i <= 0)
//		{
//			printf("%d", s[i]);
//			i = i - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}


////33-2 ������������ ���ĵ� �迭 A,B�� �����Ͽ� ���ο� �迭 T�� ������������ ����
//#include<stdio.h>
//void main()
//{
//	int a[5] = { 3,8,9,20,25 };
//	int b[5] = { 2,5,10,21,26 };
//	int t[10];
//	int j = 1, i=1, k=1;
//
//	while (i <= 10)
//	{
//		if (k > 5)
//		{
//			t[j] = b[i];
//			i = i + 1;
//		
//		}
//		else
//		{
//			if (i > 5)
//			{
//				t[j] = a[k];
//				k = k + 1;
//				
//			}
//			else
//			{
//				if (a[k] >= b[i])
//				{
//					t[j] = a[k];
//					k = k + 1;
//				
//				}
//				else
//				{
//					t[j] = b[j];
//					i = i + 1;
//					
//				}
//			}
//		}
//		j = j + 1;
//		printf("%d", t[j]);
//	}
//
//}



////34-1 10���� �����Ͱ� ����� �迭 a�� 16,35,21,97,46,37,24,87,40,88 �� ����� 5�� �ִ� ���� ���� ���Ͽ���
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 16,35,21,97,46,37,24,87,40,88 };
//	int i = 1;
//	int rem = 0;
//	int sum = 0;
//
//	while (i <= 10)
//	{
//		rem = a[i] % 5;
//		if (rem == 0)
//		{
//			sum = sum + a[i];
//		}
//		i = i + 1;
//		
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

////34-2 � �ڿ��� n�� �Է¹޾� 2���� n������ �Ҽ��� �հ踦 ���Ͽ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 1;
//	int s = 0;
//	int n;
//	int k = 2;
//
//	scanf("%d", &n);
//
//	while (1)
//	{
//		i = i + 1;
//		k = 2;
//		while ((i % k) != 0)
//		{
//			k = k + 1;
//		}
//		
//	    if (i == k)
//		{
//			s = s + i;
//		}
//		if (i == n)
//		{
//			break;
//		}
//	}
//	printf("%d", s);
//
//}

////35-1 �迭 a�� 7���� ���� �Է¹޾� �ִ밪, �ּҰ�, �հ�, ����� ���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int s = 0, i = 0;
//	int max = 0;
//	int min = 100;
//	int a[7];
//	double avg = 0;
//
//	while (i<7)
//	{
//		scanf("%d", &a[i+1]);
//		i = i + 1;
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//		s = s + a[i];
//
//	}
//	avg= (double) s / 7;
//	printf("%d, %d, %1.lf", max, min, avg);
//	return 0;
//
//}




////35-2 �Ʒ��� � �� 27,63,44, 56,73, 18,83,87,53,29,77�� �迭 A�� ���Ǿ� ���� �� �����͸�
////�о �ִ밪, �ּҰ�, �հ�, ����� ���ض�
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int sum = 0;
//	int avg = 0;
//	int max = 0;
//	int min = 99;
//	int i = 0;
//	int a[11] = { 27,63,44,56,73,18,83,87,53,29,77 };
//	
//	while (1)
//	{
//		i = i + 1;
//
//		if (i == 11)
//		{
//			break;
//		}
//		
//		if (max<a[i])
//		{
//			max = a[i];
//		}
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//		sum = sum + a[i];
//	}
//	i = i - 1;
//	avg =(double) sum / i;
//	printf("%d, %d, %d, %d", max, min, sum, avg);
//	return 0;
//
//}


////36-1 ���ܾ �Է��Ͽ����� �� ���ܾ��� ���̸� ���
////�ƽ�Ű�ڵ� ���- �ƽ�Ű �ڵ��� �ҹ���(a: 97, b:98~z:122)
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int str[100];
//	int n = 0;
//	char num;
//
//	scanf("%c", &num);
//
//	while (97 <= str[n] <= 122)
//	{ 
//
//			n = n + 1;
//
//	}
//	printf("%d", n);
//	return 0;
//}



////36-2 10���� �ڿ����� �迭�� �Է¹޾� �ּ� ���� ������ �հ��� ����� ����϶�
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int array[10];
//	int i = 1;
//	int j = 1;
//	int min ;
//	int sum;
//	double aver;
//
//	for (i = 1; i < 10; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//	min = array[1];
//	sum = array[1];
//
//	while (j < 10)
//	{
//		j = j + 1;
//		if (array[j] < min)
//		{
//			min = array[j];
//		}
//		sum = sum + array[i];
//	}
//	sum = sum - min;
//	aver =(double)  sum / 9;
//
//	printf("%1.lf", aver);
//	return 0;
//
//}

////37-1 0���� 999 ������ ������ 10�� ������ �޾� 2������ ��ȯ
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int a[10];
//	int rem = 1;
//	int i = 1;
//	int num;
//	int mok;
//	scanf("%c", &num);
//	while (1)
//	{
//		if (num == i)
//		{
//			break;
//		}
//		mok = num / 2;
//		rem = num % 2;
//		a[i] = rem;
//		num = mok;
//		i = i + 1;
//	}
//	while (1)
//	{
//		if (i <= 1)
//		{
//			break;
//		}
//		printf("%c", a[i]);
//		i = i - 1;
//	}
//	return 0;
//}


////37-2 0���� 999������ ������ 2������ �޾� 10������ ��ȯ
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int a[10];
//	int i = 1;
//	int s = 1;
//	int sum = 0;
//
//	scanf("%d", &a[i]);
//	while (0 <= a[i] <= 1)
//	{
//		i = i + 1;
//	}
//	while (i <= 0)
//	{
//		if (a[i] == 1)
//		{
//			sum = sum + s;
//		}
//		i = i - 1;
//		s = s * 2;
//	}
//	return 0;
//}


////38-1 �迭�� �Էµ� 10���� ���� �߿��� Ȧ���� ������ ¦���� ������ ���ϴ� �˰���
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int array[10];
//	int h = 1;
//	int rem;
//	int jjacnt = 0;
//	int oddcnt = 0;
//	int num;
//	
//	while (h < 11)
//	{
//		scanf("%d", &array[h]);
//		num = array[h];
//
//		rem = num % 2;
//		if (rem == 0)
//		{
//			jjacnt = jjacnt + 1;
//		}
//		else
//		{
//			oddcnt = oddcnt + 1;
//		}
//		h = h + 1;
//	}
//	printf("¦���� %d��, Ȧ���� %d��", jjacnt, oddcnt);
//}


////38-2 ���������� �� �迭�� ���Ͽ� ���������迭�� ���� c(k)�� �ϼ��Ͽ���
//
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int b[10];
//	int c[20];
//
//	int i = 1;
//	int j = 1;
//	int k = 1;
//
//
//	if (a[i] >= b[j])
//	{
//		c[k] = b[j];
//		j = j + 1;
//		k = k + 1;
//		
//	}
//}




//39-2 �迭�� ����Ų 10���� �ڿ��� �߿��� 5�� ����� ������ �հ踦 ���Ͽ� ����Ͽ���
//
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int i = 0, rem = 0, sum = 0;
//	int a[10];
//
//	while (i < 10)
//	{
//		
//		scanf("%d", &a[i]);
//		rem = a[i] % 5;
//		if (rem == 0)
//		{
//			sum = sum + a[i];
//		}
//		i = i + 1;
//	}
//	printf("%d", sum);
//}


////40-1 5�� 5���� 2���� �迭�� �Ʒ��� ���� ���� �Է��Ͽ���
//#include<stdio.h>
//int main()
//{
//	int p = 0;
//	int k = 1;
//	int l = 1;
//	int q = 0;
//	int a[5][5];
//
//	while (p < 5)
//	{
//		p = p + 1;
//		q = 0;
//		while (q > p)
//		{
//			q = q + 1;
//			while (l != k)
//			{
//				l = l + 1;
//				k = 2;
//				while (1 % k == 0)
//				{
//					k = k + 1;
//				}
//			}
//			a[p][q] = l;
//		}
//	}
//}


////40-2 5�� 5���� 2���� �迭�� �Ʒ��� ���� ���� �Է��Ͽ���
//#include<stdio.h>
//int main()
//{
//	int p = 0;
//	int q = 0;
//	int k = 0;
//	int a[5][5];
//
//	while (p < 5)
//	{
//		p = p + 1;
//		while (q < p)
//		{
//			q = q + 1;
//			k = k + 1;
//			a[p][q] = k;
//		}
//		printf("%d", a[p][q]);
//	}
//	
//}


//41-1 5�ڸ��� �������� �Է¹޾� 1�� ������ 2�� ������ ��ȯ�Ͽ� �� �迭�� �����Ͽ���.
//#include<stdio.h>
//#pragma warning (disable: 4996)
//int main()
//{
//	int a[5],c1[5],c2[5];
//	int p = 0;
//	int c = 1;
//	
//
//	while (p < 5)
//	{
//		p = p + 1l;
//		scanf("%d", &a[p]);
//		c1[p] = 1 - a[p];
//		printf("%d", c1[p]);
//	}
//}


////41-2 20���� ����,����, ���� ������ �Է¹޾� ����� ���� �� ������� ������ ���Ͽ� �Է��� ������ ���,������ ����Ͽ���
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int a[20];
//	int sum, kor, eng, mat, rank;
//	int j, k;
//	int n = 0;
//
//	while (n <= 20)
//	{
//		n = n + 1;
//		scanf("%d %d %d", &kor, &eng, &mat);
//		sum = kor + eng + mat;
//		a[n] = sum / 3;
//	}
//
//	for (j = 1; j <= 20; j++)
//	{
//		rank = 1;
//		for (k = 1; k <= 20; k++)
//		{
//			if (a[j] < a[k])
//			{
//				rank = rank + 1;
//			}
//		}
//		printf("��ȣ: %d, ���: %d ,���: %d\n", j, a[j], rank);
//	}
//	return 0;
//}

////43-2 �迭 a(5)�� �Էµ� ���� ������������ �����Ͽ���
//#include<stdio.h>
//int main()
//{
//	int n = 5;
//	int i = 0;
//	int j, a[5], tm, flag;
//
//	while (flag != 0)
//	{
//		flag = 0;
//		i = i + 1;
//		j = 0;
//
//		while (1)
//		{
//			j = j + 1;
//			if (a[j] > a[j + 1)
//			{
//				tm = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tm;
//				flag = 1;
//			}
//			if (j <= n - i)
//			{
//				break;
//			}
//			
//		}
//	}
//}


////44-2 ������������ ���ĵ� �迭 A,B�� �����Ͽ� ���ο� �迭 T�� ������������ �����Ͽ���
//#include<stdio.h>
//int main()
//{
//	int a[5] = { 3,8,9,20,25 };
//	int b[5] = { 2,5,10,21,26 };
//	int t[10];
//	int j = 1, i = 1, k = 1;
//
//	while (j <= 10)
//	{
//		if (k > 5)
//		{
//			t[j] = b[i];
//			i = i + 1;
//		}
//		else
//		{
//			if (i > 5)
//			{
//				t[j] = a[k];
//				k = k + 1;
//			}
//			else
//			{
//				if (a[k] <= b[i])
//				{
//					t[j] = a[k];
//					k = k + 1;
//				}
//				else
//				{
//					t[j] = b[i];
//					i = i + 1;
//				}
//			}
//		}
//		j = j + 1;
//		printf("%d\n", t[j]);
//	}
//	
//	return 0;
//}


////��������
//#include<stdio.h>
//#pragma warning (disable: 4996)
//
//int main(void)
//{
//	int floor;
//	int i;
//
//	printf("������ �Է��ϼ���: ");
//	scanf("%d", &floor);
//
//	if (1 <= floor <= 3)
//	{
//		i = 0;
//	}
//	else if (4 <= floor <= 7)
//	{
//		i = 1;
//	}
//	else if (8<=floor<=10)
//	{
//		i = 2;
//	}
//
//
//	switch (i)
//	{
//	case 0:
//printf("%d���� �����Դϴ�.",floor);
//break;
//
//	case 1: 
//printf("%d���� �ξ����Դϴ�.",floor);
//break;
//
//	case 2: 
//printf("%d���� �����Դϴ�.",floor);
//break;
//
//	default:
// printf("�� �� �Է��ϼ̽��ϴ�.");
//		break;
//	}
//return 0;
//}


////45-1 10���� �����Ͱ� ����� �迭 a�� 16,35,21,97,46,37,24,87,40,88,�� 4�� ��� ���� ���Ͽ���
//#include<stdio.h>
//int main()
//{
//	int a[11] = { 16,35,21,97,46,37,24,87,40,88 };
//	int i = 1;
//	int rem = 0, sum = 0;
//
//
//
//	while (i <= 10)
//	{
//		
//		rem = a[i] % 4;
//		if (rem == 0)
//		{
//			sum = sum + a[i];
//		}
//		i = i + 1;
//		
//	}
//	printf("%d", sum);
//}

//46-1 5��5���� 2���� �迭�� �Ʒ��� ���� ���� �Է��Ͽ���
//#include<stdio.h>
//int main()
//{
//	int p = 2;
//	int q = 0, y = 0, i = 0;
//	int a[6][6];
//
//	while (q < 3)
//	{
//		q = q + 1;
//
//		for (y = 1 + p; y < 5 - p; y++)
//		{
//			a[q][y] = y;
//		}
//
//		p = p - 1;
//		printf("%d", a[q][y]);
//     }
//	return 0;
//}

//
////10���� �����͸� �Է� �޾� 5�� ����� �ƴ� ���� ���Ͽ� ���
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int a[11];
//	int i = 1;
//	int rem = 0, sum = 0;
//
//	while (i <= 10)
//	{
//
//		scanf("%d", &a[i]);
//		rem = a[i] % 5;
//			if (rem != 0)
//			{
//				sum = sum + a[i];
//			}
//		i = i + 1;
//	}
//	printf("%d", sum);
//}

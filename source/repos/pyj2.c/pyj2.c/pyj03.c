////1번 s=1/2-2/3+3/4-4/5.......-48/49+49/50 의 합
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

//2번 1에서 500까지의 정수 중에서 6의 배수이면서 7의 배수인 수를 출력하여라
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

//3 입력한 수보다 작은 피보나치 수열 중 가장 큰 값을 수하여라
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

//4 이 문제는 N항 까지의 피보나치 수열의 합을 구하는 문제이다.
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

////6번 1-2+3-4+5-6....+9-10의 합
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
////7번 s=1+1+1/2+1/3+1/4...1/10을 구하여라
//#include<stdio.h>
//int main()
//{
//    float s = 1.0;
//	float n = 1.0;
//	float h = 0.0;
//
//	while (n <= 10)
//	{
//			h = 1 / n;      //계산식 선언을 통일시켜야함
//			s = s + h;
//			n = n + 1;
//		
//			
//	}
//	printf("%f\n", s);
//	return 0;
//}

//8번 서로 다른 A,B 두 자연수를 입력했을때 두 자연수 사이의 수들의 합계를 구하여라
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


////9번 (77*1)+(77*2)+(75*3).....+(2*76)+(1*77)
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
	printf("합계는 %d", h);
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


////10번 1부터100까지의 정수 중에서 3의 배수 이면서 5의 배수인 수를 출력
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



////11번 2!+3!+4!+.....+19!+20!
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
//	printf("총합은 %d", sum);
//	return 0;
//}


////12 서로 다른 x,y 두 자연수를 입력하였을 떄 두 자연수 사이의 홀수들의 합계를 구하여라
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
//     printf("합은 %d", sum);
//	 return 0;
//}


////13번 어떤 수의 약수 중 그 수를 제외한 약수를 모두 합하면 자신과 같아지는 수들을
////1부터 500까지 중에서 찾아 출력하고 개수를 출력
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



////-1*2+2*3-3*4+4*5......-99*100의 결과
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
//	printf("sum은 %d", sum);
//	return 0;
//}


////10p-1 s==1/128-2/64+3/32-4/16....-6/2+7/1의 합
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
//	printf("s는 %d", s);
//	return 0;
//}

//
////p10-2 1에서 100중 3의 배수이면서 5의 배수가 아닌 값들 출력
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int rem = 0;
//
//	for(i=1)
//}








////p11-1 어떤회사의 신입사원n명에 대한 입사점수를 입력 받고 최고점수와 최저 점수의 합계와 평균을 구하여 출력
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
//	printf("사원 수를 입력하세요: ");
//	scanf("%f", &n);
//
//	for (k = 1; k <= n; k++)
//	{
//		printf("점수를 입력하세요: ");
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
//	printf("평균은 %f, 합은 %f", aver, hap);
//		return 0;
//}


////11-2 이 문제는 1+1+2+3+5+8+13+21+34의 결과를 구하는 알고리즘
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


////12-1 무작위 금액을 입력받아 화폐 단위 별로 화폐의 매수를 계산
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



////12-2 200에서 700까지의 정수 중에서 9의 배수이거나 6의 배수인 수를 출력
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


////13-1 n항까지의 피보나치 수열의 짝수 합을 구하여라
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
//	printf("입력하세요: ");
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


////13-2 s=1/2-1/4+1/8-1/16......-1/128+1/256의 합을 구하여라
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




//14-1 1*2/3*4/5*6....98/99의 결과를 구하여라
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



////18-1 n개의 점수를 입력받아 최대값과 최소값을 제외한 값들의 평균을 구하여 출력(점수는1~100)
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
//	printf("학생 수를 입력하세요: ");
//	scanf("%f", &n);
//	while (1)
//	{
//		printf("점수를 입력하세요: ");
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
//	printf("합은: %f", s);
//	return 0;
//}


//20-2 1에서 100중 4의 배수이면서 6의배수인 값들을 출력하여라

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


////21-1 어떤회사의 신입사원 n명에 대한 입사점수를 입력받고 최고점수와 최저점수를 뺀 점수의 합계와 평균을 구하여 출력
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
//	printf("신입사원 수를 입력하세요: ");
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
//	printf("합은 %f 평균은 %f", hap, avr);
//	return 0;
//
//}



////21-2 자연수 n을 입력받아 소수여부를 출력하는 순서도를 작성
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int k = 1;
//	int n;
//
//	printf("자연수를 입력: ");
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
//		printf("소수");
//	}
//	else
//	{
//		printf("소수아님");
//	}
//	return 0;
//}


////22-1 어떤 자연수 n을 입력받아 2부터 n까지의 모든 소수를 구하라
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


////22-2 주차 요금 합계를 계산, 조건은 1, 주차가능한 시간은 24기단이며 최대요금은 3만원이고 10분미만은 무려, 30분까지는 500 30분 후부터는 10분당 500원
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int sum = 0;
//	int p = 1;
//	int tmp = 0;
//	int fare = 0;
//
//	printf("주차한 시간은?");
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


////23-2 아래는 어떤 수 30,24,71,41,43,86,70이 배열에 A에 기억되어있을 때
////데이터를 읽어서 최대값, 최소값,합계, 평균을 구하라
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

////24-1 1차원 배열을 이용하여 학생 30명의 성명, 국어점수, 영어점수, 수학점수, 전산점수를 받아 총점을 계싼하고 총점으로 석파를 구하여 출력
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




////24-2 아래는 어떤 수 27,63,44,56,73,18,83,87,53,29,77이 배열 A에 기억되어 있을 때 데이터를 읽어서
////최대값, 최소값, 합계, 평균을 구하라
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


//25-1 배열 a,b에 영단어를 하나씩 입력하였을 떄, 배열 c에 a와 b를 이어 붙여라
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


////25-2 10개의 자연수를 배열에 입력받아 최대 값을 제외한 합계의 평균을 출력
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

////26-2 0에서 999 사이의 임의의 8진수를 받아 10진수로 변환
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



////27-1 아래의 순서도는 배열에 입력된 10개의 정수 중에서 홀수이면서 3의 배수 수를 뺀 갯수를 구하는 알고리즘
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
//	//printf("정수배열을 입력하세요: ");
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


////27-2 3행 3열의 2차원 배열에 아래와 같이 값을 입력하라
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


////28-1 배열에 기억시킨 10개의 자연수 중에서 4의 배수인 값들의 합계를 출력
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
//	printf("정수를 입력하시오: ");
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
////29-2 5행 5열의 2차원 배열에 아래와 같이 값을 입력하라
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

////30-1 5자리의 이진수를 입력받아 1의 보수와 2의 보수로 변환하여 각 배열에 저장하여라
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


////30-2 20명의 국어, 영어, 수학 점수를 입력 받아 평균을 구한 후 평균이 50점 넘는 사람들만 평균으로
////석차를 구하여 입력한 순서와 평균 석차를 출력하라
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



////32-2 배열 a(5)에 입력된 값을 내림차순으로 정렬하여라
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

////33-1입력된 정수에 해당하는 자릿수마다 콤마를 찍어 출력하여라
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


////33-2 오름차순으로 정렬된 배열 A,B를 병합하여 새로운 배열 T를 내림차순으로 정렬
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



////34-1 10개의 데이터가 저장된 배열 a에 16,35,21,97,46,37,24,87,40,88 중 약수가 5가 있는 수의 합을 구하여라
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

////34-2 어떤 자연수 n을 입력받아 2부터 n까지의 소수의 합계를 구하여라
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

////35-1 배열 a에 7개의 값을 입력받아 최대값, 최소값, 합계, 평균을 출력
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




////35-2 아래는 어떤 수 27,63,44, 56,73, 18,83,87,53,29,77이 배열 A에 기억되어 있을 때 데이터를
////읽어서 최대값, 최소값, 합계, 평균을 구해라
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


////36-1 영단어를 입력하였을때 그 영단어의 길이를 출력
////아스키코드 사용- 아스키 코드의 소문자(a: 97, b:98~z:122)
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



////36-2 10개의 자연수를 배열에 입력받아 최소 값을 제외한 합계의 평균을 출력하라
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

////37-1 0에서 999 사이의 임의의 10진 정수를 받아 2진수로 변환
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


////37-2 0에서 999사이의 임의의 2진수를 받아 10진수로 변환
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


////38-1 배열에 입력된 10개의 정수 중에서 홀수의 개수와 짝수의 개수를 구하는 알고리즘
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
//	printf("짝수는 %d개, 홀수는 %d개", jjacnt, oddcnt);
//}


////38-2 오름차순의 두 배열을 합하여 오름차순배열을 갖는 c(k)를 완성하여라
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




//39-2 배열에 기억시킨 10개의 자연수 중에서 5의 배수인 값들의 합계를 구하여 출력하여라
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


////40-1 5행 5열의 2차원 배열에 아래와 같이 값을 입력하여라
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


////40-2 5행 5열의 2차원 배열에 아래와 같이 값을 입력하여라
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


//41-1 5자리의 이진수를 입력받아 1의 보수와 2의 보수로 변환하여 각 배열에 저장하여라.
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


////41-2 20명의 국어,영어, 수학 점수를 입력받아 평균을 구한 후 평균으로 석차를 구하여 입력한 순서와 평균,석차를 출력하여라
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
//		printf("번호: %d, 평균: %d ,등수: %d\n", j, a[j], rank);
//	}
//	return 0;
//}

////43-2 배열 a(5)에 입력된 값을 오름차순으로 정렬하여라
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


////44-2 오름차순으로 졍렬된 배열 A,B를 병합하여 새로운 배열 T를 오름차순으로 정렬하여라
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


////오름차순
//#include<stdio.h>
//#pragma warning (disable: 4996)
//
//int main(void)
//{
//	int floor;
//	int i;
//
//	printf("층수를 입력하세요: ");
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
//printf("%d층은 저층입니다.",floor);
//break;
//
//	case 1: 
//printf("%d층은 로얄층입니다.",floor);
//break;
//
//	case 2: 
//printf("%d층은 고층입니다.",floor);
//break;
//
//	default:
// printf("잘 못 입력하셨습니다.");
//		break;
//	}
//return 0;
//}


////45-1 10개의 데이터가 저장된 배열 a에 16,35,21,97,46,37,24,87,40,88,중 4의 배수 합을 구하여라
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

//46-1 5행5열의 2차원 배열에 아래와 같이 값을 입력하여라
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
////10개의 데이터를 입력 받아 5의 배수가 아닌 수를 더하여 출력
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

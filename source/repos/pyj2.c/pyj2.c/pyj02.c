
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	int sum = 0;
//	float avg = 0;
//	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	sum = a + b + c + d + e;
//	avg = sum / 5;
//	printf("%d,%d", sum, avg);
//	return 0;
//}

// scanf_s 사용 문자나 문자열 2개이상 받을시 memory buffer 공간을 얼마나 쓸지 지정해줘야함
//#include<stdio.h> 
//int main()
//{
//	char a, b;
//	printf("문자 2개입력 \n");
//	scanf_s("%c %c", &a, 1, &b, 1);
//	printf("입력 문자 %c %c", a, b);
//}

// scanf 사용시 4996 warning을 disable 해줘야함 (scanf_s 사용 권장 에러)
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	char a, b;
//	printf("문자 2개입력 \n");
//	scanf("%c %c", &a,&b);
//	printf("입력 문자 %c %c", a, b);
//}


//55번
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int name;
//	char grade;
//	printf("이름, 학점입력");
//	scanf("%c %c",&name,&grade);
//	printf("이름은 %c\n 학점은 %c", name, grade);
//	return 0;
//}

//57번
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int a, b, c;
//	int sum = 0;
//	printf("세 수를 입력하시오: ");
//	scanf("%d %d %d", &a, &b, &c);
//	sum = a + b + c;
//	printf("%d %d %d %d", a, b, c, sum);
//	return 0;
//}


//단항연산자
//58번
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	a = a--;
//	b = b++;
//	printf("%d,%d", a, b);
//	return 0;
//}

////59번
//#include<stdio.h>
//int main()
//{
//	int a = 30;
//	int res = 0;
//	res = !(a >= 30);
//	//단항연산자 중 하나인!는 뒤에 오는 것을 부정하는것이다. 즉, a>=30이 옳지 않다는 것이 참이다.
//	//옳고 그름을 판단하는 식에서 0은 거짓 1은 참을 뜻한다
//	printf("!(a>=30): %d\n", res);
//	return 0;
//}

//산술연산자
//60번
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	a = a * b;
//	b = a / b;
//	printf("%d, %d", a, b);
//	return 0;
//}

////논리연산자
////61번
//#include<stdio.h>
//int main()
//{
//	int a = 30;
//	int res = (a > 10) && (a < 20);
//	printf("(a>10)&&(a<20): %d \n", res); //&&는 and
//	res = (a < 10) || (a > 20);
//	printf("(a<10)|| (a>20): %d \n", res); // ||는 or
//	return 0;
//}

//대입 연산자
//대입 연산자는 a=a+2 or a=a*10 과 같이 자기 자신이 속한 식에서 식을 간소화 시키자 만든 연산이다.
//62번
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	int res = 2;
//	a += 20;
//	res *= b + 10;
//	printf("a=%d b=%d\n", a, b);
//	printf("res= %d\n", res);
//	return 0;
//}

//조건문
//63번, a가 10보다 크면 a는 10보다 큰수이다. 라는 문구를 출력
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int a;
//	printf("수를 입력: ");
//	scanf("%d", &a );
//		if (a > 10)
//	{
//		printf("%d는 10보다 큰 수이다.\n",a);
//
//	}
//	return 0;
//}


//64번 a와 b를 비교하여 더 큰 수를 출력하여라
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	int b = 30;
//	if (a > b)
//	{
//		printf("%d는 %d 보다 큰 수이다.\n", a, b);
//	}
//	else
//	{
//		printf("%d는 %d 보다 큰 수이다,\n", b, a);
//	}
//	return 0;
//}

//65번 a가 10보다 클떄만 b에 a를 대입하고 싶다.
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	int b = 0;
//	if (a > 10)
//	{
//		b = a;
//	}
//	printf("a:%d, b:%d", a, b);
//	return 0;
//}

//66번
//#include<stdio.h>
//int main()
//{
//	int a = -10;
//	if (a >= 0)
//	{
//		a = a;
//	}
//	else
//	{
//		a = -a;
//	}
//	printf("a:%d\n", a);
//	return 0;
//}

//68번 x는 30 y는 50이라고 했을 떄 두수 중 큰 수를 출력하는 프로그램을 작성하라
//#include<stdio.h>
//int main()
//{
//	int x = 30, y = 50;
//	if (x > y)
//	{
//		printf("%d", x);
//	}
//	else
//	{
//		printf("%d", y);
//	}
//	return 0;
//}

//69번 두 수를 입력하여 큰 수를 먼저 출력하는 프로그램
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int x, y;
//	printf("두 수를 입력하세요: ");
//	scanf("%d %d", &x, &y);
//	if (x > y)
//	{
//		printf("큰 수는%d, 작은수는 %d", x, y);
//	}
//	else
//	{
//		printf("큰 수는 %d, 작은 수는 %d", y, x);
//	}
//	return 0;
//}

////70번 어떤수를 입력하여 양수이면 plus를 음수이면 minus 0이면 zero를 출력하는 프로그램을 작성하여라
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int num =0;
//	printf("수를 입력: ");
//	scanf("%d",&num);
//	if (num > 0)
//	{
//		printf("plus");
//	}
//	else if (num < 0)
//	{
//		printf("minus");
//	}
//	else
//	{
//		printf("zero");
//	}
//	return 0;
//}

//71번 두 숫자 x,y를 입력받아 x와 y 모두 양수 일 때는 x-y를 
//모두 음수일떄는 x+y를 그 외에는 x*y를 출력하는 프로그램을 작성하여라
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	if (x > 0 && y > 0)
//	{
//		printf("%d", x-y);
//	}
//	else if (x < 0 && y < 0)
//	{
//		printf("%d", x + y);
//	}
//	else
//	{
//		printf("%d, x+y");
//	}
//	return 0;
//}

//72번 숫자 3개를 입력받아 하나라도 10을 넘으면 모두 출력하고 
//그렇지 않으면 더하여 출력하는 프로그램을 작성하여라.
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int x, y, z;
//	printf("숫자 3개를 입력하세요: ");
//	scanf("%d %d %d", &x, &y, &z);
//	if (x > 10 || y > 10 || z > 10)
//	{
//		printf("%d,%d,%d", x, y, z);
//	}
//	else
//	{
//		printf("%d", x + y + z);
//	}
//	return 0;
//}


//73번 3과목의 점수를 입력받아 점수의 합이 240 이상이면 통과 210 이상이면 재시험 아니면 퇴학을 출력시키는
// 프로그램을 작성
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int a, b, c, d, e;
//	int sum = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	sum = a + b + c;
//	if (sum > 240)
//	{
//		printf("통과");
//	}
//	else if (sum > 210)
//	{
//		printf("재시험");
//	}
//	else
//	{
//		printf("퇴학");
//	}
//	return 0;
//}

//75번 계속해서 임의의 입력되는 수를 더하다가 0을 입력하면 멈추고
//0을 입력하기 전까지 입력한 모든 값을 저장하고 출력하는 프로그램
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int sum = 0, x;
//	
//	while (1)
//	{
//		scanf("%d", &x);
//	
//		if (x == 0)
//		{
//			printf("%d\n", sum);
//			break;
//		}
//		else
//		{
//			sum = sum + x;
//		}
//	}
//	printf("총합은: %d", sum);
//	return 0;
//}

//78번 옷 사이즈를 입력 받아 사이즈가 90이하이면 s를 90초과 100이하이면 m을 100초과 이면 L을 출력하는
//프로그램 작성
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int size = 0;
//	char cize = '0';
//	scanf("%d", &size);
//	if(size<= 90)
//	{
//		cize = 's';
//	}
//	else if (size > 90 && size < +100)
//	{
//		cize = 'M';
//	}
//	else
//	{
//		cize = 'L';
//	}
//	printf("%c", cize);
//	return 0;
//}

//79번 순위가 10이상이고 점ㅈ수가 500점 이상이면 대단하군!을 출력
//#include<Stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int rank=0, score=0;
//	
//	scanf("%d %d", &rank, &score);
//	
//	if (rank >= 10)
//	{
//		if (score >= 500)
//		{
//			printf("대단하군!\n");
//		}
//	}
//	return 0;
//}

//80번 학번이 10이하이고 학점이 b이면 졸업가능을 출력하고
//학번이 10이하이고 학점이 b가 아니면 졸업불가를 출력
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int num = 0;
//	char score;
//	scanf("%d %c", &num, &score);
//	if (num <= 10)
//	{
//		if (score == 'B')
//		{
//			printf("졸업가능");
//		}
//		else
//		{
//			printf("졸업불가");
//		}
//	}
//	return 0;
//}

////81번 다음 프로그램 출력값 예상
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num <= 2)
//	{
//		if (num == 1)
//		{
//			printf("hi!");
//		}
//		else
//		{
//			printf("hello!");
//		}
//	}
//	else
//	{
//		if (num == 3)
//		{
//			printf("bye!");
//		}
//		else
//		{
//			printf("hey");
//		}
//	}
//	
//	return 0;
//}

//반복문
//82번 - 1부터 5까지 출력하는 프로그램을 작성하시오
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//83번 1부터 5까지 인쇄하는 프로그램을 작성
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 5)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//84 명성컴퓨터를 3번 인쇄하는 프로그램을 작성하여라(반복문 이용)

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("명성컴퓨터 \n");
//	}
//	return 0;
//}

//85 명성컴퓨터를 3번 인쇄하는 프로그램을 작성하여라(while 이용)
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (1)
//	{
//		if (i <= 3)
//		{
//			printf("명성컴퓨터\n");
//			i++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

////86 5가지의 숫자를 입력받고 인쇄하고 그 개수를 출력하는 프로그램을 작성하여라
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int i = 0;
//	int num;
//	printf("수를 입력하세요");
//	for (i = 1; i <= 5; i++)
//	{
//	
//		scanf("%d", &num);
//		printf("%d\n",num);
//
//	}
//	printf("%d", i);
//		return 0;
//}

//87번 5가지의 숫자를 입력 받아 인쇄하고 그 합을 출력하여라
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int i = 0;
//	int num;
//	int sum = 0;
//	printf("수를 입력하세요");
//	for (i = 1; i <= 5; i++)
//	{
//		scanf("%d", &num);
//		printf("입력한 수는%d\n", num);
//		sum = sum + num;
//		printf("합은 %d\n", sum);
//		printf("개수 %d", i);
//	}
//	
//	return 0;
//}

////88번 a의 값을 입력 받아 2배로 3번 증가시키는 코드를 작성하여라
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int i = 0, a;
//	printf("수를 입력하세요:");
//	scanf("%d", &a);
//	for (i = 1; i <= 3; i++)
//	{
//		a = a * 2;
//	}
//	printf("%d", a);
//		return 0;
//}

//89번 a의 값을 입력받아 a의 세제곱을 출력하여라
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int i = 0, a;
//	scanf("%d", &a);
//	for (i = 1; i <= 3; i++)
//	{
//		a = a * a;
//	}
//	printf("%d", a);
//	return 0;
//}

//90번 해당프로그램에서 명성컴퓨터는 총 몇번 출력되는지 구하라
//#include<stdio.h>
//int main()
//	{
//		int i = 0;
//for (i = 1; i <= 10; i++)
//{
//	printf("명성컴퓨터 \n");
//	i = i + 2;
//}
//return 0;
//	}

//91번 해당프로그램에서 결과값을 유추해보시오
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < +10; i += 3)
//	{
//		i = i + 2;
//	}
//	printf("%d", i * 2);
//	return 0;
//}

//92번 1부터 100까지의 합을 구하는 프로그램
//#include<stdio.h>
//
//int main()
//{
//	int i = 0, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d", sum)
;
//}

//93번 1부터 100까지의 짝수합을 구하는 프로그램을 작성하여라
//#include<stdio.h>
//int main()
//{
//	int i = 0, sum = 0;
//	for(i = 2; i <= 100; i += 2)
//	{
//		sum = sum + i;
//	}
//	printf("%d", sum);
//		return 0;
//}

//94번 2를 5번 곱하는 프로그램을 작성
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1;
//	for (i = 1; i<= 5; i++)
//	{
//		num = num * 2;
//	}
//	printf("%d", num);
//    return 0;
//
//}

////95번 2를 4번, 3을 2번 곱하는 프로그램 작성
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		if (i <= 3)
//		{
//			num = num * 2;
//		}
//		else
//		{
//			num = num * 3;
//		}
//		printf("%d", num);
//		return 0;
//
//	}

////96번 구구단을 출력하라
//#include<stdio.h>
//int main()
//{
//	int a = 5, i = 0;
//	for (i = 1;i < 9;i++)
//	{
//		printf("%d*%d=%d\n", a, i, a * i);
//	}return 0;
//}
//


//98번 5명의 시험 점수를 입력받고 합과 평균을 구하여라
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 0, num = 0;
//	int sum = 0, avg = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		scanf("%d", &num);
//		sum = sum + num;
//	}
//	avg = sum / i;
//	printf("%d %d", sum, avg);
//	return 0;
//}

//99번 입력한 수의 구구단을 출력하여라
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int a, i = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%d*%d= %d\n", a, i, a * i);
//	}
//	return 0;
//}

//101번 중첩반복문을 사용하여 명성컴퓨터를 15번 출력하라
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("명성컴퓨터");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//102번 다음 중첩 반복문을 실행할 때 명성컴퓨터는 몇번 출력되는가?
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 1; i < 3; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			printf("명성컴퓨터");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//103번 11111옆과 같은 모양으로 숫자를 22222 출력하여라(중첩반복문 사용)
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1;j <= 5; j++)
//		{
//			printf("%d", i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////103번 *****옆과 같은 모양으로 *을 풀력하여라
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 1; i<=3; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//104번 123456 옆과 같은 모양으로 숫자를 123456 출력하여라(중첩반복문 이용)
//#include<Stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= 6; j++)
//		{
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////106번 구구단 3단을 3번 출력해보아라
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 3, j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d * %d=%d", a, j, a * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//107번 구구단을 2단부터 9단까지 출력하여라
//#include<Stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 2; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d * %d= %d\n", i, j, i * j);
//		}
//		
//	}
//	return 0;
//}
//108번 구구단을 2단부터 9단까지 3번 출력하여라 
//#include<Stdio.h>
//int main()
//{
//	int i = 0, j = 0, a=0 ;
//	for (a = 1; a <= 3; a++)
//	{
//		for (i = 2; i <= 9; i++)
//		{
//			for (j = 1; j <= 9; j++)
//			{
//				printf("%d * %d= %d\n", i, j, i * j);
//			}
//		}
//	}
//	return 0;
//}

//109번 * 옆과 같은 모양으로 * 을 **/***출력하여라

//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////110번 ***/**/* 로 출력
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 3; i >= 1; i--)
//	{
//		for (j = i; j >= 1; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
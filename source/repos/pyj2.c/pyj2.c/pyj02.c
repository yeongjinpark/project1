
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

// scanf_s ��� ���ڳ� ���ڿ� 2���̻� ������ memory buffer ������ �󸶳� ���� �����������
//#include<stdio.h> 
//int main()
//{
//	char a, b;
//	printf("���� 2���Է� \n");
//	scanf_s("%c %c", &a, 1, &b, 1);
//	printf("�Է� ���� %c %c", a, b);
//}

// scanf ���� 4996 warning�� disable ������� (scanf_s ��� ���� ����)
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	char a, b;
//	printf("���� 2���Է� \n");
//	scanf("%c %c", &a,&b);
//	printf("�Է� ���� %c %c", a, b);
//}


//55��
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int name;
//	char grade;
//	printf("�̸�, �����Է�");
//	scanf("%c %c",&name,&grade);
//	printf("�̸��� %c\n ������ %c", name, grade);
//	return 0;
//}

//57��
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int a, b, c;
//	int sum = 0;
//	printf("�� ���� �Է��Ͻÿ�: ");
//	scanf("%d %d %d", &a, &b, &c);
//	sum = a + b + c;
//	printf("%d %d %d %d", a, b, c, sum);
//	return 0;
//}


//���׿�����
//58��
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	a = a--;
//	b = b++;
//	printf("%d,%d", a, b);
//	return 0;
//}

////59��
//#include<stdio.h>
//int main()
//{
//	int a = 30;
//	int res = 0;
//	res = !(a >= 30);
//	//���׿����� �� �ϳ���!�� �ڿ� ���� ���� �����ϴ°��̴�. ��, a>=30�� ���� �ʴٴ� ���� ���̴�.
//	//�ǰ� �׸��� �Ǵ��ϴ� �Ŀ��� 0�� ���� 1�� ���� ���Ѵ�
//	printf("!(a>=30): %d\n", res);
//	return 0;
//}

//���������
//60��
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	a = a * b;
//	b = a / b;
//	printf("%d, %d", a, b);
//	return 0;
//}

////��������
////61��
//#include<stdio.h>
//int main()
//{
//	int a = 30;
//	int res = (a > 10) && (a < 20);
//	printf("(a>10)&&(a<20): %d \n", res); //&&�� and
//	res = (a < 10) || (a > 20);
//	printf("(a<10)|| (a>20): %d \n", res); // ||�� or
//	return 0;
//}

//���� ������
//���� �����ڴ� a=a+2 or a=a*10 �� ���� �ڱ� �ڽ��� ���� �Ŀ��� ���� ����ȭ ��Ű�� ���� �����̴�.
//62��
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

//���ǹ�
//63��, a�� 10���� ũ�� a�� 10���� ū���̴�. ��� ������ ���
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int a;
//	printf("���� �Է�: ");
//	scanf("%d", &a );
//		if (a > 10)
//	{
//		printf("%d�� 10���� ū ���̴�.\n",a);
//
//	}
//	return 0;
//}


//64�� a�� b�� ���Ͽ� �� ū ���� ����Ͽ���
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	int b = 30;
//	if (a > b)
//	{
//		printf("%d�� %d ���� ū ���̴�.\n", a, b);
//	}
//	else
//	{
//		printf("%d�� %d ���� ū ���̴�,\n", b, a);
//	}
//	return 0;
//}

//65�� a�� 10���� Ŭ���� b�� a�� �����ϰ� �ʹ�.
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

//66��
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

//68�� x�� 30 y�� 50�̶�� ���� �� �μ� �� ū ���� ����ϴ� ���α׷��� �ۼ��϶�
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

//69�� �� ���� �Է��Ͽ� ū ���� ���� ����ϴ� ���α׷�
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int x, y;
//	printf("�� ���� �Է��ϼ���: ");
//	scanf("%d %d", &x, &y);
//	if (x > y)
//	{
//		printf("ū ����%d, �������� %d", x, y);
//	}
//	else
//	{
//		printf("ū ���� %d, ���� ���� %d", y, x);
//	}
//	return 0;
//}

////70�� ����� �Է��Ͽ� ����̸� plus�� �����̸� minus 0�̸� zero�� ����ϴ� ���α׷��� �ۼ��Ͽ���
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int num =0;
//	printf("���� �Է�: ");
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

//71�� �� ���� x,y�� �Է¹޾� x�� y ��� ��� �� ���� x-y�� 
//��� �����ϋ��� x+y�� �� �ܿ��� x*y�� ����ϴ� ���α׷��� �ۼ��Ͽ���
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

//72�� ���� 3���� �Է¹޾� �ϳ��� 10�� ������ ��� ����ϰ� 
//�׷��� ������ ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͽ���.
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int x, y, z;
//	printf("���� 3���� �Է��ϼ���: ");
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


//73�� 3������ ������ �Է¹޾� ������ ���� 240 �̻��̸� ��� 210 �̻��̸� ����� �ƴϸ� ������ ��½�Ű��
// ���α׷��� �ۼ�
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
//		printf("���");
//	}
//	else if (sum > 210)
//	{
//		printf("�����");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}

//75�� ����ؼ� ������ �ԷµǴ� ���� ���ϴٰ� 0�� �Է��ϸ� ���߰�
//0�� �Է��ϱ� ������ �Է��� ��� ���� �����ϰ� ����ϴ� ���α׷�
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
//	printf("������: %d", sum);
//	return 0;
//}

//78�� �� ����� �Է� �޾� ����� 90�����̸� s�� 90�ʰ� 100�����̸� m�� 100�ʰ� �̸� L�� ����ϴ�
//���α׷� �ۼ�
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

//79�� ������ 10�̻��̰� �������� 500�� �̻��̸� ����ϱ�!�� ���
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
//			printf("����ϱ�!\n");
//		}
//	}
//	return 0;
//}

//80�� �й��� 10�����̰� ������ b�̸� ���������� ����ϰ�
//�й��� 10�����̰� ������ b�� �ƴϸ� �����Ұ��� ���
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
//			printf("��������");
//		}
//		else
//		{
//			printf("�����Ұ�");
//		}
//	}
//	return 0;
//}

////81�� ���� ���α׷� ��°� ����
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

//�ݺ���
//82�� - 1���� 5���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
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

//83�� 1���� 5���� �μ��ϴ� ���α׷��� �ۼ�
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

//84 ����ǻ�͸� 3�� �μ��ϴ� ���α׷��� �ۼ��Ͽ���(�ݺ��� �̿�)

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("����ǻ�� \n");
//	}
//	return 0;
//}

//85 ����ǻ�͸� 3�� �μ��ϴ� ���α׷��� �ۼ��Ͽ���(while �̿�)
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (1)
//	{
//		if (i <= 3)
//		{
//			printf("����ǻ��\n");
//			i++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

////86 5������ ���ڸ� �Է¹ް� �μ��ϰ� �� ������ ����ϴ� ���α׷��� �ۼ��Ͽ���
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int i = 0;
//	int num;
//	printf("���� �Է��ϼ���");
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

//87�� 5������ ���ڸ� �Է� �޾� �μ��ϰ� �� ���� ����Ͽ���
//#include<stdio.h>
//#pragma warning (disable:4996)
//int main()
//{
//	int i = 0;
//	int num;
//	int sum = 0;
//	printf("���� �Է��ϼ���");
//	for (i = 1; i <= 5; i++)
//	{
//		scanf("%d", &num);
//		printf("�Է��� ����%d\n", num);
//		sum = sum + num;
//		printf("���� %d\n", sum);
//		printf("���� %d", i);
//	}
//	
//	return 0;
//}

////88�� a�� ���� �Է� �޾� 2��� 3�� ������Ű�� �ڵ带 �ۼ��Ͽ���
//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	int i = 0, a;
//	printf("���� �Է��ϼ���:");
//	scanf("%d", &a);
//	for (i = 1; i <= 3; i++)
//	{
//		a = a * 2;
//	}
//	printf("%d", a);
//		return 0;
//}

//89�� a�� ���� �Է¹޾� a�� �������� ����Ͽ���
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

//90�� �ش����α׷����� ����ǻ�ʹ� �� ��� ��µǴ��� ���϶�
//#include<stdio.h>
//int main()
//	{
//		int i = 0;
//for (i = 1; i <= 10; i++)
//{
//	printf("����ǻ�� \n");
//	i = i + 2;
//}
//return 0;
//	}

//91�� �ش����α׷����� ������� �����غ��ÿ�
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

//92�� 1���� 100������ ���� ���ϴ� ���α׷�
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

//93�� 1���� 100������ ¦������ ���ϴ� ���α׷��� �ۼ��Ͽ���
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

//94�� 2�� 5�� ���ϴ� ���α׷��� �ۼ�
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

////95�� 2�� 4��, 3�� 2�� ���ϴ� ���α׷� �ۼ�
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

////96�� �������� ����϶�
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


//98�� 5���� ���� ������ �Է¹ް� �հ� ����� ���Ͽ���
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

//99�� �Է��� ���� �������� ����Ͽ���
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

//101�� ��ø�ݺ����� ����Ͽ� ����ǻ�͸� 15�� ����϶�
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("����ǻ��");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//102�� ���� ��ø �ݺ����� ������ �� ����ǻ�ʹ� ��� ��µǴ°�?
//#include<stdio.h>
//int main()
//{
//	int i = 0, num = 1, j = 0;
//	for (i = 1; i < 3; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			printf("����ǻ��");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//103�� 11111���� ���� ������� ���ڸ� 22222 ����Ͽ���(��ø�ݺ��� ���)
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

////103�� *****���� ���� ������� *�� Ǯ���Ͽ���
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

//104�� 123456 ���� ���� ������� ���ڸ� 123456 ����Ͽ���(��ø�ݺ��� �̿�)
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

////106�� ������ 3���� 3�� ����غ��ƶ�
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

//107�� �������� 2�ܺ��� 9�ܱ��� ����Ͽ���
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
//108�� �������� 2�ܺ��� 9�ܱ��� 3�� ����Ͽ��� 
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

//109�� * ���� ���� ������� * �� **/***����Ͽ���

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

////110�� ***/**/* �� ���
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
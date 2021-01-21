#include<stdio.h>
int main()
{
	char a, b;
	printf("문자 2개입력 \n");
	scanf_s("%c %c", &a, 2, &b, 2);
	printf("입력 문자 %c %c", a, b);
}

//#include<stdio.h>
//#pragma warning(disable: 4996)
//int main()
//{
//	char a, b;
//	printf("문자 2개입력 \n");
//	scanf("%c %c", &a,&b);
//	printf("입력 문자 %c %c", a, b);
//}

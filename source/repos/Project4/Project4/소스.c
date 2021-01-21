//#include<stdio.h>
//#pragma warning (disable: 4996)
//
//int main()
//{
//	int n,i,j,a,b;
//	int x[10];
//	int y[10];
//	
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d", &x[i], &y[i]);
//	}
//	for (j = 0; j < n-1; j++)
//	{
//		for (i = 0; i < n-1-j;i++)
//		{
//			if (x[i] > x[i + 1])
//			{
//				a = x[i];
//				b = y[i];
//				x[i] = x[i + 1];
//				x[i + 1] = a;
//				y[i] = y[i + 1];
//				y[i + 1] = b;
//			}
//			else if (x[i] == x[i + 1])
//			{
//				if (y[i] > y[i + 1])
//				{
//					b = y[i];
//					y[i] = y[i + 1];
//					y[i + 1] = b;
//				}
//
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d %d\n", x[i], y[i]);
//	}
//	return 0;
//}


//strlen  길이비교
//strcpy  복사 strcpt(a,b)=a
//strcat  뒤에삽입 strcat(a,b)=ab
//strcmp  사전순으로 정리 앞에게 크면<0
//#include<stdio.h>
//#include<string.h>
//#pragma warning (disable: 4996)
//
//int main()
//{
//	int n, i, j;
//	char str[100][100];
//	char a[100];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", str[i]);
//	}
//
//	for (j = 0; j < n - 1; j++)
//	{
//		for (i = 0;i < n - 1 - j; i++)
//		{
//			if (strlen(str[i]) > strlen(str[i + 1]))
//			{
//				strcpy(a,str[i]);
//				strcpy(str[i], str[i + 1]);
//				strcpy(str[i + 1],a);
//			}
//			else if (strlen(str[i]) == strlen(str[i + 1]))
//			{
//				if (strcmp(str[i], str[i + 1]) > 0)
//				{
//					strcpy(a,str[i]);
//					strcpy(str[i], str[i + 1]);
//					strcpy(str[i + 1], a);
//				}
//			}
//		}
//	}
//		for (i = 0; i < n; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	return 0;
//}

//strlen  길이비교
//strcpy  복사 strcpy(a,b)=a
//strcat  뒤에삽입 strcat(a,b)=ab
//strcmp  사전순으로 정리 앞에게 크면<0 작으면 >0 같으면 =0


//int main()
//{
//
//
//
//	char str1[100];
//	char str2[100];
//
//	scanf("%s %s", &str1, &str2);
//	printf("%d %d\n", strlen(str1), strlen(str2));
//	printf("%s %s\n", strcpy(str1, str2));
//
//	printf("%d", strcmp(str1, str2));
//
//	strcat(str1, str2);
//	printf("")
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//
//int main() {
//	char str[100] = "This is A Test";
//
//	printf("변환전 %s \n", str);
//
//	strupr(str);
//
//	printf("변환후 %s \n", str);
//
//	strlwr(str);
//
//	printf("변환후 %s \n", str);
//}


////가장많이 사용한 알파벳 출력
//#include<stdio.h>
//#include<string.h>
//#pragma warning (disable: 4996)
//
//int main() {
//	char str[100];
//	int A[26] = { 0, };
//	int i,num=0;
//	int max=0;
//	char alpha;
//
//	scanf("%s", str);
//
//	strupr(str);                               //대문자 전환
//
//	for (i = 0; i < strlen(str); i++) {
//		A[str[i] - 65]++;                   //알파벳 26칸짜리 배열에 입력했던 str을 알파벳으로 분류해서 저장
//	}
//
//	for (i = 0;i < 26;i++) {                //26번 반복
//		if (max <= A[i]) {                  
//			max = A[i];                    //최대값 구하는 알고리즘으로 가장 많이 저장된 알파벳을 구함
//			alpha = i + 65;                //alpha에 저장
//		}
//	}
//
//	for (i = 0; i < 26; i++) {         
//		if (max == A[i]) {              //max와 같은 값이 2개이상인 경우를 구하는 알고리즘
//			num++;                      //같은 경우 num을 1씩 증가
//		}
//	}
//
//
//	if (num > 1) {         //num이 1초과인 경우
//		alpha = '?';     //많이 나온 알파벳이 2개 이상인 경우 ? 출력
//	}
//
//	printf("%c", alpha);
//}


//#include<stdio.h>
//#include<string.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	char str[100];
//	int A[26];
//	int i, num = 0;
//
//	scanf("%s", &str);
//	strupr(str);
//	memset(A, -1, sizeof(A)); //memset 전체 초기화
//
//	for (i = 0; i < strlen(str); i++) {
//		if (A[str[i] - 65] == -1)
//		{
//			A[str[i] - 65] = i;
//		}
//	}
//	for (i = 0; i < 26; i++) {
//		printf("%d ", A[i]);
//	}
//}


////ox퀴즈- 연속된 o인 경우 점수가 추가
//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable: 4996)
//
//int main()
//{
//	int i,j,a,num, sum;
//	char arr[80];
//
//	scanf("%d", &num);
//
//	for (i = 0; i < num; i++) {
//		sum = 0;
//		a = 0;
//
//		scanf("%s", &arr);
//		for (j = 0; j < strlen(arr); j++) {
////if (arr[j] == 'O') {
////	a++;
////	sum += a;
////}
////else {
////	a = 0;
////}
//
//			switch (arr[j])
//			{
//			case 'O':
//				a++;
//				sum += a;
//				break;
//			case 'X':
//				a = 0;
//				break;
//
//			default:
//				break;
//			}
//		}
//		printf("%d\n", sum);
//	}
//}


////문제 
//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable: 4996)
//
//int main() {
//	int i=1, j=1;
//	int num,a;
//
//	scanf("%d", &num);
//	
//	for (a = 1; a < num; a++)
//	{
//		if (i == 1)
//		{
//		   i = j+1;
//		   j = 1;
//		}
//		else
//		{
//			i--;
//			j++;
//		}
//	}
//	printf("%d 번째 %d / %d \n", a, i, j);
//}


////문제 블랙잭
//#include<stdio.h>
//#pragma warning (disable: 4996)
//
//int main() {
//	int i,j,k, a, m,b,sum , max=0;
//	int arr[100];
//	
//	scanf("%d %d", &a, &m);
//
//
//	for (i = 0; i < a; i++)                 //숫자 입력
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < a-1; i++) {              //숫자정렬
//		for (j = 0; j < a - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				b = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = b;
//			}
//		}
//	}
//
//	//for (i = 0; i < a; i++) {
//	//	printf("%d\n", arr[i]);
//	//}
//
//	for (j = 0; j < a - 2; j++) {              //숫자 조합
//		for (i = j+1; i < a- 1; i++) {
//			for (k = i + 1; k < a; k++) {
//				sum = arr[i] + arr[j] + arr[k];
//				if (sum > m) {
//					goto EXIT;
//				}
//				else max = sum;
//			}
//		}
//	}
//	EXIT:
//	printf("%d", max);                      //조합된 숫자 출력
//}


////문제 정수를 저장하는 스택 구현 -switch case 문
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int main() {
//
//	int arr[100];
//	int i, n, a ,num;
//	char word[100];
//	int top = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &word);
//		if (word == 'push')
//		{
//			num = 0;
//			scanf("%d", &a);
//		}
//		
//		if (word == 'pop')
//		{
//			num = 1;
//		}
//
//		if (word == 'size')
//		{
//			num = 2;
//		}
//
//		if (word == 'empty')
//		{
//			num = 3;
//		}
//
//		if (word == 'top')
//		{
//			num = 4;
//		}
//
//
//		switch (num)
//		{
//		case 0:
//			arr[top] = a;
//			top++;
//			break;
//
//		case 1:
//			if (arr[top] == 0)
//			{
//				printf("-1");
//			}
//			else
//			{
//				top--;
//				arr[top] = '\0';
//				printf("%d", arr[top]);
//			}
//			break;
//
//		case 2:
//			printf("%d", top);
//			break;
//
//		case 3:
//			if (arr[top] == 0)
//			{
//				printf("1");
//			}
//			else
//			{
//				printf("0");
//			}
//			break;
//
//		case 4:
//			if (arr[top] == 0)
//			{
//				printf("-1");
//			}
//			else
//			{
//				printf("%d", arr[top - 1]);
//			}
//			break;
//		default:
//			break;
//		}
//	}
//}


////문제 정수를 저장하는 스택 구현 -if문
//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable: 4996)

//int main() {
//
//	int arr[100];
//	int i, n, a;
//	char word[100];
//	int top = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &word);
//
//		if (strcmp(word,'push') == 0)
//		{
//			scanf("%d", &a);
//			arr[top] = a;
//			top++;
//		}
//
//		if (strcmp(word, 'pop') == 0)
//		{
//			if (arr[top] == 0)
//			{
//				printf("-1");
//			}
//			else
//			{
//				top--;
//				arr[top] = '\0';
//				printf("%d", arr[top]);
//			}
//		}
//	
//		if (strcmp(word, 'size') == 0)
//		{
//			printf("%d", top);
//		}
//
//		if (strcmp(word, 'empty') == 0)
//		{
//			if (arr[top] == 0)
//			{
//				printf("1");
//			}
//			else
//			{
//				printf("0");
//			}
//		}
//
//		if (strcmp(word, 'top') == 0)
//		{
//			if (arr[top] == 0)
//			{
//				printf("-1");
//			}
//			else
//			{
//				printf("%d", arr[top - 1]);
//			}
//		}
//	}
//}


//문제 정수를 저장하는 스택 구현 -if문

#include<stdio.h>
#include<string.h>
#pragma warning(disable: 4996)


int push(int a, int arr[100], int count) {
	arr[count] = a;
	count++;
	return count;
}

void pop(int arr[100], int count) {
	if (arr[count] == 0)
		{
		printf("-1");
		}
	else
	{
		count--;
		arr[count] = '\0';
		printf("%d", arr[count]);
	}
}

void size(int count) {
	printf("%d", count);
}

void empty(int arr[100], int count) {
	if (arr[count] == 0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}

void top(int arr[100], int count) {
	int i = 0;
	if (arr[count] == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", count);
		for (i = 0; i < 2; i++) {
			printf("%d \n", arr[i]);
		}
		printf("%d", arr[count - 1]);
	}
}

int main() {
	char word[100];
	int i, n, a;
	int arr[100];
	int count=0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", word);

		if (strcmp(word,"push") == 0)
		{
			scanf("%d", &a);
			count=push(a, arr, count);
		}

		else if (strcmp(word, "pop") == 0)
		{
			pop(arr, count);
		}
	
		else if (strcmp(word, "size") == 0)
		{
			size(count);
		}

		else if (strcmp(word, "empty") == 0)
		{
			empty(arr, count);
		}

		else if (strcmp(word, "top") == 0)
		{
			top(arr, count);
		}

	}


}
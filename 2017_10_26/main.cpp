#include<stdio.h>

void ReversTraiangle();
void Ramify();
void AbsoValue();
void Multiple();
void RealNumberOperator();

void main()
{
	// 문제1: 역삼각형 모양으로 별이 출력되게 만드세요
	ReversTraiangle();

	//	문제2 : i 값에 따라 분기되는 프로그램을 작성하세요.
	Ramify();

	//	문제3 : 정수 두개를 입력 받아 큰 값을 출력하는 프로그램을 작성하세요.
	AbsoValue();

	//	문제4 : 구구단 프로그램을 작성하세요.단, 1단, 2단~9단까지 반복되는 값을 정수형 변수 i를 사용하여 순환시키고,
	//	i의 값이 1~9가 아닌 1~100까지 반복되게 한 후, i의 값이 9인 경우 탈출하게 만들어 보세요.
	Multiple();

	//	문제5 : 실수 두개를 입력 받아 사칙연산 하는 프로그램을 작성하세요
	RealNumberOperator();
}

void RealNumberOperator()
{
	double input1 = 0.0f;
	double input2 = 0.0f;
	int nOption = 0;
	double result = 0.0f;

	printf("두개의 실수를 입력 하세요:");
	scanf_s("%lf %lf", &input1, &input2);
	printf("번호를 입력 하세요\n");
	printf("1.덧셈 2.뺄셈 3.덧셈 4.나눗셈\n");
	scanf_s("%d",&nOption);

	if (nOption == 1)
	{
		result = input1 + input2;
	}
	else if (nOption == 2)
	{
		result = input1 - input2;
	}
	else if (nOption == 3)
	{
		result = input1 * input2;
	}
	else if (nOption == 4)
	{
		result = input1 / input2;
	}
	printf("값은 : %lf \n", result);

}

void Multiple()
{
	int i;
	int j;
	const int MAX = 100;

	for (j = 1; j<10; j++)
	{
		for (i = 1; i < MAX; i++)
		{
			printf("%d X %d = %d\n", j, i, j * i);
			if (i == 9)
			{				
				break;
			}
		}
		printf("\n");
	}

	printf("\n==================================================\n");
}

void AbsoValue()
{
	int nInput1 = 0;
	int nInput2 = 0;
	int loofcheck = 1;
	
	while (loofcheck)
	{
		printf("값 두개를 입력 :");
		scanf_s("%d %d", &nInput1, &nInput2);
		if (nInput1 < 0 || nInput2 < 0)
		{
			printf("정수를 입력하세요.\n");
			continue;
		}
		else if (nInput1 < nInput2)
		{
			printf("%d가(이) 더 큽니다.", nInput2);
			loofcheck = 0;
		}
		else if (nInput1 > nInput2)
		{
			printf("%d가(이) 더 큽니다.", nInput1);
			loofcheck = 0;
		}		
	}
	printf("\n==================================================\n");
}

void Ramify()
{
	int nInput = 0;
	printf("값1~4를 입력:");
	scanf_s("%d",&nInput);

	switch (nInput)
	{
	case 1:
		printf("%d를 입력 하셨습니다.\n", nInput);
		break;
	case 2:
		printf("%d를 입력 하셨습니다.\n", nInput);
		break;
	case 3:
		printf("%d를 입력 하셨습니다.\n", nInput);
		break;
	case 4:
		printf("%d를 입력 하셨습니다.\n", nInput);
		break;
	default:
		printf("1~4이외의 값 %d를 입력 하셨습니다.\n", nInput);
		break;
	}
	printf("\n==================================================\n");
}

void ReversTraiangle()
{
	int i;
	int j;

	for (i = 0; i < 8; i++) //행
	{
		for (j = 0; j < i; j++) //공백
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (8 - i) - 1; j++) //별
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n==================================================\n");
}


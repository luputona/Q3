#include<stdio.h>

void ReversTraiangle();
void Ramify();
void AbsoValue();
void Multiple();
void RealNumberOperator();

void main()
{
	// ����1: ���ﰢ�� ������� ���� ��µǰ� ���弼��
	ReversTraiangle();

	//	����2 : i ���� ���� �б�Ǵ� ���α׷��� �ۼ��ϼ���.
	Ramify();

	//	����3 : ���� �ΰ��� �Է� �޾� ū ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
	AbsoValue();

	//	����4 : ������ ���α׷��� �ۼ��ϼ���.��, 1��, 2��~9�ܱ��� �ݺ��Ǵ� ���� ������ ���� i�� ����Ͽ� ��ȯ��Ű��,
	//	i�� ���� 1~9�� �ƴ� 1~100���� �ݺ��ǰ� �� ��, i�� ���� 9�� ��� Ż���ϰ� ����� ������.
	Multiple();

	//	����5 : �Ǽ� �ΰ��� �Է� �޾� ��Ģ���� �ϴ� ���α׷��� �ۼ��ϼ���
	RealNumberOperator();
}

void RealNumberOperator()
{
	double input1 = 0.0f;
	double input2 = 0.0f;
	int nOption = 0;
	double result = 0.0f;

	printf("�ΰ��� �Ǽ��� �Է� �ϼ���:");
	scanf_s("%lf %lf", &input1, &input2);
	printf("��ȣ�� �Է� �ϼ���\n");
	printf("1.���� 2.���� 3.���� 4.������\n");
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
	printf("���� : %lf \n", result);

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
		printf("�� �ΰ��� �Է� :");
		scanf_s("%d %d", &nInput1, &nInput2);
		if (nInput1 < 0 || nInput2 < 0)
		{
			printf("������ �Է��ϼ���.\n");
			continue;
		}
		else if (nInput1 < nInput2)
		{
			printf("%d��(��) �� Ů�ϴ�.", nInput2);
			loofcheck = 0;
		}
		else if (nInput1 > nInput2)
		{
			printf("%d��(��) �� Ů�ϴ�.", nInput1);
			loofcheck = 0;
		}		
	}
	printf("\n==================================================\n");
}

void Ramify()
{
	int nInput = 0;
	printf("��1~4�� �Է�:");
	scanf_s("%d",&nInput);

	switch (nInput)
	{
	case 1:
		printf("%d�� �Է� �ϼ̽��ϴ�.\n", nInput);
		break;
	case 2:
		printf("%d�� �Է� �ϼ̽��ϴ�.\n", nInput);
		break;
	case 3:
		printf("%d�� �Է� �ϼ̽��ϴ�.\n", nInput);
		break;
	case 4:
		printf("%d�� �Է� �ϼ̽��ϴ�.\n", nInput);
		break;
	default:
		printf("1~4�̿��� �� %d�� �Է� �ϼ̽��ϴ�.\n", nInput);
		break;
	}
	printf("\n==================================================\n");
}

void ReversTraiangle()
{
	int i;
	int j;

	for (i = 0; i < 8; i++) //��
	{
		for (j = 0; j < i; j++) //����
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (8 - i) - 1; j++) //��
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n==================================================\n");
}


#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
	return x + y;
}

int Substract(int x, int y)
{
	return x - y;
}

int Multply(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

int Calculator(int x, int y, int (*fptr)(int, int))
{
	return fptr(x, y);
}

int main()
{
#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� 
	// �����Դϴ�.

	// int (*fptr)(int, int);
	// 
	// fptr = Add;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10, 20));
	// 
	// fptr = Substract;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10, 20));
	// 
	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ���� 
	// ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� ��������
	// �޸𸮸� �Ҵ��� �� �ֽ��ϴ�.

	// �Լ��� ȣ���� ������ ������ ����������, �Լ� �����ͷ�
	// �Լ��� ȣ���ϰ� �Ǹ� ���α׷��� ����Ǵ� ������ �Լ��� 
	// �̸��� �ü���� �����Ͽ� �Լ��� ȣ���� �� �ֽ��ϴ�.

	// printf("Calculator�� �� : %d\n", Calculator(5, 5, Multply));
#pragma endregion

#pragma region rand �Լ�
	// 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.

	// UTC �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ����� 
	// �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.
	// srand(time(NULL));
	// 
	// int random = rand() % 10 + 1;
	// 
	// printf("random ������ �� : % d\n", random);
#pragma endregion
	//66�� �ٽú���

#pragma region  UP - DOWN ����
	int Life = 5;
	int score = 0;
	int computer = 36;

	/*while (Life == 0)
	{
		srand(time(NULL));
		int random = rand() % 50;
		score = random;

		if (score > random)
		{
			Life--;
			printf("Computer�� ������ �ִ� ������ Ů�ϴ�.\n");
		}
		else
		{
			printf("Computer�� ������ �ִ� ������ �۽��ϴ�.\n");
		}

		if (score == computer)
		{
			printf("Victory\n");
		}
		else
		{
			printf("Defeat\n");
		}
		
		if (Life == 0)
		{
			break;
		}
	}*/

	if (Life > 1) 
	{
		srand(time(NULL));
		int random = rand() % 50;
		score = random;
	
		if (score > random)
		{
			Life--;
			printf("Computer�� ������ �ִ� ������ Ů�ϴ�.\n");
		}
		else
		{
			printf("Computer�� ������ �ִ� ������ �۽��ϴ�.\n");
		}
	
		if (score == computer)
		{
			printf("Victory\n");
		}
		else
		{
			printf("Defeat\n");
		}
	}


#pragma endregion


	return 0;
}
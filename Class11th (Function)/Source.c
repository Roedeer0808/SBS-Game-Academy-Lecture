#include <stdio.h>

// ������ �����ϱ�

// ���� �����Ѱ� 42�� �ٽú���

void Function()
{
	printf("Execute");
}

void Coordinate(int x, int y)
{
	printf("�Ű� ���� x�� �� : %d\n", x);
	printf("�Ű� ���� y�� �� : %d\n", y);

}

int Damage(int damage)
{
	damage = damage * 5;

	return damage;
}

int Trade(int a, int b, int trade) //���� ���� �ڵ�
{
	trade = a;
	a = b;
	b = trade;
}

void Swap(int* a, int* b)
{
	int temporary = *b;
	*b = *a;
	*a = temporary;
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Function();

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� ������,
	// ���� �̸��� �Լ��� �ߺ����� ������ �� �����ϴ�.

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� 
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// Coordinate(5, 10);

	// printf("Damage �Լ��� ��ȯ�ϴ� �� : %d\n", Damage(5));

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� �������, ���� ����
	// �Ű� ������ ������ �� �ֽ��ϴ�.
#pragma endregion
	//42�� �ٽú���

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	//���� ���� �ڵ�
	/*
	// // ���� ���� �ڵ�
	// int trade = 0;
	//
	// int a = 10;
	// int b = 20;
	//
	// printf("��ȯ�ϱ� ���� a�� �� : %d\n", a);
	// printf("��ȯ�ϱ� ���� b�� �� : %d\n", b);
	//
	// trade = a;
	// a = b;
	// b = trade;
	//
	// printf("\n��ȯ�� a�� �� : %d\n", a);
	// printf("��ȯ�� b�� �� : %d\n", b);
	*/

	//�������� ���� �ڵ�
	/* �������� ���� �ڵ�
	// int c = 10;
	// int d = 20;
	//
	// int temp = 0;
	//
	// temp = d;
	// d = c;
	// c = temp;
	//
	// printf("c�� �� : %d\n", c);
	// printf("d�� �� : %d\n", d);
	*/

	// �� printf("��ȯ�� ���� : %d\n", Trade(10, 20, 0));

	// ��
	// int a = 10;
	// int b = 20;
	// Swap(&a, &b);
	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ ��
	// �ִ� �μ��� �����Ǹ�, ���� �����ϴ� �μ��� ����
	// ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion


#pragma endregion

}
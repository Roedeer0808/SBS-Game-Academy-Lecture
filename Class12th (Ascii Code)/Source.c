#include <stdio.h>

void Execute(int count)
{
	if (count <= 0)
	{
		// ���� ���� �ڵ�(������ Ʋ��)
		/*for (int i = 1; i <= count;i++)
		{
			printf("%d\n", i);
		}*/
		return;
	}

	printf("Execute\n");
	Execute(count - 1);
	printf("%d\n", count);

}

int main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� 
	// �����ϴ� �Լ��Դϴ�.

	// Execute(3);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��ϰ� �˴ϴ�.

#pragma endregion

#pragma region ASCII CODE
	// �̱� ���� ǥ�� ��ȸ���� ǥ��ȭ�� ���� ��ȯ��
	// 7 bit ��ȣ ü���Դϴ�.

	// int alphabet = 'A';
	// 
	// printf("alphabet ������ �� : %d\n", alphabet);
	// printf("alphabet ������ �� : %c\n", alphabet);

	// //���� ���� �ڵ�
	// for (int i = alphabet+1; i <= 90;i++)
	// {
	// 	alphabet = alphabet + 1;
	// 	printf("alphabet ������ �� : %d\n", alphabet);
	// 	printf("alphabet ������ �� : %c\n", alphabet);
	// }

	// //�������� ���� �ڵ�
	// for (int i = 0; i < 26;i++)
	// {
	// 	printf("%c ", alphabet + i);
	// }

#pragma endregion

#pragma region ��ҹ��� ��ȯ

	// char content [] = "League of Legend";
	// 
	// // // ���� ���� �ڵ�
	// // for (int i = 0;i < 5;i++)
	// // {
	// // 	content[i] = content[i] - 32;
	// // 	printf("%c", content[i]);
	// // }
	// 
	// //�������� ���� �ڵ�
	// for (int i = 0;i < sizeof(content);i++)
	// {
	// 	if (content[i] >= 'a' && content[i] <= 'z')
	// 	{
	// 		content[i] = content[i] - 32;
	// 	}
	// 	else if (content[i] >= 'A' && content[i] <= 'Z')
	// 	{
	// 		content[i] = content[i] + 32;
	// 	}
	// }
	// 
	// printf("%s", content);
#pragma endregion

	return 0;
}
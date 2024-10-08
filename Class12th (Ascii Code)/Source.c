#include <stdio.h>

void Execute(int count)
{
	if (count <= 0)
	{
		// 내가 만든 코드(하지만 틀림)
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
#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 
	// 수행하는 함수입니다.

	// Execute(3);

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생하게 됩니다.

#pragma endregion

#pragma region ASCII CODE
	// 미국 국립 표준 협회에서 표준화한 정보 교환용
	// 7 bit 부호 체계입니다.

	// int alphabet = 'A';
	// 
	// printf("alphabet 변수의 값 : %d\n", alphabet);
	// printf("alphabet 변수의 값 : %c\n", alphabet);

	// //내가 만든 코드
	// for (int i = alphabet+1; i <= 90;i++)
	// {
	// 	alphabet = alphabet + 1;
	// 	printf("alphabet 변수의 값 : %d\n", alphabet);
	// 	printf("alphabet 변수의 값 : %c\n", alphabet);
	// }

	// //선생님이 만든 코드
	// for (int i = 0; i < 26;i++)
	// {
	// 	printf("%c ", alphabet + i);
	// }

#pragma endregion

#pragma region 대소문자 변환

	// char content [] = "League of Legend";
	// 
	// // // 내가 만든 코드
	// // for (int i = 0;i < 5;i++)
	// // {
	// // 	content[i] = content[i] - 32;
	// // 	printf("%c", content[i]);
	// // }
	// 
	// //선생님이 만든 코드
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
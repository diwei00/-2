//#include <stdio.h>
//#include <string.h>
//void move(char* arr, int k)
//{
//	int len = strlen(arr);
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		int i = 0;
//		char tmp = *arr;//�ó���һ���ַ�
//		for (i = 0; i < len - 1; i++)//������ַ���ǰ��
//		{
//			*(arr + i) = *(arr + i + 1);
//		}
//		*(arr + len - 1) = tmp;//�ѵ�һ���ַ��ź���
//
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}


//�ڶ��ַ���
//#include <stdio.h>
//#include <string.h>
//void revolve(char* left, char* right)
//{
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void move(char* arr, int k)
//{
//	int sz = strlen(arr);
//	revolve(arr, arr + k - 1);//����ǰ�����ַ�
//	revolve(arr + k, arr + sz - 1);//������ĸ��ַ�
//	revolve(arr, arr + sz - 1);//���������ַ�
//}
//int main()
//{
//
//	char arr[] = "abcdef";
//	move(arr, 2);
//	printf("%s", arr);
//
//	return 0;
//}

//�ж�һ���ַ�����ת���Ƿ����һ�����
//int is_lefe_move(char* arr1, char* arr2)
//{
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i <len-1 ; i++)
//	{
//		move(arr1, 1);
//		int ret = strcmp(arr1, arr2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcdefa";
//	int ret = is_lefe_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//
//
//
//	return 0;
//}
//
//

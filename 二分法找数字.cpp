//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 10;
//	int wu[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(wu) / sizeof(wu[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (a == wu[i])
//		{
//			printf("a = %d   �ҵ���", a);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���");
//	
//}

// ���ַ�������  �Ż��㷨
//#include <stdio.h>
//int main()
//{
//	int wu[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(wu) / sizeof(wu[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 7;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (wu[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (wu[mid] < k)
//		{
//			left = left + 1;
//
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//////}
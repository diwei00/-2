//#include <stdio.h>
//int main()
//{
//	int day = 1;
//	scanf_s("%d", &day);
//	if (day == 1)
//		printf("����һ\n");
//	else if (day == 2)
//		printf("���ڶ�\n");
//	else if (day == 3)
//		printf("���ڶ�\n");
//
//	return 0;
//}
//switch case�������������һ�ֱ������ظ�
//
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	//case ������γ������ʽ
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://Ĭ�ϵ����(��˳������ﶼ���ԣ�
//		printf("�������\n");
//		break;
//
//
//	}
//
//
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:Ĭ��ֵ
//		break;
//
//
//	}
//	printf("m = %d, n = %d", m, n);
//
//
//	return 0;
//}
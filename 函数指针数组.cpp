//int main()
//{
//	char* my_strcpy(char* dest, char* src);
//	char* (*pf)(char*, char*) = my_strcpy;
//	char* (*pfarr[4])(char*, char*) = { my_strcpy };
//	return 0;
// }

//������
//#include <stdio.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("**1.add          2.sub     **\n"); 
//	printf("**3.mul          4.div     **\n"); 
//	printf("*******    0.exit     *******\n");
//	printf("*****************************\n");
//
//
//
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int(*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("���������ѡ��\n");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("��������������֣�\n");
//			scanf_s("%d%d", &a, &b);
//			int ret = pf[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������");
//		}


		/*switch(input)
		{
		case 1:
			printf("%d\n", Add(a, b));
			break;
		case 2:
			printf("%d\n", Sub(a, b));
			break;
		case 3:
			printf("%d\n", Mul(a, b));
			break;
		case 4:
			printf("%d\n", Div(a, b));
			break;
		case 0:
				printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
			
		}*/
//	} while (input);
//
//
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//�ṹ��ؼ���   �ṹ���ǩ    ͳ�ƽṹ������
//struct book
//{
//    char name[50];
//    short price;
//
//};//�ֺŽ������Ͷ���
//int main()
//{
//
//    //���ýṹ�����ʹ���һ�������͵Ľṹ�����
//    struct book wuhao = { "��ƺ�˧",88 };
//    //strcpy(wuhao.name, "wuhao....");
//    printf("%s\n", wuhao.name);
//    printf("%d\n", wuhao.price);
//    struct book* pb = &wuhao;//ȡ��ַ
//    printf("%s\n",(*pb).name);
//    printf("%d\n", (*pb).price);
//    printf("%s\n", pb->name);
//    return 0;
//}

//#include <stdio.h>
//typedef struct inm
//{
//	char name[50];
//	int age;
//	char sex[20];
//
//}inm;
//int main()
//{
//	inm wuhao = { "wuhao",19,"��" };
//	inm* pa = &wuhao;
//	printf("%s\n", wuhao.name);
//	printf("%d\n", (*pa).age);
//	printf("%s\n", pa->sex);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[100] = { 0 };
//    gets_s(str);
//    int len = strlen(str);
//    int i1 = 0;
//    int j1 = 0;
//    int i2 = 0;
//    int j2 = len - 1;
//    //�����һ�����ʵ���Ԫ��
//    int k = len - 1;
//    for (k = len; k >= 0; k--)
//    {
//        if (str[k] == ' ')
//        {
//            return k;
//        }
//    }
//    i2 = k - 1;
//    //�ҵ�һ�����ʵ�βԪ��
//    int l = 0;
//    for (l = 0; l < len - 1; l++)
//    {
//        if (str[l] == ' ')
//        {
//            return l;
//        }
//    }
//    j1 = l - 1;
//    //����һ��ͬ���������
//    char tmp[100] = { 0 };
//    int end = len - 1;
//    int begin = 0;
//    //�ѵ�һ�����ʸ�����濽
//    int k2 = 0;
//    for (k2 = j1; k2 >= i2; k2--)
//    {
//        tmp[end] = str[k2];
//        end--;
//    }
//    //�����һ�����ʸ���һ����
//    int k3 = 0;
//    for (k3 = i2; k3 <= j2; k3++)
//    {
//        tmp[begin] = str[k3];
//        begin++;
//    }
//
//    printf("%s", tmp);
//
//    return 0;
//}
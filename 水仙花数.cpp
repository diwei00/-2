//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 100000; i++)
//    {
//        int n  = 1;
//        int tmp = i;
//        //����i��λ��
//        while (tmp /= 10)
//        {
//            //tmp=tmp/10
//            n++;
//        }
//        //����ÿһλ��n�η�֮��
//        int sum = 0;
//        tmp = i;
//        while (tmp)
//        {
//            sum += pow(tmp % 10, n);
//            tmp /= 10;
//        }
//        //�ж�i�Ƿ�Ϊ������
//        if (i == sum)
//        {
//            printf("%d ", sum);
//        }
//
//
//    }
//    return 0;
//}
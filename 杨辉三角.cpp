#include <stdio.h>
int main()
{
	int arr[20] = { 1};
	int arr2[20] = { 0 };
	int i = 1;
	int tmp = 0;
	int index = 0;
	for (i = 0; i <= 10; i++)
	{
		int j = 0;
		for (j = 0; j < 20 - 2 * i; j++)
		{
			printf(" ");
		}
		tmp = 0;
		for (j = 1; j <= i + 1; j++)
		{

			
			if (i >= 2)
			{
				if (j == 1)
				{
					//��ӡ��ǰ���1
					printf("%3d   ", arr[index]);
					arr2[tmp++] = arr[index];
					//��ÿ�д�ӡ�����ݴ���arr2��
				}
				else if (j == i + 1)
				{
					//��ӡ������1
					printf("%3d   ", arr[index]);
					arr2[tmp++] = arr[index];
				}
				else
				{
				    //��ӡ�м����
					printf("%3d   ",(arr[j - 2] + arr[j - 1]));
					arr2[tmp++] = (arr[j -2 ] + arr[j - 1]);
				}
			}
			else
			{
				//��ӡǰ����
				printf("%3d   ", arr[index]);
				arr2[tmp++] = arr[index];
			}
		}
		//����arr2��arr��
		for (j = 0; j < tmp; j++)
		{
			arr[j] = arr2[j];
		}

		printf("\n");
	}
	return 0;
}
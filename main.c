#include <stdio.h>
#include <stdlib.h>
//�㷨˼�룺

int main()
{
    int i,j,m,n;
    int k,g = 0;
    int arr[1001];
    while(scanf("%d%d",&m,&n)!= EOF)
    {
        for(j=1;j<=m;j++) //�ȸ������ÿ������ֵ1
        {
            arr[j] = 1;
        }
        for(k=1;k<m;k++)//ѭ��m-1�֣�ÿ�ֳ���һ����
        {
            int sum = 0;
            while(sum<n)
            {
                if(g<m)
                {
                    g++;
                }
                else
                {
                    g = 1;//�ִӵ�һ����ʼ��
                }
                sum+=arr[g];   //g���������������ѭ������

            }
            arr[g] = 0;
        }

        for(j=1;j<=m;j++) //<=m,������n
        {
            if(arr[j] == 1)
            {
                printf("%d\n",j); //��ӡj,������arr[j]
                break;
            }
        }

    }
    return 0;
}

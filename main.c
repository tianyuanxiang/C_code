#include <stdio.h>
#include <stdlib.h>
//算法思想：

int main()
{
    int i,j,m,n;
    int k,g = 0;
    int arr[1001];
    while(scanf("%d%d",&m,&n)!= EOF)
    {
        for(j=1;j<=m;j++) //先给数组的每个数赋值1
        {
            arr[j] = 1;
        }
        for(k=1;k<m;k++)//循环m-1轮，每轮出来一个猴
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
                    g = 1;//又从第一个开始了
                }
                sum+=arr[g];   //g是用来控制数组的循环数的

            }
            arr[g] = 0;
        }

        for(j=1;j<=m;j++) //<=m,而不是n
        {
            if(arr[j] == 1)
            {
                printf("%d\n",j); //打印j,而不是arr[j]
                break;
            }
        }

    }
    return 0;
}

#include <stdio.h>
int main(void)
{int a;
    scanf("%d",&a);int f=!(a<0||(a>=10&&a<12)||a>=15);    /* 0以上9以下、または12以上14以下の場合に1（真）になる */
    if(f==1)
     /* 条件を満たしていればOK、そうでなければNGを表示する */
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}

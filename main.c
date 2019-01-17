#include <stdio.h>
struct Point
{
    int x;
    int y;
};
int main()
{
    int index = 0;
    struct Point arr[100];
    printf("huanyingjinruzhuancheweizhigaunlixitong!\n");

    while (1)
    {
        printf("1---tianjiacheliangweizhi\n");
        printf("2---shanchucheliangweizhi\n");
        printf("3---xianshiquanbucheliangweizhi\n");
        printf("4---fanhuiliwoweizhizuijindecheliang\n");
        printf("5---tuichu\n");

        printf("qingxuanzexiangyinggongneng\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("qingshurucheliangweizhidexzuobiaoheyzuobiao:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);

            arr[index].x = x;
            arr[index].y = y;

            index++;

            printf("tianjiawancheng,dianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("yingyongyijingtuichu\n");
            break;
        }
    }
}

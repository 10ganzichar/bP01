#include <iostream>

int main()
{
    int nWeight{};
    int nTotal{};

    scanf("%d",&nWeight);
    while(nWeight>=0)
    {
        if(nWeight%5==0)
        {
            nTotal+=nWeight/5;
            printf("%d",nTotal);
            return 0;
        }
        else
        {
            nWeight-=3;
            nTotal++;
        }
    }
    printf("-1");
}

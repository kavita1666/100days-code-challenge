#include<stdio.h>

int main()
{
    int h1,m1,h2,m2;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    h1=h1*60 +m1;
    h2=h2*60 +m2;
    int r=(h1+h2)/2;

    int h3,m3;
    h3=r/60;
    m3=r%60;

    printf("%02d:%02d",h3,m3);
    return 0;
}

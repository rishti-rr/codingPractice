
#include<stdio.h>
int main()
{
    int a,b,c,x,y,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
        if(a>=x && b>=y) {printf("YES\n");}
        else if(x>a&&b>=y)
        {
            if((x-a)<=c) {printf("YES\n");}
            else {printf("NO\n");}
        }
         else if(x>a&&y>b)
        {
            if(((x-a)+(y-b))<=c) {printf("YES\n");}
            else {printf("NO\n");}
        }
        else if(a>=x&&y>b)
        {
         if((y-b)<=c) {printf("YES\n");}
            else {printf("NO\n");}
        }
        else {printf("NO\n");}
 
    }
    return 0;
 
}
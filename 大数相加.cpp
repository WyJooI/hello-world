#include<cstdio>
#include<cstring>
using namespace std;
void muladd(char *a,char *b)
//a+b;½á¹û´æÓÚa£» 
{
        int la,lb,f=0,g=0;
		strrev(a);     strrev(b);
        la=strlen(a);  lb=strlen(b);
        for(int m=0;;m++)
        {
            if((!a[m]&&!b[m])&&!f)break;
            g=(a[m]+b[m])%48+f;
            a[m]=g%10+48;
            f=g/10;
        }
        strrev(a);
}
int main()
{
    int n,t;
    char a[1010],b[1010];
    scanf("%d",&t);
    for(n=1;n<=t;n++)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        scanf("%s%s",a,b);
        printf("Case %d:\n",n);
        printf("%s + %s = ",a,b);
        muladd(a,b);
        printf("%s\n",a);
        if(n!=t)printf("\n");
    }
    return 0;
}

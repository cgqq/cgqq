#include<stdio.h>
#include<string.h>
int n1(char a[10])
{
    if(strcmp(a,"��")==0)    return 0;
    else if(strcmp(a,"һ")==0)   return 1; 
    else if(strcmp(a,"��")==0)   return 2;
    else if(strcmp(a,"��")==0)   return 3;
    else if(strcmp(a,"��")==0)   return 4;  
    else if(strcmp(a,"��")==0)   return 5;
    else if(strcmp(a,"��")==0)   return 6;
    else if(strcmp(a,"��")==0)   return 7;
    else if(strcmp(a,"��")==0)   return 8;
    else if(strcmp(a,"��")==0)   return 9;
    else if(strcmp(a,"ʮ")==0)   return 10;
}

int add(char a[10],int x,int y)
{   
    int a1;
    if(strcmp(a,"����")==0)   a1=x+y;
    if(strcmp(a,"����")==0)   a1=x-y;
    return a1;
}

char n2(int p)
{
    if(p==0)    printf("��");
    else if(p==1)    printf("һ");
    else if(p==2)    printf("��");
	else if(p==3)    printf("��");
    else if(p==4)    printf("��");
    else if(p==5)    printf("��");
    else if(p==6)    printf("��");
    else if(p==7)    printf("��");
    else if(p==8)    printf("��");
    else if(p==9)    printf("��");
    else if(p==10)    printf("ʮ");
	return 0;
}
int main()
{
	int n1(char a[10]);
    int add(char a[10],int x,int y);
    char n2(int p);
    char q[10],w[10],e[10],r[10];
    char b1[10],b2[10],b3[10],b4[10],b5[10],b6[10],b7[10],b8[10],b9[10],b10[10];
    int m,n; 
    scanf("%s %s %s %s",&q,&w,&e,&r);
    m=n1(r);
    while(1)
    {
        scanf("%s",q);
        if(strcmp(q,"����")==0)
        {
            scanf("%s",w);
            break;
        } 
        else
        { 
            scanf("%s %s",w,e);
            n=n1(e);
            m=add(w,m,n); 
        }  
    }
    n2(m);
    scanf("%s %s %s %s %s %s %s %s %s %s",b1,b2,b3,b4,b5,b6,b7,b8,b9,b10);
	int num=n1(b4);
	int len=strlen(b7);
	int len1=strlen(b10);
	if(m>num)
	for (int i1=1;i1<len-1; i1++) 
	{
		printf("%c",b7[i1]);
	}
	else
	
	for (int i2=1;i2<len1-1;i2++) 
	{
		printf("%c",b10[i2]);
	}
    return 0;
} 
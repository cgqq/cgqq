#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char zero[] = "零",
one[] = "一",
two[] = "二",
three[] = "三",
four[] = "四",
five[] = "五",
six[] = "六",
seven[] = "七",
eight[] = "八",
nine[] = "九",
ten[] = "十";
void output(int i);
int Cn_translator(char* s);
int Cn_translator1(char* s);
int Cn_translator2(char* s);
int Cn_translator3(char* s);
int main()
{
    char word[10];
    
    char op1[] = "等于",
        op2[] = "增加",
        op3[] = "减少";
    int i;
    int money = 0;
    for (i = 0;i < 12;i++)
    {
        fflush(stdin);
        scanf("%s", word);
        if (strcmp(word, op1) == 0)
        {
            scanf("%s", word);
            i += 1;
            money = Cn_translator(word);
        }
        else
        if (strcmp(word, op2) == 0)
        {
            scanf("%s", word);
            i += 1;
            money+= Cn_translator(word);
        }
        else
        if (strcmp(word, op3) == 0)
        {
            scanf("%s", word);
            i += 1;
            money-= Cn_translator(word);
        }

    }
    
    output(money);
    return 0;
}
int Cn_translator(char* s)
{
    if (strlen(s) == 2) 
    {
        return  Cn_translator1(s);
    }
    else
    if (strlen(s) == 4)
    {
        return  Cn_translator2(s);
    }
    else
    if (strlen(s) == 6)
    {
        return  Cn_translator3(s);
    }
}
int Cn_translator1(char* s)
{
    if (strcmp(s, zero) == 0)
        return 0;
    if (strcmp(s, one) == 0)
        return 1;
    if (strcmp(s, two) == 0)
        return 2;
    if (strcmp(s, three) == 0)
        return 3;
    if (strcmp(s, four) == 0)
        return 4;
    if (strcmp(s, five) == 0)
        return 5;
    if (strcmp(s, six) == 0)
        return 6;
    if (strcmp(s, seven) == 0)
        return 7;
    if (strcmp(s, eight) == 0)
        return 8;
    if (strcmp(s, nine) == 0)
        return 9;
    if (strcmp(s, ten) == 0)
        return 10;
}
int Cn_translator2(char* s)
{
    int m=0;
    int i,j;
    char k[3];   
    for (i = 0,j=10;i < 4;i += 2,j/=10)
    {
        k[0] = s[i];
        k[1] = s[i+1];
        k[2] = '\0';
        
        if(strcmp(k, one) == 0)
            m += 1;
        if(strcmp(k, two) == 0)
            m += (2 * j);
        if(strcmp(k, three) == 0)
            m += (3 * j);
        if (strcmp(k, four) == 0)
            m += (4 * j);
        if (strcmp(k, five) == 0)
            m += (5 * j);
        if (strcmp(k, six) == 0)
            m += (6 * j);
        if (strcmp(k, seven) == 0)
            m += (7 * j);
        if (strcmp(k, eight) == 0)
            m += (8 * j);
        if (strcmp(k, nine) == 0)
            m += (9 * j);
        if(strcmp(k, ten) == 0)
            m += 10;
        
    }
       return (m);
}
int Cn_translator3(char* s) 
{
    int m = 0;
    int i, j;
    char k[3];   
    for (i = 0, j = 10;i < 6;i += 2, j /= 10)
    {
        k[0] = s[i];
        k[1] = s[i + 1];
        k[2] = '\0';
        i += 2;
        if (strcmp(k, one) == 0)
            m += 1;
        if (strcmp(k, two) == 0)
            m += (2 * j);
        if (strcmp(k, three) == 0)
            m += (3 * j);
        if (strcmp(k, four) == 0)
            m += (4 * j);
        if (strcmp(k, five) == 0)
            m += (5 * j);
        if (strcmp(k, six) == 0)
            m += (6 * j);
        if (strcmp(k, seven) == 0)
            m += (7 * j);
        if (strcmp(k, eight) == 0)
            m += (8 * j);
        if (strcmp(k, nine) == 0)
            m += (9 * j);
        
    }
    return (m);
}
void output(int i)
{
    int a, b;
    char money0[7] = { 0 };
    a = i % 10;
    b = i / 10;
    if (b != 0)
    {
        if (b != 1)
        {
            if (b == 2)
                strcat(money0, two);
            if (b == 3)
                strcat(money0, three);
            if (b == 4)
                strcat(money0, four);
            if (b == 5)
                strcat(money0, five);
            if (b == 6)
                strcat(money0, six);
            if (b == 7)
                strcat(money0, seven);
            if (b == 8)
                strcat(money0, eight);
            if (b == 9)
                strcat(money0, nine);

        }
        strcat(money0, ten);
    }
    if (a != 0)
    {
        if (a == 1)
            strcat(money0, one);
        if (a == 2)
            strcat(money0, two);
        if (a == 3)
            strcat(money0, three);
        if (a == 4)
            strcat(money0, four);
        if (a == 5)
            strcat(money0, five);
        if (a == 6)
            strcat(money0, six);
        if (a == 7)
            strcat(money0, seven);
        if (a == 8)
            strcat(money0, eight);
        if (a == 9)
            strcat(money0, nine);
     }
    
    if (a == 0 && b == 0)
        strcat(money0, zero);
    printf("%s", money0);
}
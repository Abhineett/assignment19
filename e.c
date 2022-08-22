#include<stdio.h>
void main()
{
    char str[20];
    char *p;
    p=&str;
    printf("Enter string=");
    gets(str);
    int l=strlen(str);
    p=p+l-1;
    printf("After reverse.\n");
    for(int i=0;i<l;i++)
    {
        printf("%c",*p);
        p--;
    }
}


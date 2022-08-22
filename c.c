#include<stdio.h>
void main()
{
    char str[20];
    char *p;
    p=&str;
    int nv=0,nc=0;
    printf("enter first string=");
    gets(str);
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            nv++;
        else
            nc++;
        p++;
    }
    printf("number of vowels=%d\n",nv);
    printf("number of consonants=%d\n",nc);

}

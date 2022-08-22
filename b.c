#include<stdio.h>
void swap(char *p,char *p1);
void main()
{

    char str[20];
    char str1[20];
    printf("enter first string=");
    gets(str);
    printf("enter second string=");
    gets(str1);
    swap(&str,&str1);
    printf("first string =%s \n",str);
    printf("second string=%s",str1);
}
void swap(char *p,char *p1)
{
    int i;
    char c;
    for(i=0;i<20;i++)
    {
        c=*p;
        *p=*p1;
        *p1=c;
        p++;
        p1++;
    }


}

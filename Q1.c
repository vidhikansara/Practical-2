#include<stdio.h>

int length(char []);
void copy(char [],char []);
void comp(char [],char []);
void concate(char [],char []);
int main()
{
    int l;
    char str[10],str1[10],nstr[10],st[10];
    printf("Enter string: ");
    scanf("%s",str);

    l=length(str);
    printf("length : %d",l);
    copy(str1,str);
    printf("\nEnter compare string: ");
    scanf("%s",nstr);
    comp(str,nstr);
     printf("\nEnter concate string: ");
    scanf("%s",st);
    concate(str,st);

}
int length(char s[])
{
    int c=0;
    while(s[c]!='\0')
    {
        c++;
    }
    return c;
}
void copy(char s[],char s1[])
{
    int c=0;
    while(s1[c]!='\0')
    {
        s[c]=s1[c];
        c++;
    }
    s[c]='\0';
  printf("\ncopy string: %s",s);
}
void comp(char s[],char s1[])
{
    int i,flag=0;
    if(length(s)==length(s1))
    {
        for(i=0;i<length(s);i++)
        {
            if(s[i]==s1[i])
            {
                flag=1;
            }
        }

    }
    else
    {
        printf("Not same!");
    }

    if(flag==1)
    {
        printf("same!");
    }
}
void concate(char s[],char s1[])
{
    int i,j;
    for(i=0;s[i]!='\0';i++);

    for(j=0;s1[j]!='\0';j++,i++)
    {
        s[i]=s1[j];

    }
    s[i]='\0';
    printf("concate string: %s",s);
}

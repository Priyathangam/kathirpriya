#include<stdio.h>
#include<string.h>
void main()
{

    char str[100],temp;
    int i=0,j=0;
    printf("\nenter the string:");
    gets(str);
    j=strlen(str)-1;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
}
printf("reversed string  is :%s",str);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{

    int arr[100],temp;
    int i=0,j=0;
    printf("enter the integer:");
    gets(arr);
    j=strlen(arr)-1;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf(" reversed integer is:%d",arr);
    getch();
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i,s,c,option;
    printf("Enter the array size::\n");
    scanf("%d",&s);
    int a[s];
    printf("Enter a array:\n");

    for(i=0; i<s; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n");
A:
    printf("0......Exit\n");
    printf("1......view_all_elements\n");
    printf("2......insert_an_elements\n");
    printf("3......delete_an_elements\n");
    printf("4......search_an_elements\n");
    printf("5......sort_all_elements_ascending_order\n");
    printf("6......sort_all_elements_decending_order\n");
    printf("7......find memory location\n");


    printf("\n\n");
    printf("Enter your option:");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
    {
        for(i=0; i<s; i++)
        {
            printf("%d\n",a[i]);
        }
        getch();
        system("cls");
        goto A;

    }

    case 2:
    {
        int element,position;
        printf("Enter the inserted element:");
        scanf("%d",&element);
        printf("Enter the position where you will be inserted:");
        scanf("%d",&position);
        for(i=s; i>=position; i--)
        {
            a[i+1]=a[i];
        }
        a[position]=element;
        s++;
        printf("after the insertion of the array we get:\n");
        for(i=0; i<s; i++)
        {
            printf("%d\n",a[i]);
        }
        getch();
        system("cls");
        goto A;

    }
    case 3:
    {
        int element,pos,found;
        printf("Enter the deleted element:\n");
        scanf("%d",&element);
        for(i=0; i<s; i++)
        {
            if(a[i]==element)
            {
                found=1;
                pos=i;
                break;
            }
        }
        if(found==1)
        {
            for(i=pos; i<s-1; i++)
            {
                a[i]=a[i+1];
            }

        }
        printf("After deletion the array is:\n");


        for(i=0; i<s-1; i++)
        {
            printf("%d\n",a[i]);
        }
        getch();
        system("cls");
        goto A;
    }
    case 4:
    {
        int element,pos,found,s;
        printf("Enter the searching element:\n");
        scanf("%d",&element);
        for(i=0; i<s; i++)
        {
            if(a[i]==element)
            {
                found=1;
                pos=i;
                break;
            }
        }
        if(found==1)
        {
            printf("item is found at %d position",i+1);

        }
        else
        {
            printf("Item is not found");
        }
        getch();
        system("cls");
        goto A;
    }
    case 5:
    {
        int j,temp;
        for(i=1; i<=s-1; i++)
        {
            for (j=0; j<=s-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

        printf("Sorted array in ascending order is:\n");
        for (i=0; i<s; i++)
        {
            printf("%d\n",a[i]);
        }
        getch();
        system("cls");
        goto A;
    }
    case 6:
    {
        int  total=s-1,j,temp;
        for(i=0; i<total; i++)
        {
            for (j=0; j<total; j++)
            {
                if(a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

        printf("Sorted array in descending order is:\n");
        for (i=0; i<s; i++)
        {
            printf("%d\n",a[i]);
        }
        getch();
        system("cls");
        goto A;

    }
    case 7:
        {
            int i;
            printf("Founded memory allocation:\n");
            scanf("%d",&i);
            printf("%d\n",&a[i]);
            getch();
            system("cls");
            goto A;
        }
    case 0:
    {
        printf("Exit");
        return 0;
    }
    default:
        {
            printf("you press wrong option,please press correct option(0 to 7),thank you.\n");
            goto A;
        }
        printf("\n\n");
    }
}

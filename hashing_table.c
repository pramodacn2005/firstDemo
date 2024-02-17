#include<stdio.h>
#include<stdlib.h>
#define HASH_SIZE 100
#include<string.h>

typedef struct employee
{
    int id;
    char name[20];
}Employee;

void intilize_ht(Employee a[])
{
    int i;
    for(i=0;i<=HASH_SIZE;i++)
        a[i].id=0;
}

int H(int k)
{
    return (k % HASH_SIZE);
}

void insert_ht(int id,char name[],Employee a[])
{
    int i,index,h_value;
    h_value=H(id);

    index=((h_value+i)% HASH_SIZE);
    if(a[index].id==0)
    {
        a[index].id=id;
        strcpy(a[index].name,name);
    }

    if(i==HASH_SIZE)
    {
        printf("hashing table is full\n");
    }
}

void display_ht(Employee a[],int n)
{
    int k,i;
    printf("H_VALUE\tEMP_ID\tEMP_NAME\n");
    for(i=0;i<n;i++)
    {
        if(a[i].id!=0)
        {
            printf("%d\t%d\t%s\t\n",i,a[i].id,a[i].name);
        }

    }
}

void main()
{
    Employee a[HASH_SIZE];
    char name[20];
    int key,id,choice,flag;
    intilize_ht(a);
    while(1)
    {
    printf(".....hashing function is.....\n");
    printf("...1.insert,2.display,3.exit...\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:printf("enter a employee id:\n ");
               scanf("%d",&id);
               printf("enter a employee name\n");
               scanf("%s",&name);
               insert_ht(id,name,a);
               break;

        case 2:printf("display hashing function:\n");
               display_ht(a,HASH_SIZE);
               printf("\n");
               break;

        case 3:exit(0);

        default:printf("invalid choice\n");
        exit(0);
    }
}
}

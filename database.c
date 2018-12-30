#include<stdio.h>
struct college
    {
        char roll[10];
        char name1[20],name2[20];
        char gender[5];
        float math[3],comm[3],cprog[3],phy[3],iel[3];
    }s[2];
int k;
void insertion();
void functions();
void main()
{
    printf("\t\t\t\t|| WELCOME TO IIIT BBSR ACADEMIC DATABASE ||");
    printf("\n------------------------------------------------------------------------------------------------------------------------");

    printf("Select the branch \n");
    printf("---------------------------\n");
    printf("1 \t CSE\n");
    printf("2 \t ETC\n");
    printf("3 \t EEE\n");
    printf("4 \t IT\n");
    printf("5 \t CE\n");
    printf("\nENTER BRANCH CODE-");
    scanf("%d",&k);
    printf("Enter the details of students");
    insertion();
    functions();

    getch();
}
void insertion()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nEnter Roll No.  \t:B%d180",k);
        scanf("%s",&s[i].roll);
        printf("Enter Student Name.\t:");
        scanf("%s",&s[i].name1);
        printf("Enter Gender(M/F)  \t:");
        scanf("%s",&s[i].gender);
    }
}

void functions()
{
    int p;
    read:
    printf("\nChoose an option to proceed by entering the Code given below\n");
    printf("Code \t Feature\n");
    printf("---------------------------\n");
    printf("1 \t Information of Students\n");
    printf("2 \t Enter Mid-Sem marks of Students\n");
    printf("3 \t Mid-Sem marks of Students\n");
    printf("\nENTER CODE-");
    scanf("%d",&p);
    int i;
    switch(p)
    {
        case(1):

            for(i=0;i<2;i++)
            {
            printf("\nRoll No. : B%d180%s",k,s[i].roll);
            printf("\t Name    : %s",s[i].name1);
            printf("\t\t Gender : %s",s[i].gender);
            }
            printf("\n");
            goto read;
            break;
        case(2):
            printf("Enter Mid Semester marks\n");
            printf("Roll no.\tMaths\t\tComm. Skills\t\tProgm.\t\tIEL\t\tPhysics\n");
            printf("---------------------------------------------------------------------\n");
            for(i=0;i<2;i++)
            {

                printf("B%d180%s\t",k,s[i].roll);
                printf("\t\t Enter Math marks: ");
                scanf("%f",&s[i].math);
                printf("\n\t\t Enter Communication Skill marks: ");
                scanf("%f",&s[i].comm);
                printf("\n\t\t Enter Programming marks:");
                scanf("%f",&s[i].cprog);
                printf("\n\t\t Enter IEL marks:");
                scanf("%f",&s[i].iel);
                printf("\n\t\t Enter Physics marks:");
                scanf("%f",&s[i].phy);
                printf("\n");
            }
            goto read;
            break;
        case(3):
            printf("Mid Sem marks are not yet feeded\n");
            printf("Roll no.\tMaths\t\tComm. Skills\t\tProgm.\t\tIEL\t\tPhysics\n");
            printf("---------------------------------------------------------------------\n");
             for(i=0;i<2;i++)
            {
                printf("B%d180%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",k,s[i].roll,s[i].math,s[i].comm,s[i].cprog,s[i].iel,s[i].phy);
            }
            goto read;
            break;

    }
}
